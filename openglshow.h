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
void graficarLineas();
signals:

public slots:
public:
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;
};

#endif // OPENGLSHOW_H








