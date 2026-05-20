#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include "switchbutton.h"
#include "cJSON.h"
#include <QMouseEvent>
#include <cstdio>
#include <QColor>
#include <QColorDialog>
#include "systemvalue.h"
#include <QSound>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initUdpSocket();

private slots:


    void on_pushButtonPower_clicked();

    void on_pushButtonAuto_clicked();

    void on_pushButtonRun_pressed();

    void on_pushButtonRun_released();

    void on_pushButtonBack_pressed();

    void on_pushButtonBack_released();

    void on_pushButtonLeft_pressed();

    void on_pushButtonLeft_released();

    void on_pushButtonRight_released();

    void on_pushButtonRight_pressed();



    void on_radioButtonMiddle_toggled(bool checked);

    void on_radioButtonLow_toggled(bool checked);

    void on_radioButtonHigh_toggled(bool checked);

    void on_pushButtonSet_clicked();

    void on_pushButtonRGB_clicked();

    void on_pushButtonFan_clicked();

    void on_pushButtonBuzzer_pressed();

    void on_pushButtonBuzzer_released();

    void slotRecvCarData();//接收数据的槽函数

private:
    Ui::MainWindow *ui;
    QUdpSocket* socket;
    bool isPowerChecked;
    bool isAutoChecked;
    bool isRGBChecked;
    bool isFanChecked;

    cJSON *root;
    cJSON *carRGB;
    char *str_print;
    SystemValue sv;//系统值
    QSound* soundTempWarn;//温度
    QSound* soundPsWarn;//接近值
};

#endif // MAINWINDOW_H
