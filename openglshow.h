#ifndef OPENGLSHOW_H
#define OPENGLSHOW_H

//#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>

#include <QGLFramebufferObjectFormat>
class OpenGlShow : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit OpenGlShow(QWidget *parent = nullptr);

protected:
void initializeGL() Q_DECL_OVERRIDE;
void resizeGL(int w, int h)Q_DECL_OVERRIDE;
void paintGL()Q_DECL_OVERRIDE;

signals:

public slots:
public:
double scale_x=3;
double scale_y=3;
double scale_z=3;
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;
std::vector<std::vector<double> > vector_3d;
};

#endif // OPENGLSHOW_H








