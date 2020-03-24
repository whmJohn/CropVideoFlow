//重载Qlabel控件
#ifndef MYQLABEL
#define MYQLABEL

#include <QLabel>
#include <QMouseEvent>
#include <QString>
#include <iostream>

using namespace std;

class MyQLabel : public QLabel{
//    Q_OBJECT
public:
    explicit MyQLabel(QWidget *parent=0);//继承构造函数

    bool isPaint;   //是否允许画矩形
    void paintEvent(QPaintEvent* event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    int x1, y1, x2, y2;

    void savePicture(QString path, int filename);

public:
    int getX1() {return x1;}
    int getY1() {return y1;}
    int getX2() {return x2;}
    int getY2() {return y2;}
};

#endif // MYQLABEL
