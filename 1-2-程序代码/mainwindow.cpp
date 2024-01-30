#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_log = new LogWidget;
    m_log->show();
    // 注意，这个信号槽的作用就是激活主窗口的，我们已经让主窗口不可以自动打开，
    // 必须通过登录窗口中登录按钮发出的信号槽的信号才能打开
    connect(m_log,SIGNAL(login()),this,SLOT(show()));

    // 连接按钮的clicked()信号和槽函数
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

    disconnect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));

    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_pushButton_3_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString condition1 = ui->lineEdit->text();
    QString condition2 = ui->lineEdit_2->text();
    QSqlQuery query;
    QSqlQueryModel *model = new QSqlQueryModel;

    if (condition1.isEmpty() && condition2.isEmpty()) {
        model->setQuery("SELECT Sno,Coname,Exam.Cono,score,unit FROM Exam,Course WHERE Course.Cono=Exam.Cono");
    }else if(condition1.isEmpty()){
        query.prepare("SELECT Sno,Coname,Exam.Cono,score,unit FROM Exam,Course WHERE Course.Cono=Exam.Cono AND Exam.Cono = :condition2");
        query.bindValue(":condition2", condition2);
        query.exec();
        model->setQuery(query);
    }else if(condition2.isEmpty()){
        query.prepare("SELECT Sno,Coname,Exam.Cono,score,unit FROM Exam,Course WHERE Course.Cono=Exam.Cono AND Sno = :condition1");
        query.bindValue(":condition1", condition1);
        query.exec();
        model->setQuery(query);
    }else{
        query.prepare("SELECT Sno,Coname,Exam.Cono,score,unit FROM Exam,Course WHERE Course.Cono=Exam.Cono AND Sno = :condition1 AND Exam.Cono = :condition2");
        query.bindValue(":condition1", condition1);
        query.bindValue(":condition2", condition2);
        query.exec();
        model->setQuery(query);
    }

    model->setHeaderData(0, Qt::Horizontal, tr("学号"));
    model->setHeaderData(1, Qt::Horizontal, tr("课程名"));
    model->setHeaderData(2, Qt::Horizontal, tr("课程号"));
    model->setHeaderData(3, Qt::Horizontal, tr("分数"));
    model->setHeaderData(4, Qt::Horizontal, tr("学分"));

    ui->tableView->setModel(model);
}

void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << "on_pushButton_2_clicked called";
    QSqlQuery query;
    QString data1 = ui->lineEdit_3->text();
    QString data2 = ui->lineEdit_4->text();
    QString data3 = ui->lineEdit_6->text();

    query.prepare("INSERT INTO Exam (Sno, Cono, score) VALUES (:data1, :data2, :data3)");
    query.bindValue(":data1", data1);
    query.bindValue(":data2", data2);
    query.bindValue(":data3", data3);
    if(!query.exec()){
//        qDebug() << "Error inserting data into table:" << query.lastError();
        QMessageBox::information(this, "Error", "Error inserting data into table: " + query.lastError().text());
    }else{
        QMessageBox::information(this, "Success", "Inserting data into table successful !");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString condition1 = ui->lineEdit_5->text();
    QSqlQuery query;
    QSqlQueryModel *model = new QSqlQueryModel;

    if (condition1.isEmpty()) {
        model->setQuery("SELECT Student.Sno,Sname,sex,class,live,deg,ste FROM Student,statu WHERE Student.Sno=statu.Sno");
    }else{
        query.prepare("SELECT Student.Sno,Sname,sex,class,live,deg,ste FROM Student,statu WHERE Student.Sno=statu.Sno AND Student.Sno= :condition1");
        query.bindValue(":condition1", condition1);
        query.exec();
        model->setQuery(query);
    }

    model->setHeaderData(0, Qt::Horizontal, tr("学号"));
    model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    model->setHeaderData(2, Qt::Horizontal, tr("性别"));
    model->setHeaderData(3, Qt::Horizontal, tr("班级"));
    model->setHeaderData(4, Qt::Horizontal, tr("生活区"));
    model->setHeaderData(5, Qt::Horizontal, tr("学位"));
    model->setHeaderData(6, Qt::Horizontal, tr("状态"));

    ui->tableView->setModel(model);
}

