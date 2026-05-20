/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label;
    QPushButton *pushButtonPower;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_2;
    QPushButton *pushButtonAuto;
    QSpacerItem *horizontalSpacer_23;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_24;
    QTabWidget *tabWidget;
    QWidget *tabIP;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonRGB;
    QLineEdit *lineEditIP;
    QPushButton *pushButtonFan;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *spinBoxR;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBoxG;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBoxB;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSet;
    QSpacerItem *horizontalSpacer_5;
    QWidget *tabSpeed;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonRun_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonLow;
    QRadioButton *radioButtonMiddle;
    QRadioButton *radioButtonHigh;
    QSpacerItem *horizontalSpacer_9;
    QGridLayout *gridLayout;
    QPushButton *pushButtonBuzzer;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonRun;
    QPushButton *pushButtonRight;
    QPushButton *pushButtonLeft;
    QSpacerItem *horizontalSpacer_25;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelTemp;
    QSpacerItem *horizontalSpacer_13;
    QProgressBar *progressBarTemp;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_10;
    QSpinBox *spinBoxTemp;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelHum;
    QSpacerItem *horizontalSpacer_14;
    QProgressBar *progressBarHum;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_12;
    QSpinBox *spinBoxHum;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelLight;
    QSpacerItem *horizontalSpacer_15;
    QProgressBar *progressBarLight;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_14;
    QSpinBox *spinBoxLight;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelPs;
    QSpacerItem *horizontalSpacer_16;
    QProgressBar *progressBarPs;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_16;
    QSpinBox *spinBoxPs;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelIr;
    QSpacerItem *horizontalSpacer_17;
    QProgressBar *progressBarIr;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_18;
    QSpinBox *spinBoxIr;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(669, 801);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QLatin1String("#MainWindow{\n"
"border-image: url(:/image/background.jpg);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 11, 638, 721));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_6->setFont(font);
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral(""));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label);

        pushButtonPower = new QPushButton(layoutWidget);
        pushButtonPower->setObjectName(QStringLiteral("pushButtonPower"));
        pushButtonPower->setMinimumSize(QSize(100, 30));
        pushButtonPower->setStyleSheet(QStringLiteral("border-image: url(:/image/imageswitch/btncheckoff1.png);"));

        horizontalLayout->addWidget(pushButtonPower);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(100, 30));
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_2);

        pushButtonAuto = new QPushButton(layoutWidget);
        pushButtonAuto->setObjectName(QStringLiteral("pushButtonAuto"));
        pushButtonAuto->setMinimumSize(QSize(100, 30));
        pushButtonAuto->setStyleSheet(QStringLiteral("border-image: url(:/image/imageswitch/btncheckoff1.png);"));

        horizontalLayout->addWidget(pushButtonAuto);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_23);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_24);

        tabWidget = new QTabWidget(layoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(340, 250));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        tabWidget->setFont(font2);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget#tabWidget{\n"
