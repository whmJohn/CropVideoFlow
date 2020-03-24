/********************************************************************************
** Form generated from reading UI file 'videodisplayingqt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEODISPLAYINGQT_H
#define UI_VIDEODISPLAYINGQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <myqlabel.h>

QT_BEGIN_NAMESPACE

class Ui_videodisplayingqt
{
public:
    QWidget *centralWidget;
    MyQLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *videodisplayingqt)
    {
        if (videodisplayingqt->objectName().isEmpty())
            videodisplayingqt->setObjectName(QStringLiteral("videodisplayingqt"));
        videodisplayingqt->resize(1507, 951);
        centralWidget = new QWidget(videodisplayingqt);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new MyQLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 300, 421, 291));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 240, 121, 71));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 20, 761, 81));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(11);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setBaseSize(QSize(218, 200));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_3);

        horizontalLayout->setStretch(1, 200);
        horizontalLayout->setStretch(3, 200);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 150, 761, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(pushButton_4);

        horizontalLayout_2->setStretch(0, 200);
        horizontalLayout_2->setStretch(1, 200);
        horizontalLayout_2->setStretch(2, 200);
        horizontalLayout_2->setStretch(3, 200);
        horizontalLayout_2->setStretch(4, 200);
        videodisplayingqt->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(videodisplayingqt);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1507, 21));
        videodisplayingqt->setMenuBar(menuBar);
        mainToolBar = new QToolBar(videodisplayingqt);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        videodisplayingqt->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(videodisplayingqt);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        videodisplayingqt->setStatusBar(statusBar);

        retranslateUi(videodisplayingqt);
        QObject::connect(pushButton, SIGNAL(clicked()), videodisplayingqt, SLOT(on_displayButton_clicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), videodisplayingqt, SLOT(on_stopButton_clicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), videodisplayingqt, SLOT(open_path_slot()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), videodisplayingqt, SLOT(clickcrop()));

        QMetaObject::connectSlotsByName(videodisplayingqt);
    } // setupUi

    void retranslateUi(QMainWindow *videodisplayingqt)
    {
        videodisplayingqt->setWindowTitle(QApplication::translate("videodisplayingqt", "videodisplayingqt", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("videodisplayingqt", "\350\247\206\351\242\221\346\222\255\346\224\276", Q_NULLPTR));
        pushButton->setText(QApplication::translate("videodisplayingqt", "\350\275\275\345\205\245\350\247\206\351\242\221", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("videodisplayingqt", "\346\232\202\345\201\234", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("videodisplayingqt", "\347\273\230\345\210\266\350\243\201\345\210\207\345\205\211\346\265\201\345\233\276\347\211\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("videodisplayingqt", "\346\226\207\344\273\266\350\267\257\345\276\204\357\274\232", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("videodisplayingqt", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class videodisplayingqt: public Ui_videodisplayingqt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEODISPLAYINGQT_H
