#include "form_main.h"
#include "ui_form_main.h"

Form_main::Form_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_main)
{
    ui->setupUi(this);
}

Form_main::Form_main(int _id): QDialog(0),
    ui(new Ui::Form_main)
{

    ui->setupUi(this);
    this->id=_id;                                                           //get id from Log In Form and assign it
    SetValueDataBase("base2","localhost",5432,"lolka", "cfyz,kj");  //set value to database
    ComboBoxUpdate();                                           //Update ComboBox (show all objects)
    DisplayCountObject();                                       //Show count objects
    connect(this,SIGNAL(remove_click()),SLOT(ComboBoxUpdate()));                //link signal remove and Update ComboBox
    connect(this,SIGNAL(remove_click()),SLOT(DisplayCountObject()));            //link ....
    connect(this,SIGNAL(ComboBoxUpdateSignal()),SLOT(on_combo_objectlist_activated())); //When we changed data in ComboBox we change name of Object in label


}

Form_main::~Form_main()
{
    delete ui;
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
    Msgbox.setText("Error remove query, may be table not exist");      //show message error
    Msgbox.exec();
}



void Form_main::DisplayCountObject()
{


       QSqlQuery query(*db);                                                //link query with database


           if(!query.exec("SELECT COUNT(*) FROM model_user WHERE user_id="+QString::number(id)+";"))         //count quantity objects that have current user
              ErrorQuery();
           else
           {
               query.next();
                  ui->lcdNumber->display(query.value(0).toString());        //Show quntity objects that have current user
                        emit ComboBoxUpdateSignal();
               }



}


void Form_main::ComboBoxUpdate()
{
    ui->combo_objectlist->clear();

         QSqlQuery query(*db);                                                //link query with database


             if(!query.exec("SELECT id FROM model_user WHERE user_id="+QString::number(id)+";"))         //create query to database
                ErrorQuery();
             else
             {
             while (query.next()) {                                               //parse all data that we get from query
                                              //assign id = id user from database
                      ui->combo_objectlist->addItem(query.value(0).toString());
                 }




      }
             emit ComboBoxUpdateSignal();
}

void Form_main::on_butt_remove_clicked()
{

   QSqlQuery query(*db);                                                //link query with database


        if(!query.exec("DELETE FROM object_points WHERE id_object="+ui->combo_objectlist->currentText()+";") || !query.exec("DELETE FROM model_user WHERE id="+ui->combo_objectlist->currentText()+";"))         //create query to database
           ErrorRemove();
        else
        {
        emit this->remove_click();
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


       if(!query.exec("SELECT name_model FROM model_user WHERE id="+ ui->combo_objectlist->currentText()+";"))         //create query to database
           ErrorQuery();

         query.next();                                             //parse all data that we get from query
        ui->label_name_object->setText(query.value(0).toString());
}
