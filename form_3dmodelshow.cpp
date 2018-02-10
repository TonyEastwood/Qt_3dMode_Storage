#include "form_3dmodelshow.h"
#include "ui_form_3dmodelshow.h"

form_3dmodelshow::form_3dmodelshow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form_3dmodelshow)
{
    ui->setupUi(this);
}

form_3dmodelshow::form_3dmodelshow(std::vector<std::vector<double> > vector_3d):
    QDialog(0),
    ui(new Ui::form_3dmodelshow)
{
    ui->setupUi(this);
  //  this->_vector_3d=vector_3d;
         ui->widget->vector_3d=vector_3d;


   // ui->label->setText(QString::number(_vector_3d[0][0]) +"; y=" + QString::number(_vector_3d[0][1]));

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


        ui->widget->rotate_y=event->x()-x_pos;
               ui->widget->rotate_x=event->y()-y_pos;

        ui->widget->update();
    }
}


void form_3dmodelshow::on_pushButton_clicked()
{
    ui->widget->scale_x++;
    ui->widget->scale_y++;
     ui->widget->scale_z++;
    ui->widget->update();
}

void form_3dmodelshow::on_pushButton_2_clicked()
{
    ui->widget->scale_x--;
    ui->widget->scale_y--;
     ui->widget->scale_z--;


    ui->widget->update();
}
