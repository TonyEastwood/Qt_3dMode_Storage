#include "form_log_in.h"
#include "ui_form_log_in.h"

bool Form_Log_In::SetValueDataBase(QSqlDatabase * db, QString BaseName, QString HostName, int port, QString login, QString pass)
{
    QMessageBox Msgbox;
    db->setDatabaseName(BaseName);                                         //set data base name
    db->setHostName(HostName);                                         //set database host
    db->setPort(port);                                                    //set port
    if (!db->open(login, pass)) {
        Msgbox.setWindowTitle("Error open database");                    //show error open database
        Msgbox.setText("Invalid username or password");
        Msgbox.exec();
        return false;
    }
    else return true;
}

void Form_Log_In::OpenMainForm(int _id)
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Log in success!");                                //show message succes log in
    Msgbox.setText(QString::number(_id)+"Wait for loading data...");
    Msgbox.exec();
    Main_Form = new Form_main(_id);
    Main_Form->show();

    this->close();
}

void Form_Log_In::Error_LogIn()
{
          QMessageBox Msgbox;
    Msgbox.setWindowTitle("Error log in");                               //show message error log in
    Msgbox.setText("Invalid username or password");
    Msgbox.exec();
}

void Form_Log_In::ErrorQuery()
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Error query");                                        //if query send error
    Msgbox.setText("Error send query to database, may be table not exist");      //show message error
    Msgbox.exec();
}

Form_Log_In::Form_Log_In(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_Log_In)
{
    ui->setupUi(this);
}



Form_Log_In::~Form_Log_In()
{
    delete ui;
}

void Form_Log_In::on_butt_submit_clicked()
{
         OpenMainForm(2);                 //TEEEEEEEEEST DELETE

        int id=0;                                            //id and quant_obj of username

        QSqlDatabase* db= new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"));   //connect to QPSQL

        bool check=SetValueDataBase(db,"base2","localhost",5432,"lolka", "cfyz,kj");  //set value to database

        if (check)                              //if database open then
        {
           QSqlQuery query(*db);                                                //link query with database

               if(!query.exec("SELECT id FROM users WHERE login='"+ui->edit_username->text()+"' AND password='"+ui->edit_password->text()+"';"))         //create query to database
                  ErrorQuery();
               else
               {
               while (query.next()) {                                               //parse all data that we get from query
                       id = query.value(0).toInt();                                 //assign id = id user from databas
                   }

                if(id!=0)                                                       //if log in success
                {
                    db->close();
                    OpenMainForm(id);                 //open MainForm and betray id and quant object
                }
                else Error_LogIn();                           //show Error

            }
        }

}
