/********************************************************************************
** Form generated from reading UI file 'form_add_object.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_ADD_OBJECT_H
#define UI_FORM_ADD_OBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Form_Add_Object
{
public:
    QPushButton *butt_add_row;
    QTableView *tableView;
    QPushButton *butt_delete_row;
    QPushButton *butt_submit;
    QLabel *label_test;
    QLineEdit *edit_object_name;

    void setupUi(QDialog *Form_Add_Object)
    {
        if (Form_Add_Object->objectName().isEmpty())
            Form_Add_Object->setObjectName(QStringLiteral("Form_Add_Object"));
        Form_Add_Object->resize(621, 459);
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
        Form_Add_Object->setPalette(palette);
        butt_add_row = new QPushButton(Form_Add_Object);
        butt_add_row->setObjectName(QStringLiteral("butt_add_row"));
        butt_add_row->setGeometry(QRect(30, 390, 141, 51));
        QPalette palette1;
        QBrush brush2(QColor(0, 255, 212, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(46, 52, 54, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush4(QColor(255, 237, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        QBrush brush5(QColor(190, 190, 190, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        butt_add_row->setPalette(palette1);
        QFont font;
        font.setPointSize(14);
        butt_add_row->setFont(font);
        tableView = new QTableView(Form_Add_Object);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 50, 621, 321));
        butt_delete_row = new QPushButton(Form_Add_Object);
        butt_delete_row->setObjectName(QStringLiteral("butt_delete_row"));
        butt_delete_row->setGeometry(QRect(240, 390, 141, 51));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        butt_delete_row->setPalette(palette2);
        butt_delete_row->setFont(font);
        butt_submit = new QPushButton(Form_Add_Object);
        butt_submit->setObjectName(QStringLiteral("butt_submit"));
        butt_submit->setGeometry(QRect(450, 390, 141, 51));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        butt_submit->setPalette(palette3);
        butt_submit->setFont(font);
        label_test = new QLabel(Form_Add_Object);
        label_test->setObjectName(QStringLiteral("label_test"));
        label_test->setGeometry(QRect(190, 10, 171, 31));
        QPalette palette4;
        QBrush brush6(QColor(252, 175, 62, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        label_test->setPalette(palette4);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_test->setFont(font1);
        edit_object_name = new QLineEdit(Form_Add_Object);
        edit_object_name->setObjectName(QStringLiteral("edit_object_name"));
        edit_object_name->setGeometry(QRect(370, 10, 171, 25));
        QFont font2;
        font2.setPointSize(12);
        edit_object_name->setFont(font2);

        retranslateUi(Form_Add_Object);

        QMetaObject::connectSlotsByName(Form_Add_Object);
    } // setupUi

    void retranslateUi(QDialog *Form_Add_Object)
    {
        Form_Add_Object->setWindowTitle(QApplication::translate("Form_Add_Object", "Add 3D Object", nullptr));
        butt_add_row->setText(QApplication::translate("Form_Add_Object", "Add row", nullptr));
        butt_delete_row->setText(QApplication::translate("Form_Add_Object", "Remove row", nullptr));
        butt_submit->setText(QApplication::translate("Form_Add_Object", "Submit", nullptr));
        label_test->setText(QApplication::translate("Form_Add_Object", "Input object name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_Add_Object: public Ui_Form_Add_Object {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_ADD_OBJECT_H
