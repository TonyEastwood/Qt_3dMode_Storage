#ifndef QOPENGLOBJECT_H
#define QOPENGLOBJECT_H

#include <QObject>

class QOpenGlObject : public QObject
{
    Q_OBJECT
public:
    explicit QOpenGlObject(QWidget *parent = nullptr);
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

};

#endif // QOPENGLOBJECT_H
