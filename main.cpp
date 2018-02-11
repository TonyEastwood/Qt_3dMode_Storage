#include "form_log_in.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Form_Log_In w;              //create Log In form to log in in database
    w.show();                   //show Log In form
    return a.exec();
}
