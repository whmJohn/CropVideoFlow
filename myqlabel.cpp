#include <QPainter>
#include <QPen>
#include <QRect>
#include <QCursor>
#include <QApplication>
#include <QPixmap>
#include <QImage>
#include "myqlabel.h"


MyQLabel::MyQLabel(QWidget* parent):
    QLabel(parent)
{
    isPaint=true;   //初始化时不允许画框
}


void MyQLabel::paintEvent(QPaintEvent *event)
{
    //comment before
    QLabel::paintEvent(event); //绘制背景的图片

    if(isPaint)
    {
        QPainter painter(this);

        painter.setPen(QPen(Qt::red, 2));
        painter.drawRect(QRect(x1, y1, x2 - x1, y2 - y1));
    }
}

void MyQLabel::mousePressEvent(QMouseEvent *event)
{
    if(isPaint)
    {
        x1 = event->pos().x();
        y1 = event->pos().y();
        QCursor cursor;
        cursor.setShape(Qt::ClosedHandCursor);
        QApplication::setOverrideCursor(cursor);
    }
}

void MyQLabel::mouseReleaseEvent(QMouseEvent *event)
{
    if(isPaint)
    {
        x2 = event->pos().x(); //鼠标相对于所在控件的位置
        y2 = event->pos().y();
        update();
        QApplication::restoreOverrideCursor();
    }
}

void MyQLabel::mouseMoveEvent(QMouseEvent *event)
{
    if(isPaint)
    {
        if (event->buttons() & Qt::LeftButton)
        {
            x2 = event->pos().x(); //鼠标相对于所在控件的位置
            y2 = event->pos().y();
            update();
        }
    }
}
