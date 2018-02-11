#ifndef FORM_3DMODELSHOW_H
#define FORM_3DMODELSHOW_H
#include <QMouseEvent>
#include <QDialog>

namespace Ui {
class form_3dmodelshow;
}

class form_3dmodelshow : public QDialog
{
    Q_OBJECT

public:
    explicit form_3dmodelshow(QWidget *parent = 0);
    form_3dmodelshow(std::vector<std::vector<double> > vector_3d);
    ~form_3dmodelshow();

protected:
    void mousePressEvent(QMouseEvent *event) override;
      void mouseMoveEvent(QMouseEvent *event) override;

private slots:
      void on_pushButton_clicked();                      //zoom in 3d model
      void on_pushButton_2_clicked();                   //zoom out 3d model

private:
      double x_pos;                                     //position mouse on x
      double y_pos;                                     //position mous on y
      Ui::form_3dmodelshow *ui;
};

#endif // FORM_3DMODELSHOW_H
