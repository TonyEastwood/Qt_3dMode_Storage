#include "../Headers/form_main.h"
#include "ui_form_main.h"
#define BASE_NAME "bwowjxtm"
#define SERVER_NAME "dumbo.db.elephantsql.com"
#define PORT 5432
#define BASE_USERNAME "bwowjxtm"
#define BASE_PASSWORD "1yOhssqp2IQ0eKbT0_FCHnkx_5eUMj6g"
#define BASE_TYPE "QPSQL"
Form_main::Form_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_main)
{
    ui->setupUi(this);
}

Form_main::Form_main(int _id): QDialog(0),
    ui(new Ui::Form_main)
{
    this->setFixedSize(500,300);                              //set Form size and fixe it
    ui->setupUi(this);
    this->id=_id;                                             //get id from Log In Form and assign it
    SetValueDataBase(BASE_NAME,SERVER_NAME,PORT,BASE_USERNAME, BASE_PASSWORD);  //set value to database
    ComboBoxUpdate();                                           //Update ComboBox (show all objects)
    DisplayCountObject();                                       //Show count objects
    connect(this,SIGNAL(remove_click()),SLOT(on_butt_update_clicked()));                //Update DropBOx and label, and lcdCOunt
    connect(this,SIGNAL(ComboBoxUpdateSignal()),SLOT(on_combo_objectlist_activated())); //When we changed data in ComboBox we change name of Object in label
}

Form_main::~Form_main()
{
    delete ui;
    db->close();
}

void Form_main::SetValueDataBase(QString BaseName, QString HostName, int port, QString login, QString pass)
{
    QMessageBox Msgbox;
    db->setDatabaseName(BaseName);                                         //set data base name
    db->setHostName(HostName);                                         //set database host
    db->setPort(port);                                                    //set port
    if (!db->open(login, pass)) {                                           //if error till we open
        Msgbox.setWindowTitle("Error open database");                    //show error open database
        Msgbox.setText("Invalid username or password");
        Msgbox.exec();

    }

}

void Form_main::ErrorQuery()
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Error query");                                        //if query send error
    Msgbox.setText("Error send query to database, may be table not exist");      //show message error
    Msgbox.exec();
}

void Form_main::MessageSuccessRemove()
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Message_Info");                                        //if query send error
    Msgbox.setText("The removal was successful!");      //show message error
    Msgbox.exec();
}

void Form_main::ErrorRemove()
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Error remove");                                        //if query send error
    Msgbox.setText("Error remove query, may be object not exist or already removed");      //show message error
    Msgbox.exec();
}

void Form_main::SetVectorValue()
{
    _vector_3d.clear();
    QSqlQuery query(*db);                                                //link query with database

    if(!query.exec("SELECT x,y,z,x2,y2,z2 FROM object_points WHERE id_object="+ui->combo_objectlist->currentText()+";"))         //create query to database
           ErrorQuery();
        else
        {
             while (query.next()) {                                               //parse all data that we get from query
                                         //assign id = id user from database
                 //ui->combo_objectlist->addItem(query.value(0).toString());
                 _vector_3d.push_back({query.value(0).toFloat(),query.value(1).toFloat(),query.value(2).toFloat(),query.value(3).toFloat(),query.value(4).toFloat(),query.value(5).toFloat()});
                }
           }
}



void Form_main::DisplayCountObject()
{
       QSqlQuery query(*db);                                                //link query with database

       if(query.exec("SELECT COUNT(*) FROM model_user WHERE user_id="+QString::number(id)+";"))         //count quantity objects that have current user
           {
               query.next();
               ui->lcdNumber->display(query.value(0).toString());        //Show quntity objects that have current user
               emit ComboBoxUpdateSignal();                             //emit siganl ComboBoxUp...
               }
           else
                ui->lcdNumber->display(QString::number(0));        //Show 0 in lcd
}


void Form_main::ComboBoxUpdate()
{
    ui->combo_objectlist->clear();                  //clear ComboBox from all data
    QSqlQuery query(*db);                                                //link query with database
             if(query.exec("SELECT id FROM model_user WHERE user_id="+QString::number(id)+";"))         //create query to database
             {
                while (query.next()) {                                               //parse all data that we get from query
                      ui->combo_objectlist->addItem(query.value(0).toString());
                 }
             }
             emit ComboBoxUpdateSignal();                           //emit signal ComboBox...
}

void Form_main::on_butt_remove_clicked()
{
   QSqlQuery query(*db);                                                //link query with database

   if(!query.exec("DELETE FROM object_points WHERE id_object="+ui->combo_objectlist->currentText()+";") || !query.exec("DELETE FROM model_user WHERE id="+ui->combo_objectlist->currentText()+";"))         //create query to database
           ErrorRemove();
     else
        {
        emit this->remove_click();                          //emit signal removeclick
        MessageSuccessRemove();                             //show message, remove was success
        }
}

void Form_main::on_butt_create_clicked()
{
    Form_Add = new Form_Add_Object(id);                         //create new form for add new Object
    Form_Add->show();                                           //show new form
}

void Form_main::on_combo_objectlist_activated()
{
    QSqlQuery query(*db);                                                //link query with database
       if(query.exec("SELECT name_model FROM model_user WHERE id="+ ui->combo_objectlist->currentText()+";"))         //create query to database
        {
             query.next();                                             //parse all data that we get from query
             ui->label_name_object->setText(query.value(0).toString());
       }
}

void Form_main::on_butt_show_clicked()
{
    SetVectorValue();
    Form_3dModel = new form_3dmodelshow(_vector_3d);                         //create new form for add new Object
    Form_3dModel->show();
}

void Form_main::on_butt_update_clicked()
{
    ComboBoxUpdate();                                           //Update ComboBox (show all objects)
    DisplayCountObject();                                       //Show count objects
}
