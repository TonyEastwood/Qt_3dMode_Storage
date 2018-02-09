#ifndef FORM_ADD_OBJECT_H
#define FORM_ADD_OBJECT_H

#include <QDialog>
#include "QStandardItemModel"
#include "QStandardItem"
#include <QMessageBox>
#include <QtSql>
#include <QtCore>
namespace Ui {
class Form_Add_Object;
}

class Form_Add_Object : public QDialog
{
    Q_OBJECT

public:
    explicit Form_Add_Object(QWidget *parent = 0);
    Form_Add_Object(int _id);
    ~Form_Add_Object();
private:
    void ErrorSubmit();
    void SetValueDataBase(QString BaseName, QString HostName, int port, QString login, QString pass);
    void ErrorQuery();                                      //show error till try to send query to database
    void ClearTableView();                                  //func that clear all rows
    void SuccessCreateObject(QString _object_name);         //Message when object success create
    int GetIdLastObject();                                   //get last object id for create new object
private slots:

    void on_butt_add_row_clicked();                         //add new row

    void on_butt_delete_row_clicked();                      //delete row

    void on_butt_submit_clicked();                          //submit to database

private:
    QSqlDatabase *db= new QSqlDatabase(QSqlDatabase::addDatabase("QPSQL"));   //connect to QPSQL;
    QStandardItemModel *model=new QStandardItemModel;
    QStandardItem *item;
    int row_quant=0;                    //current quantity of row
    int id=0;
    Ui::Form_Add_Object *ui;
};

#endif // FORM_ADD_OBJECT_H
