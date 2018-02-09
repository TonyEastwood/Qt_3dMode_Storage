#-------------------------------------------------
#
# Project created by QtCreator 2018-02-08T16:57:34
#
#-------------------------------------------------

QT       += core gui
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
        form_log_in.cpp \
    form_main.cpp \
    form_add_object.cpp

HEADERS += \
        form_log_in.h \
    form_main.h \
    form_add_object.h

FORMS += \
        form_log_in.ui \
    form_main.ui \
    form_add_object.ui

DISTFILES +=
