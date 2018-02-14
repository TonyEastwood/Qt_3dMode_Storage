#-------------------------------------------------
#
# Project created by QtCreator 2018-02-08T16:57:34
#
#-------------------------------------------------

QT       += core gui opengl
QT       +=sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QT_3DModel
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
   #     form_log_in.cpp \
   # form_main.cpp \
   # form_add_object.cpp \
   # form_3dmodelshow.cpp \
   # openglshow.cpp \
    Source/form_3dmodelshow.cpp \
    Source/form_add_object.cpp \
    Source/form_log_in.cpp \
    Source/form_main.cpp \
    Source/openglshow.cpp

HEADERS += \
      #  form_log_in.h \
   # form_main.h \
    #form_add_object.h \
   # form_3dmodelshow.h \
   # openglshow.h \
    Headers/form_3dmodelshow.h \
    Headers/form_3dmodelshow.h \
    Headers/form_add_object.h \
    Headers/form_log_in.h \
    Headers/form_main.h \
    Headers/openglshow.h

FORMS += \
        form_log_in.ui \
    form_main.ui \
    form_add_object.ui \
    form_3dmodelshow.ui

DISTFILES +=

RESOURCES +=
