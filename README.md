# 数据库应用介绍
本系统利用Qt进行开发，主要分为登录界面与主界面两部分

登录界面作用：登录，身份验证
登录界面功能实现：定义了类 LogWidget 作为登录窗口，它的 show 函数在主窗口的构造函数中调用，利用信号 slots 检验按下“登录”“重置”两个按钮对应的事件，登录根据账号密码的正确性判断继续进入主窗口并且关闭登录窗口还是跳出提示账号密码错误的提示框

主界面作用：录入、查询学生成绩，查询学生个人信息
主界面功能实现：三个功能。查询功能调用了类 QsqlQuery 的 setQuery 函数来调用数据库的 select 语句；录入功能调用 prepare 函数来调用 insert 语句

结果显示在类 tableView 中