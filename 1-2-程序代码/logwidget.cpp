#include "logwidget.h"
#include "ui_logwidget.h"


LogWidget::LogWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LogWidget)
{
    ui->setupUi(this);
    form_init();
    func_init();
}


LogWidget::~LogWidget()
{
    delete ui;
}


void LogWidget::form_init()
{
    // 文件标题名
    ui->groupBox->setGeometry(50,60,300,125);
    ui->label_name->setGeometry(25,25,100,25);
    ui->edit_name->setGeometry(125,25,150,25);
    ui->label_pw->setGeometry(25,75,100,25);
    ui->edit_pw->setGeometry(125,75,150,25);
    ui->btn_log->setGeometry(50,235,120,30);
    ui->btn_clear->setGeometry(230,235,120,30);


    //调整字体大小
    QFont font;
    font.setPointSize(16); //实际上是16的字号，但设成16却不行
    font.setFamily(("wenquanyi"));
    font.setBold(false);
    font.setPointSize(12);
    ui->label_name->setFont(font);
    ui->label_pw->setFont(font);
}


void LogWidget::func_init()
{
    // connect
    // 触发重置按钮的信号槽连接
    connect(ui->btn_clear,SIGNAL(clicked()),this,SLOT(btn_clear_clicked()));
    // 触发登录按钮的信号槽连接
    connect(ui->btn_log,SIGNAL(clicked()),this,SLOT(btn_log_clicked()));
    // 发出信号后关闭登录窗口的信号槽连接
    connect(this,SIGNAL(close_window()),this,SLOT(close()));


    ui->edit_pw->setEchoMode(QLineEdit::Password);//输入的时候就显示圆点


    m_username = "admin";
    m_password = "135731";


}


// 清理输入栏
void LogWidget::btn_clear_clicked()
{
    ui->edit_pw->clear();
    ui->edit_name->clear();
}




void LogWidget::btn_log_clicked()
{
    QString name = ui->edit_name->text();
    QString password = ui->edit_pw->text();


    if (name == m_username && password == m_password)
    {
        emit(login());

        emit(close_window());
    }


    else
        QMessageBox::information(this, "Warning","Username or Password is wrong !");


}


