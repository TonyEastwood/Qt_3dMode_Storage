#ifndef FORM_ADD_OBJECT_H
#define FORM_ADD_OBJECT_H

#include <QDialog>
#include "QStandardItemModel"
#include "QStandardItem"
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

private slots:

    void on_butt_add_row_clicked();

    void on_butt_delete_row_clicked();

    void on_butt_submit_clicked();

private:
    QStandardItemModel *model=new QStandardItemModel;
    QStandardItem *item;
    int row_quant=0;                    //current quantity of row
    int id=0;
    Ui::Form_Add_Object *ui;
};

#endif // FORM_ADD_OBJECT_H
