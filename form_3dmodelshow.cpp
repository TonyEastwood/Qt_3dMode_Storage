#include "form_3dmodelshow.h"
#include "ui_form_3dmodelshow.h"

form_3dmodelshow::form_3dmodelshow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_3dmodelshow)
{
    ui->setupUi(this);
}

form_3dmodelshow::~form_3dmodelshow()
{
    delete ui;
}

void form_3dmodelshow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        x_pos=event->x();
        y_pos=event->y();

    }
}

void form_3dmodelshow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        //ui->label->setText(QString::number(event->x()-x_pos)+";"+QString::number(event->y()-y_pos));
        ui->widget->rotate_y=event->x()-x_pos;
        ui->widget->rotate_x=event->y()-y_pos;
        //this->update();
        ui->widget->update();
    }
}
