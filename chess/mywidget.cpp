#include "mywidget.h"
#include<QPainter>
#include<QMouseEvent>
#include<QPushButton>
MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    button=new QPushButton("this is button",this);

}


void MyWidget::paintEvent(QPaintEvent *event)
{
    //QPainter 绘制类
    //绘制打印机，绘制图画...
    QPainter painter(this);
    painter.setPen(QColor(255,0,0));
    painter.setBrush(QBrush(QColor(255,255,0)));
    //painter.drawLine(QPoint(0,0),QPoint(100,100));
    //painter.drawText(200,200,"HelloQT");
    //painter.drawEllipse(QPoint(200,300),50,50);
    painter.drawEllipse(point_press,30,30);




}

void MyWidget::mousePressEvent(QMouseEvent *event)
{
    //得到鼠标点击的位置
    point_press=event->pos();
    //强制程序重新绘制界面
    update();

}










