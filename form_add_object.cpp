#include "form_add_object.h"
#include "ui_form_add_object.h"

Form_Add_Object::Form_Add_Object(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form_Add_Object)
{
    ui->setupUi(this);
}

Form_Add_Object::Form_Add_Object(int _id):
    QDialog(0),
    ui(new Ui::Form_Add_Object)
{
    ui->setupUi(this);
    this->id=_id;
}

Form_Add_Object::~Form_Add_Object()
{
    delete ui;
}



void Form_Add_Object::on_butt_add_row_clicked()
{
    ui->tableView->setModel(model);                     //set current tableview model
    if(this->row_quant<0)                               //if we delete raw so often, we get negative row (-100 for instance)
        this->row_quant=0;
    QStringList horizHeader;
    horizHeader.append("x");
    horizHeader.append("y");
    horizHeader.append("z");
    horizHeader.append("x2");
    horizHeader.append("y2");
    horizHeader.append("z2");

model->setHorizontalHeaderLabels(horizHeader);              //set the header like x y z x2 y2 z2

    item = new QStandardItem(QString(""));                      //add new empty row
    model->insertRow(this->row_quant++,item);
}

void Form_Add_Object::on_butt_delete_row_clicked()
{
    model->removeRow(--this->row_quant);
}

void Form_Add_Object::on_butt_submit_clicked()
{
    /*
    QString lol;
    for(int i=0;i<6;i++)
        lol+=ui->tableView->model()->data(ui->tableView->model()->index(0,i)).toString();
    ui->label->setText(lol);
    */
}
