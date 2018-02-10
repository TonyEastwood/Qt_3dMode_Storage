#ifndef FORM_LOG_IN_H
#define FORM_LOG_IN_H



#include <QDialog>
#include <QtSql>
#include <QtCore>
#include <QMessageBox>
#include "form_main.h"
namespace Ui {
class Form_Log_In;
}

class Form_Log_In : public QDialog
{
    Q_OBJECT
private:
    bool SetValueDataBase(QSqlDatabase* db, QString BaseName, QString HostName, int port, QString login, QString pass);
    void OpenMainForm(int _id);                                                 //open MainForm and send id current user to it
    void Error_LogIn();                                                         //eror when username or password is error or when database nonexistent
    void ErrorQuery();                                                          //show error when table or database nonexistent
public:
    explicit Form_Log_In(QWidget *parent = 0);
    ~Form_Log_In();

private slots:
    void on_butt_submit_clicked();

private:
 Form_main *Main_Form;                            //pointer on main form
    Ui::Form_Log_In *ui;
};

#endif // FORM_LOG_IN_H
