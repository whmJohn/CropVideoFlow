#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_videodisplayingqt.h"
#include <opencv2\opencv.hpp>
#include <QTimer>
#include <QFile>
#include <QFileDialog>

using namespace cv;
using namespace std;

class videodisplayingqt : public QMainWindow
{
    Q_OBJECT

public:
    videodisplayingqt(QWidget *parent = Q_NULLPTR);



private:

    Ui::videodisplayingqt ui;

    VideoCapture capture;
    Mat frame;
    QTimer *timer;
    QTimer *timer2;
    QString file_name;
    int i = 0;

private slots:
    void importFrame();
    void on_displayButton_clicked();
    void on_stopButton_clicked();
    void open_path_slot();
    void drawcropflow();
    void clickcrop();
    void makecolorwheel(vector<Scalar> &colorwheel);
    void motionToColor(Mat flow, Mat &color);
};
