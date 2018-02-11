/********************************************************************************
** Form generated from reading UI file 'form_main.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_MAIN_H
#define UI_FORM_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Form_main
{
public:
    QPushButton *butt_show;
    QComboBox *combo_objectlist;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QPushButton *butt_remove;
    QPushButton *butt_create;
    QLabel *label_name_object;
    QPushButton *butt_update;
    QLabel *label_3;

    void setupUi(QDialog *Form_main)
    {
        if (Form_main->objectName().isEmpty())
            Form_main->setObjectName(QStringLiteral("Form_main"));
        Form_main->resize(505, 307);
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
        Form_main->setPalette(palette);
        Form_main->setCursor(QCursor(Qt::ArrowCursor));
        butt_show = new QPushButton(Form_main);
        butt_show->setObjectName(QStringLiteral("butt_show"));
        butt_show->setGeometry(QRect(320, 170, 151, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(46, 52, 54, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(0, 255, 212, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush4(QColor(255, 237, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(237, 212, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        QBrush brush6(QColor(190, 190, 190, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        butt_show->setPalette(palette1);
        QFont font;
        font.setPointSize(14);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        butt_show->setFont(font);
        butt_show->setCursor(QCursor(Qt::PointingHandCursor));
        combo_objectlist = new QComboBox(Form_main);
        combo_objectlist->setObjectName(QStringLiteral("combo_objectlist"));
        combo_objectlist->setGeometry(QRect(200, 80, 86, 25));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush7(QColor(78, 154, 6, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        combo_objectlist->setPalette(palette2);
        QFont font1;
        font1.setPointSize(12);
        combo_objectlist->setFont(font1);
        combo_objectlist->setCursor(QCursor(Qt::PointingHandCursor));
        combo_objectlist->setAutoFillBackground(true);
        combo_objectlist->setEditable(false);
        combo_objectlist->setMaxVisibleItems(5);
        combo_objectlist->setMaxCount(300);
        combo_objectlist->setDuplicatesEnabled(false);
        label = new QLabel(Form_main);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 50, 101, 17));
        QPalette palette3;
        QBrush brush8(QColor(252, 175, 62, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        label->setPalette(palette3);
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label_2 = new QLabel(Form_main);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 151, 17));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        label_2->setPalette(palette4);
        label_2->setFont(font2);
        lcdNumber = new QLCDNumber(Form_main);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(40, 80, 91, 51));
        QPalette palette5;
        QBrush brush9(QColor(182, 255, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush10(QColor(115, 210, 22, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(196, 160, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush11);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush12(QColor(32, 74, 135, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::HighlightedText, brush12);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette5.setBrush(QPalette::Active, QPalette::NoRole, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::NoRole, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette5.setBrush(QPalette::Disabled, QPalette::NoRole, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush12);
        lcdNumber->setPalette(palette5);
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferAntialias);
        lcdNumber->setFont(font3);
        lcdNumber->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber->setMouseTracking(false);
        lcdNumber->setAutoFillBackground(true);
        lcdNumber->setFrameShape(QFrame::Box);
        lcdNumber->setFrameShadow(QFrame::Plain);
        lcdNumber->setLineWidth(3);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(3);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("intValue", QVariant(0));
        butt_remove = new QPushButton(Form_main);
        butt_remove->setObjectName(QStringLiteral("butt_remove"));
        butt_remove->setGeometry(QRect(30, 240, 151, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        butt_remove->setPalette(palette6);
        butt_remove->setFont(font);
        butt_remove->setCursor(QCursor(Qt::PointingHandCursor));
        butt_create = new QPushButton(Form_main);
        butt_create->setObjectName(QStringLiteral("butt_create"));
        butt_create->setGeometry(QRect(30, 170, 151, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        butt_create->setPalette(palette7);
        butt_create->setFont(font);
        butt_create->setCursor(QCursor(Qt::PointingHandCursor));
        label_name_object = new QLabel(Form_main);
        label_name_object->setObjectName(QStringLiteral("label_name_object"));
        label_name_object->setGeometry(QRect(160, 10, 331, 17));
        QPalette palette8;
        QBrush brush13(QColor(211, 255, 35, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        label_name_object->setPalette(palette8);
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setUnderline(true);
        font4.setWeight(75);
        label_name_object->setFont(font4);
        butt_update = new QPushButton(Form_main);
        butt_update->setObjectName(QStringLiteral("butt_update"));
        butt_update->setGeometry(QRect(320, 240, 151, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        butt_update->setPalette(palette9);
        butt_update->setFont(font);
        butt_update->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(Form_main);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 131, 17));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        label_3->setPalette(palette10);
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        font5.setWeight(75);
        label_3->setFont(font5);

        retranslateUi(Form_main);

        combo_objectlist->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Form_main);
    } // setupUi

    void retranslateUi(QDialog *Form_main)
    {
        Form_main->setWindowTitle(QApplication::translate("Form_main", "Main", nullptr));
        butt_show->setText(QApplication::translate("Form_main", "Show 3D Model", nullptr));
        combo_objectlist->setCurrentText(QString());
        label->setText(QApplication::translate("Form_main", "Objects list", nullptr));
        label_2->setText(QApplication::translate("Form_main", "Quantity Objects", nullptr));
        butt_remove->setText(QApplication::translate("Form_main", "Remove", nullptr));
        butt_create->setText(QApplication::translate("Form_main", "Create new", nullptr));
        label_name_object->setText(QString());
        butt_update->setText(QApplication::translate("Form_main", "Update", nullptr));
        label_3->setText(QApplication::translate("Form_main", "Object name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_main: public Ui_Form_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_MAIN_H
