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
}

Form_main::~Form_main()
{
    delete ui;
}

void Form_main::on_pushButton_clicked()
{
    ui->combo_objectlist->addItem(QString::number(5));
}
