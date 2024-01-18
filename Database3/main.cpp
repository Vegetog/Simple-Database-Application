#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //数据库配置
    //    qDebug() << QSqlDatabase::drivers();
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");         // 服务器名称
    db.setDatabaseName("SQLServer");       // 数据源名称
    db.setUserName("shj");               // 用户名
    db.setPassword("shj825shj");         // 密码
    if (!db.open()) {
        QMessageBox::critical(0, QObject::tr("Database Error"),
                              db.lastError().text());
        return 1;
    }else{
        qDebug()<<"DataBase open sucess!";
    }

    //插入数据测试
    /*QSqlQuery query;
    query.prepare("INSERT INTO student (Sno,Sname,sex,class,live) VALUES (:Sno,:Sname,:sex,:class,:live)");
    query.bindValue(":Sno", "2212190216");
    query.bindValue(":Sname", "宋壕杰");
    query.bindValue(":sex", "男");
    query.bindValue(":class", "计科2202");
    query.bindValue(":live", "金沙港");
    if (!query.exec()) {
        qDebug() << "Error inserting into the table:\n" << query.lastError();
        return 1;
    }else{
        qDebug()<<"Data insert sucess!";
    }*/


    MainWindow w;
    //w.show();
    return a.exec();
}
