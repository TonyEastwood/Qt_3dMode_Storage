/********************************************************************************
** Form generated from reading UI file 'form_log_in.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_LOG_IN_H
#define UI_FORM_LOG_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Log_In
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *edit_username;
    QLabel *label;
    QLineEdit *edit_password;
    QPushButton *butt_submit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Form_Log_In)
    {
        if (Form_Log_In->objectName().isEmpty())
            Form_Log_In->setObjectName(QStringLiteral("Form_Log_In"));
        Form_Log_In->resize(521, 350);
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
        Form_Log_In->setPalette(palette);
        layoutWidget = new QWidget(Form_Log_In);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 70, 371, 171));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette1;
        QBrush brush2(QColor(252, 175, 62, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        QBrush brush3(QColor(190, 190, 190, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_2->setPalette(palette1);
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        edit_username = new QLineEdit(layoutWidget);
        edit_username->setObjectName(QStringLiteral("edit_username"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        edit_username->setFont(font1);
        edit_username->setMaxLength(20);

        gridLayout->addWidget(edit_username, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label->setPalette(palette2);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        edit_password = new QLineEdit(layoutWidget);
        edit_password->setObjectName(QStringLiteral("edit_password"));
        edit_password->setFont(font1);
        edit_password->setMaxLength(20);

        gridLayout->addWidget(edit_password, 1, 1, 1, 1);

        butt_submit = new QPushButton(Form_Log_In);
        butt_submit->setObjectName(QStringLiteral("butt_submit"));
        butt_submit->setGeometry(QRect(70, 250, 361, 51));
        QPalette palette3;
        QBrush brush4(QColor(46, 52, 54, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush4);
        QBrush brush5(QColor(0, 255, 212, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        butt_submit->setPalette(palette3);
        QFont font2;
        font2.setPointSize(20);
        butt_submit->setFont(font2);
        label_3 = new QLabel(Form_Log_In);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 30, 221, 17));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_3->setPalette(palette4);
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_4 = new QLabel(Form_Log_In);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 40, 231, 17));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_4->setPalette(palette5);
        label_4->setFont(font3);
        label_5 = new QLabel(Form_Log_In);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(320, 310, 241, 31));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(78, 154, 6, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(52, 101, 164, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush8(QColor(138, 226, 52, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush8);
        QBrush brush9(QColor(32, 74, 135, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush9);
        label_5->setPalette(palette6);
        QFont font4;
        font4.setFamily(QStringLiteral("Bitstream Charter"));
        font4.setPointSize(17);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        label_5->setFont(font4);
        label_6 = new QLabel(Form_Log_In);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 50, 231, 31));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_6->setPalette(palette7);
        label_6->setFont(font3);
        label_7 = new QLabel(Form_Log_In);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 60, 231, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        label_7->setPalette(palette8);
        label_7->setFont(font3);

        retranslateUi(Form_Log_In);

        QMetaObject::connectSlotsByName(Form_Log_In);
    } // setupUi

    void retranslateUi(QDialog *Form_Log_In)
    {
        Form_Log_In->setWindowTitle(QApplication::translate("Form_Log_In", "Log in", nullptr));
        label_2->setText(QApplication::translate("Form_Log_In", "password", nullptr));
        label->setText(QApplication::translate("Form_Log_In", "username", nullptr));
        edit_password->setInputMask(QString());
        edit_password->setText(QString());
        butt_submit->setText(QApplication::translate("Form_Log_In", "Submit", nullptr));
        label_3->setText(QApplication::translate("Form_Log_In", "3-D model", nullptr));
        label_4->setText(QApplication::translate("Form_Log_In", "3-D model", nullptr));
        label_5->setText(QApplication::translate("Form_Log_In", "by Nikolaev Alex", nullptr));
        label_6->setText(QApplication::translate("Form_Log_In", "Storage", nullptr));
        label_7->setText(QApplication::translate("Form_Log_In", "Storage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_Log_In: public Ui_Form_Log_In {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_LOG_IN_H
