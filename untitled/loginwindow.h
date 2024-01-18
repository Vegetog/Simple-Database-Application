#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "ui_login.h"  // 包含uic生成的头文件

namespace Ui {
class Login;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private:
    Ui::Login *ui;  // 添加Ui::Login类的私有成员变量
};

#endif // LOGINWINDOW_H
