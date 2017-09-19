#ifndef MYWIDGET_H
#define MYWIDGET_H
#include<QPushButton>
#include <QWidget>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);
    //在QTcreator中，类中斜体字表示虚函数
    void paintEvent(QPaintEvent *event);
    //mouse press event
    void mousePressEvent(QMouseEvent *event);
    QPoint point_press;
    //按钮
    QPushButton* button;
signals:

public slots:
};

#endif // MYWIDGET_H
