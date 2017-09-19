#include "mainwindow.h"
#include <QApplication>
#include "mywidget.h"
int main(int argc, char *argv[])
{   //抽象了QT的应用程序
    QApplication a(argc, argv);
    //抽象了一个子窗口
    MyWidget w;
    w.show();


    //进入消息循环，等待用户输入
    return a.exec();
}
