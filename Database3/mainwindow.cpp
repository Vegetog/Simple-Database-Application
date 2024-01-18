#include "mainwindow.h"
#include "ui_mainwindow.h"


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

    model->setHeaderData(0, Qt::Horizontal, tr("Sno"));
    model->setHeaderData(1, Qt::Horizontal, tr("Coname"));
    model->setHeaderData(2, Qt::Horizontal, tr("Exam.Cono"));
    model->setHeaderData(3, Qt::Horizontal, tr("score"));
    model->setHeaderData(4, Qt::Horizontal, tr("unit"));

    ui->tableView->setModel(model);
}

