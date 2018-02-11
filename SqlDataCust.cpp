#include "SqlDataCust.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int static cCount=0;
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", QString("Browser%1").arg(++cCount));
    db.setDatabaseName("base2");
    db.setHostName("localhost");
    db.setPort(5432);
    if (!db.open("lolka", "cfyz,kj")) {
      ui->label->setText("ERROR");
    }
    else
    {
        ui->label->setText("OK");
        QSqlQuery query(db);
            if(query.exec("SELECT name, telephone FROM all_users;"))
                ui->label->setText( "ok");
            else ui->label->setText(query.lastError().text());
            while (query.next()) {
                    QString name = query.value(0).toString();
                    int salary = query.value(1).toInt();
                    ui->label_2->setText(name);
                    ui->label_3->setText(QString::number(salary));
                }

          query.exec("INSERT INTO all_users VALUES ('lool', 150);");

    }


//    return err;
}
