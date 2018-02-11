/********************************************************************************
** Form generated from reading UI file 'form_3dmodelshow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_3DMODELSHOW_H
#define UI_FORM_3DMODELSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include "openglshow.h"

QT_BEGIN_NAMESPACE

class Ui_form_3dmodelshow
{
public:
    OpenGlShow *widget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *form_3dmodelshow)
    {
        if (form_3dmodelshow->objectName().isEmpty())
            form_3dmodelshow->setObjectName(QStringLiteral("form_3dmodelshow"));
        form_3dmodelshow->resize(934, 605);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        form_3dmodelshow->setPalette(palette);
        widget = new OpenGlShow(form_3dmodelshow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 731, 421));
        pushButton_2 = new QPushButton(form_3dmodelshow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 530, 431, 71));
        QPalette palette1;
        QBrush brush2(QColor(85, 87, 83, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(0, 255, 212, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush4(QColor(190, 190, 190, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton_2->setPalette(palette1);
        QFont font;
        font.setPointSize(20);
        pushButton_2->setFont(font);
        pushButton = new QPushButton(form_3dmodelshow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 530, 491, 71));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        pushButton->setPalette(palette2);
        pushButton->setFont(font);

        retranslateUi(form_3dmodelshow);

        QMetaObject::connectSlotsByName(form_3dmodelshow);
    } // setupUi

    void retranslateUi(QDialog *form_3dmodelshow)
    {
        form_3dmodelshow->setWindowTitle(QApplication::translate("form_3dmodelshow", "3D Model", nullptr));
        pushButton_2->setText(QApplication::translate("form_3dmodelshow", "Zoom In", nullptr));
        pushButton->setText(QApplication::translate("form_3dmodelshow", "Zoom out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_3dmodelshow: public Ui_form_3dmodelshow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_3DMODELSHOW_H
