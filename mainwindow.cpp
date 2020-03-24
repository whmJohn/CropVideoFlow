#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(ReadFrame()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ReadFrame()
{
    if(capture.isOpened())
    {
        capture >> frame;
        if(!frame.empty())
        {
            cvtColor(frame, result_frame, CV_BGR2RGB);     //  OpenCV中Mat读入的图像是BGR格式，要转换为RGB格式
            cv::resize(result_frame, result_frame, Size(640, 480));

            // 将抓取到的帧，转换为QImage格式。QImage::Format_RGB888不同的摄像头用不同的格式。
            QImage image((const uchar*)result_frame.data, result_frame.cols, result_frame.rows, QImage::Format_RGB888);
            ui->label->setPixmap(QPixmap::fromImage(image));    //  将图片显示到label上
            ui->label->resize( ui->label->pixmap()->size());    //  将label控件resize到fame的尺寸
        }
    }

}

void MainWindow::on_btnOpenVideo_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr("Open Video"), ".", tr("Video File(*.avi *.mp4 *.h264)"));

    capture.open(file_name.toStdString());

    timer->start(25);   //  开始计时，每隔25毫秒更新一次，超时则发出timeout()信号
}

void MainWindow::on_btnCloseVideo_clicked()
{
    timer->stop();      //  停止读取数据。

    //  释放内存；
    capture.release();
    frame.release();
}
