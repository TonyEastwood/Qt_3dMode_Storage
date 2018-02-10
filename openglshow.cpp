#include "openglshow.h"

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
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
       glLoadIdentity();

            glOrtho(-3.0, 3.0, -3.0, 3.0, -10, 10);


    //   glOrtho();


       glMatrixMode(GL_MODELVIEW);
    /*glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       */
       //glOrtho(30.0, 30.0, 30.0, 30.0, 30.0, 30.0);
}

void OpenGlShow::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    // Resetear transformaciones
    glLoadIdentity();



    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-scale_x, scale_x, -scale_y, scale_y, -scale_z, scale_z);

    // Otras transformaciones
    // glTranslatef( 0.1, 0.0, 0.0 );      // No incluido
    // glRotatef( 180, 0.0, 1.0, 0.0 );    // No incluido

    // Rotar cuando el usuario cambie “rotate_x” y “rotate_y”
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );



    ////////////LINE
    glLineWidth(1);       // ширину линии
                          // устанавливаем 1
     glBegin(GL_LINES);
    glColor3d(0,1,1);     // красный цвет
      for(auto i:vector_3d)
      {

          glVertex3d(i[0],i[1],i[2]); // первая линия
          glVertex3d(i[3],i[4],i[5]);
      }

     glEnd();

    //////////////LINE
/*
    std::vector<std::vector<double> > vector_3d(4, std::vector<double>(3));
    vector_3d[0][0]=1;
    vector_3d[0][1]=1;
    vector_3d[0][2]=1;

    vector_3d[1][0]=0;
    vector_3d[1][1]=0;
    vector_3d[1][2]=0;

    vector_3d[2][0]=0;
    vector_3d[2][1]=0;
    vector_3d[2][2]=1;

    vector_3d[3][0]=2;
    vector_3d[3][1]=2;
    vector_3d[3][2]=2;

*/
//for(int i=0;i<4;i++)
 // vector_3d.push_back(new std::vector<double>(3));
/*
    glPointSize(10);
    glEnable(GL_POINT_SMOOTH);                //делает точки круглыми, а не квадратными
    glBegin(GL_POINTS);
     glColor3d(1,0,0);
     for(int i=0;i<vector_3d.size();i++)
     {
         for(int j=0; j<vector_3d[i].size();j++)
              glVertex3d(vector_3d[i][0],vector_3d[i][1],vector_3d[i][2]);
     }
    glEnd();
    glDisable(GL_POINT_SMOOTH);               //в конце отключаем сглаживание

*/











}



