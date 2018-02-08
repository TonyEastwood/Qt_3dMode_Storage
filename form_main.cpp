#include "form_main.h"
#include "ui_form_main.h"

Form_main::Form_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_main)
{
    ui->setupUi(this);
}

Form_main::Form_main(int _id, int _quant): QDialog(0),
    ui(new Ui::Form_main)
{

    ui->setupUi(this);
    this->quant=_quant;
    this->id=_id;
    ui->lcdNumber->display(quant);
    bool check=SetValueDataBase("base2","localhost",5432,"lolka", "cfyz,kj");  //set value to database

    if (check)                              //if database open then
    {
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
    }

}

Form_main::~Form_main()
{
    delete ui;
}

bool Form_main::SetValueDataBase(QString BaseName, QString HostName, int port, QString login, QString pass)
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

void Form_main::ErrorQuery()
{
    QMessageBox Msgbox;
    Msgbox.setWindowTitle("Error query");                                        //if query send error
    Msgbox.setText("Error send query to database, may be table not exist");      //show message error
    Msgbox.exec();
}



void Form_main::on_pushButton_clicked()
{

/*
    ui->combo_objectlist->addItem(QString::number(5));
    ui->lcdNumber->display(quant);
    ui->lcdNumber->setPalette(Qt::blue);
*/
}
