/********************************************************************************
** Form generated from reading UI file 'logwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWIDGET_H
#define UI_LOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWidget
{
public:
    QPushButton *btn_log;
    QGroupBox *groupBox;
    QLineEdit *edit_name;
    QLineEdit *edit_pw;
    QLabel *label_name;
    QLabel *label_pw;
    QPushButton *btn_clear;

    void setupUi(QWidget *LogWidget)
    {
        if (LogWidget->objectName().isEmpty())
            LogWidget->setObjectName(QString::fromUtf8("LogWidget"));
        LogWidget->resize(494, 352);
        btn_log = new QPushButton(LogWidget);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setGeometry(QRect(100, 250, 101, 61));
        groupBox = new QGroupBox(LogWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 401, 181));
        edit_name = new QLineEdit(groupBox);
        edit_name->setObjectName(QString::fromUtf8("edit_name"));
        edit_name->setGeometry(QRect(110, 50, 201, 41));
        edit_pw = new QLineEdit(groupBox);
        edit_pw->setObjectName(QString::fromUtf8("edit_pw"));
        edit_pw->setGeometry(QRect(110, 110, 201, 41));
        edit_pw->setEchoMode(QLineEdit::Password);
        label_name = new QLabel(groupBox);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(40, 50, 51, 31));
        label_pw = new QLabel(groupBox);
        label_pw->setObjectName(QString::fromUtf8("label_pw"));
        label_pw->setGeometry(QRect(40, 110, 51, 31));
        btn_clear = new QPushButton(LogWidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setGeometry(QRect(280, 250, 101, 61));

        retranslateUi(LogWidget);

        QMetaObject::connectSlotsByName(LogWidget);
    } // setupUi

    void retranslateUi(QWidget *LogWidget)
    {
        LogWidget->setWindowTitle(QApplication::translate("LogWidget", "Form", nullptr));
        btn_log->setText(QApplication::translate("LogWidget", "\347\231\273\345\275\225", nullptr));
        groupBox->setTitle(QApplication::translate("LogWidget", "                 \347\231\273\345\275\225", nullptr));
        label_name->setText(QApplication::translate("LogWidget", " \350\264\246\345\217\267", nullptr));
        label_pw->setText(QApplication::translate("LogWidget", " \345\257\206\347\240\201", nullptr));
        btn_clear->setText(QApplication::translate("LogWidget", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogWidget: public Ui_LogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWIDGET_H
