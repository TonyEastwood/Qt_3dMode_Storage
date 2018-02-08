#include "form_log_in.h"

#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Form_Log_In w;
    w.show();


    return a.exec();
}
