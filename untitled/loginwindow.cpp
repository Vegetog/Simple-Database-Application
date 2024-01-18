#include "loginwindow.h"
#include "ui_login.h"  // 包含uic生成的头文件

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)  // 初始化UI
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;  // 清理UI
}
