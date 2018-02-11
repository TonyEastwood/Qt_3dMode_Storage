#include "form_log_in.h"
#include "ui_form_log_in.h"
#define BASE_NAME "bwowjxtm"
#define SERVER_NAME "dumbo.db.elephantsql.com"
#define PORT 5432
#define BASE_USERNAME "bwowjxtm"
#define BASE_PASSWORD "1yOhssqp2IQ0eKbT0_FCHnkx_5eUMj6g"
#define BASE_TYPE "QPSQL"
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
    Msgbox.setText("Wait for loading data...");
    Msgbox.exec();
    Main_Form = new Form_main(_id);                                         //Open Main form and sent it id current user
    Main_Form->show();                                                      //show Main form
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
   //  setStyleSheet("background-image:url(:./log_in.png)");
    this->setFixedSize(520,350);                                    //set Form size and fixed it
    ui->setupUi(this);
    ui->edit_password->setEchoMode(QLineEdit::Password);            //hide the password that user input in line edit_password
}



Form_Log_In::~Form_Log_In()
{
    delete ui;
}

void Form_Log_In::on_butt_submit_clicked()
{
        int id=0;                                            //id and quant_obj of username
        QSqlDatabase* db= new QSqlDatabase(QSqlDatabase::addDatabase(BASE_TYPE));   //connect to QPSQL
        bool check=SetValueDataBase(db,BASE_NAME,SERVER_NAME,PORT,BASE_USERNAME, BASE_PASSWORD);  //set value to database

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
                            db->close();                        //close database
                            OpenMainForm(id);                 //open MainForm and betray id and quant object
                       }
                else Error_LogIn();                           //show Error

            }
        }

}
