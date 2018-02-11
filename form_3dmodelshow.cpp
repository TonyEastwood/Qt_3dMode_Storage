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
       this->setFixedSize(934,605);                     //set Form size and fixed it
       ui->setupUi(this);
       ui->widget->vector_3d=vector_3d;                 //get vector from MainForm in order to don't do request to database
}

form_3dmodelshow::~form_3dmodelshow()
{
    delete ui;
}

void form_3dmodelshow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {                    //memorize coords x and y mouse when we start clicking
        x_pos=event->x();
        y_pos=event->y();

    }
}

void form_3dmodelshow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        ui->widget->rotate_y=event->x()-x_pos;                  //rotate Object on x
        ui->widget->rotate_x=event->y()-y_pos;                  //rotate Object on y
        ui->widget->update();                                   //update Form that display Object
    }
}


void form_3dmodelshow::on_pushButton_clicked()                  //Zoom in Object
{
    ui->widget->scale_x++;
    ui->widget->scale_y++;
    ui->widget->scale_z++;
    ui->widget->update();
}

void form_3dmodelshow::on_pushButton_2_clicked()                //Zoom out Object
{
    ui->widget->scale_x--;
    ui->widget->scale_y--;
    ui->widget->scale_z--;
    ui->widget->update();
}