"	color: rgb(255, 170, 0);\n"
"background-image: url(:/image/background.jpg);\n"
"}\n"
"QWidget#tabIP\n"
"{\n"
"	background-image: url(:/image/background.jpg);\n"
"}\n"
"QWidget#tabSpeed\n"
"{\n"
"	background-image: url(:/image/background.jpg);\n"
"}"));
        tabIP = new QWidget();
        tabIP->setObjectName(QStringLiteral("tabIP"));
        tabIP->setStyleSheet(QLatin1String("MainWindow#tabWidget\n"
"{\n"
"	border-image: url(:/image/background.jpg);\n"
"}\n"
""));
        layoutWidget1 = new QWidget(tabIP);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 311, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(60, 20));
        label_7->setFont(font2);

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(60, 30));
        label_8->setFont(font2);

        horizontalLayout_7->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonRGB = new QPushButton(layoutWidget1);
        pushButtonRGB->setObjectName(QStringLiteral("pushButtonRGB"));
        pushButtonRGB->setMinimumSize(QSize(60, 60));
        pushButtonRGB->setStyleSheet(QStringLiteral("border-image: url(:/image/rgboff.png);"));

        horizontalLayout_4->addWidget(pushButtonRGB);

        lineEditIP = new QLineEdit(layoutWidget1);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setMinimumSize(QSize(100, 35));
        lineEditIP->setFont(font2);
        lineEditIP->setStyleSheet(QStringLiteral("color: rgb(255, 148, 99);"));
        lineEditIP->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEditIP);

        pushButtonFan = new QPushButton(layoutWidget1);
        pushButtonFan->setObjectName(QStringLiteral("pushButtonFan"));
        pushButtonFan->setMinimumSize(QSize(60, 60));
        pushButtonFan->setStyleSheet(QStringLiteral("border-image: url(:/image/fanoff.png);"));

        horizontalLayout_4->addWidget(pushButtonFan);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        spinBoxR = new QSpinBox(layoutWidget1);
        spinBoxR->setObjectName(QStringLiteral("spinBoxR"));
        spinBoxR->setMinimumSize(QSize(50, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        spinBoxR->setFont(font3);
        spinBoxR->setMaximum(255);

        horizontalLayout_2->addWidget(spinBoxR);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        spinBoxG = new QSpinBox(layoutWidget1);
        spinBoxG->setObjectName(QStringLiteral("spinBoxG"));
        spinBoxG->setMinimumSize(QSize(50, 25));
        spinBoxG->setFont(font3);
        spinBoxG->setMaximum(255);

        horizontalLayout_2->addWidget(spinBoxG);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        spinBoxB = new QSpinBox(layoutWidget1);
        spinBoxB->setObjectName(QStringLiteral("spinBoxB"));
        spinBoxB->setMinimumSize(QSize(50, 25));
        spinBoxB->setFont(font3);
        spinBoxB->setMaximum(255);

        horizontalLayout_2->addWidget(spinBoxB);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(0, 0, 255);"));

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pushButtonSet = new QPushButton(layoutWidget1);
        pushButtonSet->setObjectName(QStringLiteral("pushButtonSet"));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        pushButtonSet->setFont(font4);

        horizontalLayout_3->addWidget(pushButtonSet);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tabWidget->addTab(tabIP, QString());
        tabSpeed = new QWidget();
        tabSpeed->setObjectName(QStringLiteral("tabSpeed"));
        layoutWidget2 = new QWidget(tabSpeed);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 20, 291, 181));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonRun_3 = new QPushButton(layoutWidget2);
        pushButtonRun_3->setObjectName(QStringLiteral("pushButtonRun_3"));
        pushButtonRun_3->setMinimumSize(QSize(100, 100));
        pushButtonRun_3->setStyleSheet(QStringLiteral("border-image: url(:/image/car.png);"));

        horizontalLayout_5->addWidget(pushButtonRun_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButtonLow = new QRadioButton(layoutWidget2);
        radioButtonLow->setObjectName(QStringLiteral("radioButtonLow"));
        radioButtonLow->setMinimumSize(QSize(0, 0));
        radioButtonLow->setFont(font2);
        radioButtonLow->setChecked(true);

        verticalLayout->addWidget(radioButtonLow);

        radioButtonMiddle = new QRadioButton(layoutWidget2);
        radioButtonMiddle->setObjectName(QStringLiteral("radioButtonMiddle"));
        radioButtonMiddle->setMinimumSize(QSize(0, 0));
        radioButtonMiddle->setFont(font2);
        radioButtonMiddle->setChecked(false);

        verticalLayout->addWidget(radioButtonMiddle);

        radioButtonHigh = new QRadioButton(layoutWidget2);
        radioButtonHigh->setObjectName(QStringLiteral("radioButtonHigh"));
        radioButtonHigh->setMinimumSize(QSize(0, 0));
        radioButtonHigh->setFont(font2);
        radioButtonHigh->setChecked(false);

        verticalLayout->addWidget(radioButtonHigh);


        horizontalLayout_5->addLayout(verticalLayout);

        tabWidget->addTab(tabSpeed, QString());

        horizontalLayout_6->addWidget(tabWidget);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonBuzzer = new QPushButton(layoutWidget);
        pushButtonBuzzer->setObjectName(QStringLiteral("pushButtonBuzzer"));
        pushButtonBuzzer->setMinimumSize(QSize(70, 70));
        pushButtonBuzzer->setStyleSheet(QLatin1String("border-image: url(:/image/car.png);\n"
"QPushButton#pushButtonBuzzer:pressed{\n"
"	background-color:rgb(218,218,218)\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonBuzzer, 1, 1, 1, 1);

        pushButtonBack = new QPushButton(layoutWidget);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setMinimumSize(QSize(70, 70));
        pushButtonBack->setStyleSheet(QStringLiteral("border-image: url(:/image/btng/btngd.png);"));

        gridLayout->addWidget(pushButtonBack, 2, 1, 1, 1);

        pushButtonRun = new QPushButton(layoutWidget);
        pushButtonRun->setObjectName(QStringLiteral("pushButtonRun"));
        pushButtonRun->setMinimumSize(QSize(70, 70));
        pushButtonRun->setStyleSheet(QStringLiteral("border-image: url(:/image/btng/btngu.png);"));

        gridLayout->addWidget(pushButtonRun, 0, 1, 1, 1);

        pushButtonRight = new QPushButton(layoutWidget);
        pushButtonRight->setObjectName(QStringLiteral("pushButtonRight"));
        pushButtonRight->setMinimumSize(QSize(70, 70));
        pushButtonRight->setStyleSheet(QStringLiteral("border-image: url(:/image/btng/btngr.png);"));

        gridLayout->addWidget(pushButtonRight, 1, 2, 1, 1);

        pushButtonLeft = new QPushButton(layoutWidget);
        pushButtonLeft->setObjectName(QStringLiteral("pushButtonLeft"));
        pushButtonLeft->setMinimumSize(QSize(70, 70));
        pushButtonLeft->setStyleSheet(QStringLiteral("border-image: url(:/image/btng/btngl.png);"));

        gridLayout->addWidget(pushButtonLeft, 1, 0, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_25, 1, 3, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelTemp = new QLabel(layoutWidget);
        labelTemp->setObjectName(QStringLiteral("labelTemp"));
        labelTemp->setMinimumSize(QSize(150, 30));
        labelTemp->setFont(font1);
        labelTemp->setFrameShape(QFrame::Box);
        labelTemp->setFrameShadow(QFrame::Raised);

        horizontalLayout_8->addWidget(labelTemp);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        progressBarTemp = new QProgressBar(layoutWidget);
        progressBarTemp->setObjectName(QStringLiteral("progressBarTemp"));
        progressBarTemp->setMinimumSize(QSize(280, 30));
        progressBarTemp->setStyleSheet(QLatin1String("QProgressBar{\n"
"	font:9pt;\n"
"	border-radius:5px;\n"
"	text-align:center;\n"
"	border:1px solid #E8EDF2;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(180, 180, 180);\n"
"}\n"
"QProgressBar:chunk{\n"
"	border-radius:5px;\n"
"	background-color:#1ABC9C;\n"
"}\n"
""));
        progressBarTemp->setValue(24);

        horizontalLayout_8->addWidget(progressBarTemp);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(70, 30));
        label_10->setFont(font1);
        label_10->setFrameShape(QFrame::Box);
        label_10->setFrameShadow(QFrame::Raised);

        horizontalLayout_8->addWidget(label_10);

        spinBoxTemp = new QSpinBox(layoutWidget);
        spinBoxTemp->setObjectName(QStringLiteral("spinBoxTemp"));
        spinBoxTemp->setMinimumSize(QSize(70, 30));
        spinBoxTemp->setFont(font2);
        spinBoxTemp->setMaximum(100);
        spinBoxTemp->setValue(50);

        horizontalLayout_8->addWidget(spinBoxTemp);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelHum = new QLabel(layoutWidget);
        labelHum->setObjectName(QStringLiteral("labelHum"));
        labelHum->setMinimumSize(QSize(150, 30));
        labelHum->setFont(font1);
        labelHum->setFrameShape(QFrame::Box);
        labelHum->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(labelHum);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        progressBarHum = new QProgressBar(layoutWidget);
        progressBarHum->setObjectName(QStringLiteral("progressBarHum"));
        progressBarHum->setMinimumSize(QSize(280, 30));
        progressBarHum->setStyleSheet(QLatin1String("QProgressBar{\n"
"	font:9pt;\n"
"	border-radius:5px;\n"
"	text-align:center;\n"
"	border:1px solid #E8EDF2;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(180, 180, 180);\n"
"}\n"
"QProgressBar:chunk{\n"
"	border-radius:5px;\n"
"	background-color:#1ABC9C;\n"
"}\n"
""));
        progressBarHum->setValue(50);

        horizontalLayout_9->addWidget(progressBarHum);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_19);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(70, 30));
        label_12->setFont(font1);
        label_12->setFrameShape(QFrame::Box);
        label_12->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(label_12);

        spinBoxHum = new QSpinBox(layoutWidget);
        spinBoxHum->setObjectName(QStringLiteral("spinBoxHum"));
        spinBoxHum->setMinimumSize(QSize(70, 30));
        spinBoxHum->setFont(font2);
        spinBoxHum->setMaximum(100);
        spinBoxHum->setValue(50);

        horizontalLayout_9->addWidget(spinBoxHum);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelLight = new QLabel(layoutWidget);
        labelLight->setObjectName(QStringLiteral("labelLight"));
        labelLight->setMinimumSize(QSize(150, 30));
        labelLight->setFont(font1);
        labelLight->setFrameShape(QFrame::Box);
        labelLight->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(labelLight);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);

        progressBarLight = new QProgressBar(layoutWidget);
        progressBarLight->setObjectName(QStringLiteral("progressBarLight"));
        progressBarLight->setMinimumSize(QSize(280, 30));
        progressBarLight->setStyleSheet(QLatin1String("QProgressBar{\n"
"	font:9pt;\n"
"	border-radius:5px;\n"
"	text-align:center;\n"
"	border:1px solid #E8EDF2;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(180, 180, 180);\n"
"}\n"
"QProgressBar:chunk{\n"
"	border-radius:5px;\n"
"	background-color:#1ABC9C;\n"
"}\n"
""));
        progressBarLight->setMaximum(2000);
        progressBarLight->setValue(700);

        horizontalLayout_10->addWidget(progressBarLight);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_20);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(70, 30));
        label_14->setFont(font1);
        label_14->setFrameShape(QFrame::Box);
        label_14->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(label_14);

        spinBoxLight = new QSpinBox(layoutWidget);
        spinBoxLight->setObjectName(QStringLiteral("spinBoxLight"));
        spinBoxLight->setMinimumSize(QSize(70, 30));
        spinBoxLight->setFont(font2);
        spinBoxLight->setMaximum(2000);
        spinBoxLight->setValue(1000);

        horizontalLayout_10->addWidget(spinBoxLight);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labelPs = new QLabel(layoutWidget);
        labelPs->setObjectName(QStringLiteral("labelPs"));
        labelPs->setMinimumSize(QSize(150, 30));
        labelPs->setFont(font1);
        labelPs->setFrameShape(QFrame::Box);
        labelPs->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(labelPs);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_16);

        progressBarPs = new QProgressBar(layoutWidget);
        progressBarPs->setObjectName(QStringLiteral("progressBarPs"));
        progressBarPs->setMinimumSize(QSize(280, 30));
        progressBarPs->setStyleSheet(QLatin1String("QProgressBar{\n"
"	font:9pt;\n"
"	border-radius:5px;\n"
"	text-align:center;\n"
"	border:1px solid #E8EDF2;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(180, 180, 180);\n"
"}\n"
"QProgressBar:chunk{\n"
"	border-radius:5px;\n"
"	background-color:#1ABC9C;\n"
"}\n"
""));
        progressBarPs->setMaximum(1025);
        progressBarPs->setValue(300);

        horizontalLayout_11->addWidget(progressBarPs);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_21);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(70, 30));
        label_16->setFont(font1);
        label_16->setFrameShape(QFrame::Box);
        label_16->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_16);

        spinBoxPs = new QSpinBox(layoutWidget);
        spinBoxPs->setObjectName(QStringLiteral("spinBoxPs"));
        spinBoxPs->setMinimumSize(QSize(70, 30));
        spinBoxPs->setFont(font2);
        spinBoxPs->setMaximum(1025);
        spinBoxPs->setValue(500);

        horizontalLayout_11->addWidget(spinBoxPs);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        labelIr = new QLabel(layoutWidget);
        labelIr->setObjectName(QStringLiteral("labelIr"));
        labelIr->setMinimumSize(QSize(150, 30));
        labelIr->setFont(font1);
        labelIr->setFrameShape(QFrame::Box);
        labelIr->setFrameShadow(QFrame::Raised);

        horizontalLayout_12->addWidget(labelIr);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_17);

        progressBarIr = new QProgressBar(layoutWidget);
        progressBarIr->setObjectName(QStringLiteral("progressBarIr"));
        progressBarIr->setMinimumSize(QSize(280, 30));
        progressBarIr->setStyleSheet(QLatin1String("QProgressBar{\n"
"	font:9pt;\n"
"	border-radius:5px;\n"
"	text-align:center;\n"
"	border:1px solid #E8EDF2;\n"
"	background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(180, 180, 180);\n"
"}\n"
"QProgressBar:chunk{\n"
"	border-radius:5px;\n"
"	background-color:#1ABC9C;\n"
"}\n"
""));
        progressBarIr->setMaximum(25);
        progressBarIr->setValue(24);

        horizontalLayout_12->addWidget(progressBarIr);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_22);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(70, 30));
        label_18->setFont(font1);
        label_18->setFrameShape(QFrame::Box);
        label_18->setFrameShadow(QFrame::Raised);

        horizontalLayout_12->addWidget(label_18);

        spinBoxIr = new QSpinBox(layoutWidget);
        spinBoxIr->setObjectName(QStringLiteral("spinBoxIr"));
        spinBoxIr->setMinimumSize(QSize(70, 30));
        spinBoxIr->setFont(font2);
        spinBoxIr->setMaximum(100);
        spinBoxIr->setValue(50);

        horizontalLayout_12->addWidget(spinBoxIr);


        verticalLayout_4->addLayout(horizontalLayout_12);


        verticalLayout_3->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 669, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216\351\270\277\350\222\231\347\216\257\345\242\203\346\212\245\350\255\246\350\275\246", 0));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\345\237\272\344\272\216\351\270\277\350\222\231\347\216\257\345\242\203\346\212\245\350\255\246\350\275\246</p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\345\260\217\350\275\246\347\224\265\346\234\272</p></body></html>", 0));
        pushButtonPower->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\351\201\277\351\232\234\345\212\237\350\203\275</p></body></html>", 0));
        pushButtonAuto->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">RGB\347\201\257</p></body></html>", 0));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\351\243\216\346\211\207</p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRGB->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRGB->setText(QString());
        pushButtonRGB->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", 0));
        lineEditIP->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\260\217\350\275\246IP", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonFan->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonFan->setText(QString());
        pushButtonFan->setShortcut(QApplication::translate("MainWindow", "Ctrl+Left", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">R</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">G</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">B</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonSet->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonSet->setText(QApplication::translate("MainWindow", "\350\256\276 \347\275\256", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabIP), QApplication::translate("MainWindow", "\350\276\223\345\205\245\345\260\217\350\275\246IP", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRun_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRun_3->setText(QString());
        radioButtonLow->setText(QApplication::translate("MainWindow", "\344\275\216\351\200\237\350\277\220\350\241\214", 0));
        radioButtonMiddle->setText(QApplication::translate("MainWindow", "\344\270\255\351\200\237\350\277\220\350\241\214", 0));
        radioButtonHigh->setText(QApplication::translate("MainWindow", "\351\253\230\351\200\237\350\277\220\350\241\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSpeed), QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\216\247\345\210\266", 0));
        pushButtonBuzzer->setText(QString());
        pushButtonBack->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonRun->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRun->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonRight->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRight->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonLeft->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonLeft->setText(QString());
        labelTemp->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246:", 0));
        progressBarTemp->setFormat(QString());
        label_10->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274:", 0));
        labelHum->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246:", 0));
        progressBarHum->setFormat(QString());
        label_12->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274:", 0));
        labelLight->setText(QApplication::translate("MainWindow", "\345\205\211\347\205\247:", 0));
        progressBarLight->setFormat(QString());
        label_14->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274:", 0));
        labelPs->setText(QApplication::translate("MainWindow", "\346\216\245\350\277\221:", 0));
        progressBarPs->setFormat(QString());
        label_16->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274:", 0));
        labelIr->setText(QApplication::translate("MainWindow", "\347\272\242\345\244\226:", 0));
        progressBarIr->setFormat(QString());
        label_18->setText(QApplication::translate("MainWindow", "\351\230\210\345\200\274:", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
