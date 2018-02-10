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

      void on_pushButton_clicked();

      void on_pushButton_2_clicked();

private:
      double x_pos;
      double y_pos;
    Ui::form_3dmodelshow *ui;
};

#endif // FORM_3DMODELSHOW_H
