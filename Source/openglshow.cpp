#include "../Headers/openglshow.h"

OpenGlShow::OpenGlShow(QWidget *parent) : QOpenGLWidget(parent)
{

}

void OpenGlShow::initializeGL()
{
    initializeOpenGLFunctions();
    glEnable(GL_DEPTH_TEST);
}

void OpenGlShow::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h);                         //set width, height for opengl
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-3.0, 3.0, -3.0, 3.0, -10, 10);         //set start camera position
    glMatrixMode(GL_MODELVIEW);
}

void OpenGlShow::paintGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-scale_x, scale_x, -scale_y, scale_y, -scale_z, scale_z);


    //Rotate object
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );

    glLineWidth(1);       // set line width
    glBegin(GL_LINES);        //begin draw line
    glColor3d(0,1,1);     // choose color for point
      for(auto i:vector_3d)             //parse all vector
      {
          glVertex3d(i[0],i[1],i[2]);           //link point 1 and
          glVertex3d(i[3],i[4],i[5]);           //point 2
      }
     glEnd();                            //end draw line
}



