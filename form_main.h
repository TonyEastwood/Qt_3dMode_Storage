#ifndef FORM_MAIN_H
#define FORM_MAIN_H

#include <QDialog>

namespace Ui {
class Form_main;
}

class Form_main : public QDialog
{
    Q_OBJECT

public:
    explicit Form_main(QWidget *parent = 0);
    Form_main(int _id, int _quant);
    ~Form_main();

private slots:
    void on_pushButton_clicked();

private:
    int quant=0;                                        //quant object current user
    int id=0;                                           //id user
    Ui::Form_main *ui;
};

#endif // FORM_MAIN_H
