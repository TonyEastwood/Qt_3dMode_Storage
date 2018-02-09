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
    ~form_3dmodelshow();
protected:
    void mousePressEvent(QMouseEvent *event) override;
      void mouseMoveEvent(QMouseEvent *event) override;
private:
      double x_pos;
      double y_pos;
    Ui::form_3dmodelshow *ui;
};

#endif // FORM_3DMODELSHOW_H
