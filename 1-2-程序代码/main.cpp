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

    MainWindow w;

    return a.exec();
}
