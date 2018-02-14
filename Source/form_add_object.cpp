#include "../Headers/form_add_object.h"
#include "ui_form_add_object.h"
#define BASE_NAME "bwowjxtm"
#define SERVER_NAME "dumbo.db.elephantsql.com"
#define PORT 5432
#define BASE_USERNAME "bwowjxtm"
#define BASE_PASSWORD "1yOhssqp2IQ0eKbT0_FCHnkx_5eUMj6g"
#define BASE_TYPE "QPSQL"
Form_Add_Object::Form_Add_Object(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_Add_Object)
{
    ui->setupUi(this);
}

Form_Add_Object::Form_Add_Object(int _id):
    QDialog(0),
    ui(new Ui::Form_Add_Object)
{
    this->setFixedSize(623,463);                    //set Form size and fixed it
    ui->setupUi(this);
    this->id=_id;                                   //assign user id
    SetValueDataBase(BASE_NAME,SERVER_NAME,PORT,BASE_USERNAME, BASE_PASSWORD);  //set value for database
}

Form_Add_Object::~Form_Add_Object()
{
    delete ui;
    db->close();
}

void Form_Add_Object::ErrorSubmit()
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Submit_error");                                        //if query send error
    Msgbox.setText("Please, add new row and input data");                        //show message error
    Msgbox.exec();
}

void Form_Add_Object::SetValueDataBase(QString BaseName, QString HostName, int port, QString login, QString pass)
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

void Form_Add_Object::ErrorQuery()
{
        QMessageBox Msgbox;
        Msgbox.setWindowTitle("Error query");                                        //if query send error
        Msgbox.setText("Error send query to database, may be table not exist");      //show message error
        Msgbox.exec();
}

void Form_Add_Object::ClearTableView()                                      //clear all data in TableView
{
        while(this->row_quant>0)
            model->removeRow(--this->row_quant);
}

void Form_Add_Object::SuccessCreateObject(QString _object_name)                 //message when object was submited correctly
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Create object");                                        //if query send error
    Msgbox.setText("The object "+_object_name+" was created successfully!");      //show message error
    Msgbox.exec();
}

int Form_Add_Object::GetIdLastObject()                                        //get last id object in table in database
{
    int _id=0;                                                          //id last object
    QSqlQuery query(*db);                                                //link query with database
      if(!query.exec("SELECT id FROM model_user;"))                  //get last id objects to create new
          ErrorQuery();
      else
      {
          while (query.next()) {                                               //parse all data that we get from query
                   _id=query.value(0).toInt();                              //set _id to value that last id object
              }
    }
      return _id;                                               //return last id
}



void Form_Add_Object::on_butt_add_row_clicked()
{
    ui->tableView->setModel(model);                     //set current tableview model
    if(this->row_quant<0)                               //if we delete raw so often, we get negative row (-100 for instance)
        this->row_quant=0;
    QStringList horizHeader;                            //create table with value X Y Z X2 Y2 Z2
    horizHeader.append("x");
    horizHeader.append("y");
    horizHeader.append("z");
    horizHeader.append("x2");
    horizHeader.append("y2");
    horizHeader.append("z2");

    model->setHorizontalHeaderLabels(horizHeader);              //set the header like x y z x2 y2 z2
    item = new QStandardItem(QString(""));                      //add new empty row
    model->insertRow(this->row_quant++,item);                   //create new row
}

void Form_Add_Object::on_butt_delete_row_clicked()
{
         model->removeRow(--this->row_quant);                       //remove row from TableVIew
}

void Form_Add_Object::on_butt_submit_clicked()
{
    QString object_name;

    if(ui->edit_object_name->text()=="")
        object_name="object";
    else object_name=ui->edit_object_name->text();

    float x{0}, y{0}, z{0}, x2{0}, y2{0}, z2{0};                    //coords of linked point
    int id_obj=0;                                                    //id last object (that need to add new object)
    if(this->row_quant<=0)
        ErrorSubmit();
    else
    {
        QSqlQuery query(*db);                                                //link query with database
        id_obj=GetIdLastObject();                                             //get last object id
        id_obj++;

         if(!query.exec("INSERT INTO model_user (id, user_id, name_model) VALUES ("+QString::number(id_obj)+","+QString::number(this->id)+", '"+object_name+"');"))
             //INSERT new object into database
             ErrorQuery();
        for(int i=0;i<this->row_quant;i++)
        {
          x= ui->tableView->model()->data(ui->tableView->model()->index(i,0)).toFloat();
          y=ui->tableView->model()->data(ui->tableView->model()->index(i,1)).toFloat();
          z=ui->tableView->model()->data(ui->tableView->model()->index(i,2)).toFloat();
          x2=ui->tableView->model()->data(ui->tableView->model()->index(i,3)).toFloat();
          y2=ui->tableView->model()->data(ui->tableView->model()->index(i,4)).toFloat();
          z2=ui->tableView->model()->data(ui->tableView->model()->index(i,5)).toFloat();

          if(!query.exec("INSERT INTO object_points (id_object, x, y, z, x2, y2, z2) VALUES ("+QString::number(id_obj)+","+QString::number(x)+","+QString::number(y)+","+QString::number(z)+","+QString::number(x2)+","+QString::number(y2)+","+QString::number(z2)+");") )
              //INSERT new object in database
          {
              ErrorQuery();
              break;
            }
        }
    ui->edit_object_name->setText("");
    ClearTableView();                                       //clear all data from TableView
    SuccessCreateObject(object_name);     //show message that we success create new object in database

  }

}
