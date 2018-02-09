#ifndef FORM_MAIN_H
#define FORM_MAIN_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QtCore>
#include "form_add_object.h"
namespace Ui {
class Form_main;
}

class Form_main : public QDialog
{
    Q_OBJECT

public:
    explicit Form_main(QWidget *parent = 0);
    Form_main(int _id);
    ~Form_main();
private:
    void SetValueDataBase(QString BaseName, QString HostName, int port, QString login, QString pass);
    void ErrorQuery();                                      //show error till try to send query to database
    void MessageSuccessRemove();                            //show message if removed success
    void ErrorRemove();                                     //show error if remove error



signals:
    void ComboBoxUpdateSignal();
    void remove_click();                                    //if delete object, Update comboBox and lcdNumeric (decrease quantity)
private slots:
    void Change_Name_Object();                              //Display object name
    void ComboBoxUpdate();                                  //Update values of combobox
    void DisplayCountObject();                              //Update quantity objects in lcdNumeric
    void on_butt_remove_clicked();                          //remove selected object
    void on_butt_create_clicked();                          //open new form for create 3d object

    void on_combo_objectlist_activated();

private:
    Form_Add_Object *Form_Add;
    QSqlDatabase *db= new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"));   //connect to QPSQL;
    int id=0;                                           //user id
    Ui::Form_main *ui;
};

#endif // FORM_MAIN_H
