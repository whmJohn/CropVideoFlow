#include "videodisplayingqt.h"
#include <opencv2/imgproc/types_c.h>
#include "myqlabel.h"


#define UNKNOWN_FLOW_THRESH 1e9


videodisplayingqt::videodisplayingqt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    timer = new QTimer(this);
    timer2 = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(importFrame()));//import frame when timeout
    connect(timer2, SIGNAL(timeout()), this, SLOT(drawcropflow()));//import frame when timeout


}

void videodisplayingqt::importFrame()
{
    capture >> frame;
    cvtColor(frame, frame, CV_BGR2RGB);//only RGB of Qt
    QImage srcQImage = QImage((uchar*)(frame.data), frame.cols, frame.rows, QImage::Format_RGB888);
    ui.label->setPixmap(QPixmap::fromImage(srcQImage));
    ui.label->resize(srcQImage.size());
    ui.label->show();
}

void videodisplayingqt::on_displayButton_clicked()
{
    capture.open(file_name.toStdString());
    timer->start(33);
}

void videodisplayingqt::on_stopButton_clicked()
{
    timer->stop();
    capture.release();

}

void videodisplayingqt::open_path_slot()
{
    //打开视频按钮的槽函数
    file_name = QFileDialog::getOpenFileName(this,tr("选择视频文件"),".",
                                                    tr("视频格式(*.avi *.mp4 *.flv *.mkv)"));
    QFile file(file_name);
    if(!file.open(QIODevice::ReadOnly))
    {

        return;
    }
    else{
        ui.lineEdit->setText(file_name);
    }
}

void videodisplayingqt::drawcropflow()
{
    i++;
    //画框的坐标
    int x1 = ui.label->getX1();
    int x2 = ui.label->getX2();
    int y1 = ui.label->getY1();
    int y2 = ui.label->getY2();


//    capture >> frame;
//    cvtColor(frame, frame, CV_BGR2RGB);//only RGB of Qt
//    QImage srcQImage = QImage((uchar*)(frame.data), frame.cols, frame.rows, QImage::Format_RGB888);
//    QImage srcImage1 = srcQImage.copy(x1, y1, x2-x1, y2-y1);
//    ui.label_4->setPixmap(QPixmap::fromImage(srcImage1));
//    ui.label_4->resize(srcImage1.size());
//    ui.label_4->show();

//转换格式保存图片
//    Mat mat;
//    mat = cv::Mat(srcImage1.height(), srcImage1.width(), CV_8UC3, (void*)srcImage1.constBits(), srcImage1.bytesPerLine());
//    cvtColor(mat, mat, CV_BGR2RGB);

//    imwrite("C:/Users/wanghaoming/Desktop/pic/photo" + to_string(i) + ".jpg", mat);

    Mat prevgray, gray, flow, cflow, frame;
    namedWindow("运动光流", 1);

    Mat motion2color;

    for (;;)
    {
        capture >> frame;

        cvtColor(frame, frame, CV_BGR2RGB);//only RGB of Qt
        QImage srcQImage = QImage((uchar*)(frame.data), frame.cols, frame.rows, QImage::Format_RGB888);
        QImage srcImage1 = srcQImage.copy(x1, y1, x2-x1, y2-y1);

        frame = cv::Mat(srcImage1.height(), srcImage1.width(), CV_8UC3, (void*)srcImage1.bits(), srcImage1.bytesPerLine());
        cvtColor(frame, frame, CV_BGR2RGB);


        if (frame.empty()) {
            break;
        }
        cvtColor(frame, gray, CV_BGR2GRAY);
        //imshow("original", frame);

        if (prevgray.data)
        {
            calcOpticalFlowFarneback(prevgray, gray, flow, 0.5, 3, 15, 3, 5, 1.2, 0);
            motionToColor(flow, motion2color);
            imshow("运动光流", motion2color);
        }
        if (waitKey(10) >= 0)
            break;
        swap(prevgray, gray);
    }

}

void videodisplayingqt::clickcrop()
{
    timer2->start(33);//间隔一秒
}

//绘制光流相关函数
void videodisplayingqt::makecolorwheel(vector<Scalar> &colorwheel)
{
    int RY = 15;
    int YG = 6;
    int GC = 4;
    int CB = 11;
    int BM = 13;
    int MR = 6;

    int i;

    for (i = 0; i < RY; i++) colorwheel.push_back(Scalar(255, 255 * i / RY, 0));
    for (i = 0; i < YG; i++) colorwheel.push_back(Scalar(255 - 255 * i / YG, 255, 0));
    for (i = 0; i < GC; i++) colorwheel.push_back(Scalar(0, 255, 255 * i / GC));
    for (i = 0; i < CB; i++) colorwheel.push_back(Scalar(0, 255 - 255 * i / CB, 255));
    for (i = 0; i < BM; i++) colorwheel.push_back(Scalar(255 * i / BM, 0, 255));
    for (i = 0; i < MR; i++) colorwheel.push_back(Scalar(255, 0, 255 - 255 * i / MR));
}

void videodisplayingqt::motionToColor(Mat flow, Mat &color)
{
    if (color.empty())
        color.create(flow.rows, flow.cols, CV_8UC3);

    //定义颜色的容器
    static vector<Scalar> colorwheel;
    if (colorwheel.empty())
        makecolorwheel(colorwheel);

    //确定运动范围
    float maxrad = -1;

    //找到最大流动来标准化fx和fy
    for (int i = 0; i < flow.rows; ++i)
    {
        for (int j = 0; j < flow.cols; ++j)
        {
            Vec2f flow_at_point = flow.at<Vec2f>(i, j);
            float fx = flow_at_point[0];
            float fy = flow_at_point[1];
            if ((fabs(fx) >  UNKNOWN_FLOW_THRESH) || (fabs(fy) >  UNKNOWN_FLOW_THRESH))
                continue;
            float rad = sqrt(fx * fx + fy * fy);
            maxrad = maxrad > rad ? maxrad : rad;
        }
    }

    for (int i = 0; i < flow.rows; ++i)
    {
        for (int j = 0; j < flow.cols; ++j)
        {
            uchar *data = color.data + color.step[0] * i + color.step[1] * j;
            Vec2f flow_at_point = flow.at<Vec2f>(i, j);

            float fx = flow_at_point[0] / maxrad;
            float fy = flow_at_point[1] / maxrad;
            if ((fabs(fx) >  UNKNOWN_FLOW_THRESH) || (fabs(fy) >  UNKNOWN_FLOW_THRESH))
            {
                data[0] = data[1] = data[2] = 0;
                continue;
            }
            float rad = sqrt(fx * fx + fy * fy);

            float angle = atan2(-fy, -fx) / CV_PI;
            float fk = (angle + 1.0) / 2.0 * (colorwheel.size() - 1);
            int k0 = (int)fk;
            int k1 = (k0 + 1) % colorwheel.size();
            float f = fk - k0;
            //f = 0; // 取消注释可查看原始色轮l

            for (int b = 0; b < 3; b++)
            {
                float col0 = colorwheel[k0][b] / 255.0;
                float col1 = colorwheel[k1][b] / 255.0;
                float col = (1 - f) * col0 + f * col1;
                if (rad <= 1)
                    col = 1 - rad * (1 - col); //随半径增大饱和度
                else
                    col *= .75; //超过范围处理
                data[2 - b] = (int)(255.0 * col);
            }
        }
    }
}






