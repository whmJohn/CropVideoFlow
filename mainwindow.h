#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <QImage>
#include <QFileDialog>

#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <iostream>

using namespace cv;
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void ReadFrame();

    void on_btnOpenVideo_clicked();

    void on_btnCloseVideo_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    VideoCapture capture;
    Mat frame;
    Mat result_frame;
};

#endif // MAINWINDOW_H
