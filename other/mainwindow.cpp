#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cJSON.h"
#include <QDebug>
#include <QMessageBox>

#include <unistd.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),isPowerChecked(false),isAutoChecked(false),isRGBChecked(false),isFanChecked(false)
{
    ui->setupUi(this);
    initUdpSocket();
    ui->pushButtonRun->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonBack->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonLeft->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonRight->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonRGB->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonFan->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonSet->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonPower->setCursor(QCursor(Qt::PointingHandCursor));
    ui->pushButtonAuto->setCursor(QCursor(Qt::PointingHandCursor));


    //创建音效对象，并设置循环播放
    soundTempWarn = new QSound(":sound/tempwarn.wav",this);
    soundPsWarn = new QSound(":sound/pswarn.wav",this);
    soundTempWarn->setLoops(-1);
    soundPsWarn->setLoops(-1);


    ui->lineEditIP->setText("192.168.63.24");


#if 0
    cJSON *root = NULL, *person = NULL;
    char *str_print = NULL;


    root = cJSON_CreateObject();
    person = cJSON_CreateObject();


    cJSON_AddItemToObject(root, "person", person);
    cJSON_AddStringToObject(person, "firstName", "Lebron");
    cJSON_AddStringToObject(person, "lastName", "James");
    cJSON_AddNumberToObject(person, "age", 36);
    cJSON_AddNumberToObject(person, "height", 206);
    cJSON_AddStringToObject(root, "carStatus", "on");

    str_print = cJSON_Print(root);
    QString s = QString("%1").arg(str_print);
    if(str_print != NULL)
    {
        //          printf("%s\n", str_print);

        qDebug()<<s;
        cJSON_free(str_print);
        str_print = NULL;
    }
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUdpSocket()
{
    socket = new QUdpSocket;
    socket->bind(6666,QUdpSocket::ShareAddress|QAbstractSocket::ReuseAddressHint);
    //    socket->bind(QHostAddress("192.168.122.104"),8080);
    connect(socket, SIGNAL(readyRead()),this,SLOT(slotRecvCarData()));
}


void MainWindow::on_pushButtonPower_clicked()
{
    root = cJSON_CreateObject();
    isPowerChecked ? cJSON_AddStringToObject(root, "carStatus", "off") : cJSON_AddStringToObject(root, "carStatus", "on");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(isPowerChecked)
        ui->pushButtonPower->setStyleSheet("border-image: url(:/image/imageswitch/btncheckoff1.png);");
    else
        ui->pushButtonPower->setStyleSheet("border-image: url(:/image/imageswitch/btncheckon1.png);");
    isPowerChecked = !isPowerChecked;
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonAuto_clicked()
{
    root = cJSON_CreateObject();


    isAutoChecked ? cJSON_AddNumberToObject(root, "autoMode", 0) : cJSON_AddNumberToObject(root, "autoMode", 1);
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(isAutoChecked)
        ui->pushButtonAuto->setStyleSheet("border-image: url(:/image/imageswitch/btncheckoff1.png);");
    else
        ui->pushButtonAuto->setStyleSheet("border-image: url(:/image/imageswitch/btncheckon1.png);");
    isAutoChecked = !isAutoChecked;
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}


void MainWindow::on_pushButtonRun_pressed()
{
    qDebug()<<"run.....";
    ui->pushButtonRun->setStyleSheet("border-image: url(:/image/btny/btnyu.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "run");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonRun_released()
{
    usleep(200*1000);
    qDebug()<<"stop......";
    ui->pushButtonRun->setStyleSheet("border-image: url(:/image/btng/btngu.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "stop");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonBack_pressed()
{
    qDebug()<<"back.....";
    ui->pushButtonBack->setStyleSheet("border-image: url(:/image/btny/btnyd.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "back");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonBack_released()
{
    usleep(200*1000);
    qDebug()<<"stop......";
    ui->pushButtonBack->setStyleSheet("border-image: url(:/image/btng/btngd.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "stop");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonLeft_pressed()
{
    qDebug()<<"left.....";
    ui->pushButtonLeft->setStyleSheet("border-image: url(:/image/btny/btnyl.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "left");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonLeft_released()
{
    usleep(200*1000);
    qDebug()<<"stop......";
    ui->pushButtonLeft->setStyleSheet("border-image: url(:/image/btng/btngl.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "stop");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonRight_pressed()
{
    qDebug()<<"right.....";
    ui->pushButtonRight->setStyleSheet("border-image: url(:/image/btny/btnyr.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "right");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonRight_released()
{
    usleep(200*1000);
    qDebug()<<"stop......";
    ui->pushButtonRight->setStyleSheet("border-image: url(:/image/btng/btngr.png);");
    root = cJSON_CreateObject();
    cJSON_AddStringToObject(root, "carStatus", "stop");
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}


void MainWindow::on_radioButtonMiddle_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"middle......";
        root = cJSON_CreateObject();
        cJSON_AddStringToObject(root, "carSpeed", "middle");
        str_print = cJSON_Print(root);
        socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
        if(str_print != NULL)
            cJSON_free(str_print);
        if(root != NULL)
            cJSON_Delete(root);
    }
}

void MainWindow::on_radioButtonLow_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"low......";
        root = cJSON_CreateObject();
        cJSON_AddStringToObject(root, "carSpeed", "low");
        str_print = cJSON_Print(root);
        socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
        if(str_print != NULL)
            cJSON_free(str_print);
        if(root != NULL)
            cJSON_Delete(root);
    }
}

void MainWindow::on_radioButtonHigh_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"high......";
        root = cJSON_CreateObject();
        cJSON_AddStringToObject(root, "carSpeed", "high");
        str_print = cJSON_Print(root);
        socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
        if(str_print != NULL)
            cJSON_free(str_print);
        if(root != NULL)
            cJSON_Delete(root);
    }
}

void MainWindow::on_pushButtonSet_clicked()
{
    int r,g,b;
    QColor color = QColorDialog::getColor(Qt::red);
    if(color.isValid())
    {
        color.getRgb(&r, &g, &b);
        ui->spinBoxR->setValue(r);
        ui->spinBoxG->setValue(g);
        ui->spinBoxB->setValue(b);
    }
}

void MainWindow::on_pushButtonRGB_clicked()
{
    /* 创建cJSON对象 */
    root = cJSON_CreateObject();    /* 创建一个cJSON对象，要用 cJSON_Delete 释放内存 */
    carRGB = cJSON_CreateObject();
    cJSON_AddItemToObject(root, "carRGB", carRGB);
    cJSON_AddNumberToObject(carRGB, "R", ui->spinBoxR->value());
    cJSON_AddNumberToObject(carRGB, "G", ui->spinBoxG->value());
    cJSON_AddNumberToObject(carRGB, "B", ui->spinBoxB->value());
#if 1
    if(!isRGBChecked)
    {
        //        cJSON_AddItemToObject(root, "carRGB", carRGB);
        //        cJSON_AddNumberToObject(carRGB, "R", ui->spinBoxR->value());
        //        cJSON_AddNumberToObject(carRGB, "G", ui->spinBoxG->value());
        //        cJSON_AddNumberToObject(carRGB, "B", ui->spinBoxB->value());
        ui->pushButtonRGB->setStyleSheet("border-image: url(:/image/rgbon.png);");
    }
    else
    {
        //        cJSON_AddItemToObject(root, "carRGB", carRGB);
        //        cJSON_AddNumberToObject(carRGB, "R", 0);
        //        cJSON_AddNumberToObject(carRGB, "G", 0);
        //        cJSON_AddNumberToObject(carRGB, "B", 0);
        ui->pushButtonRGB->setStyleSheet("border-image: url(:/image/rgboff.png);");
    }
#endif

    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    isRGBChecked = !isRGBChecked;
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonFan_clicked()
{
    /* 创建cJSON对象 */
    root = cJSON_CreateObject();    /* 创建一个cJSON对象，要用 cJSON_Delete 释放内存 */
    if(!isFanChecked)
    {
        cJSON_AddNumberToObject(root, "carFan", 1);
        ui->pushButtonFan->setStyleSheet("border-image: url(:/image/fanon.png);");
    }
    else
    {
        cJSON_AddNumberToObject(root, "carFan", 0);
        ui->pushButtonFan->setStyleSheet("border-image: url(:/image/fanoff.png);");
    }
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    isFanChecked = !isFanChecked;
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonBuzzer_pressed()
{
    ui->pushButtonBuzzer->setStyleSheet("border-image: url(:/image/buzzer.png);");
    /* 创建cJSON对象 */
    root = cJSON_CreateObject();    /* 创建一个cJSON对象，要用 cJSON_Delete 释放内存 */
    cJSON_AddNumberToObject(root, "carBuzzer", 0);
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::on_pushButtonBuzzer_released()
{
    usleep(200*1000);
    ui->pushButtonBuzzer->setStyleSheet("border-image: url(:/image/car.png);");

    /* 创建cJSON对象 */
    root = cJSON_CreateObject();    /* 创建一个cJSON对象，要用 cJSON_Delete 释放内存 */
    cJSON_AddNumberToObject(root, "carBuzzer", 1);
    str_print = cJSON_Print(root);
    socket->writeDatagram(str_print, QHostAddress(ui->lineEditIP->text()),7788);
    if(str_print != NULL)
        cJSON_free(str_print);
    if(root != NULL)
        cJSON_Delete(root);
}

void MainWindow::slotRecvCarData()
{
    QString s;
    cJSON *root;
    QByteArray data;//用来保存接收到的数据
    QHostAddress client_Addr;
    quint16 port;
    char recv_buf[1000] = { 0 };
    while(socket->hasPendingDatagrams())//有未接收的数据
    {
        //重置data大小和数据报大小一样
        data.resize(socket->pendingDatagramSize());
        //读取数据
        socket->readDatagram(data.data(), data.size(),&client_Addr,&port);
        //将字节数组转换成字符串
        s = QVariant(data).toString();
        //调试，打印接收到的数据
        qDebug()<<s;
        const char* recv_buf = s.toStdString().c_str();
        root = cJSON_Parse(recv_buf);//解析Json串
        if (root)
        {
            cJSON *json_carStatus = cJSON_GetObjectItem(root, "carStatus");
            if (json_carStatus != NULL)
            {
                cJSON *json_left = cJSON_GetObjectItem(json_carStatus, "carLeftSpeed");
                sv.left_motor_speed = json_left->valueint;

                cJSON *json_right = cJSON_GetObjectItem(json_carStatus, "carRightSpeed");
                sv.right_motor_speed = json_right->valueint;

                cJSON *json_battery = cJSON_GetObjectItem(json_carStatus, "carBattery");
                sv.battery_voltage = json_battery->valueint;

                cJSON *json_distance = cJSON_GetObjectItem(json_carStatus, "carDistance");
                sv.distance = json_distance->valueint;
            }
            cJSON *json_env = cJSON_GetObjectItem(root, "carEnvironment");
            if (json_env != NULL)
            {
                cJSON *json_temperature = cJSON_GetObjectItem(json_env, "temperature");
                sv.temperature = json_temperature->valuedouble;

                cJSON *json_humidity = cJSON_GetObjectItem(json_env, "humidity");
                sv.humidity = json_humidity->valuedouble;

                cJSON *json_ir = cJSON_GetObjectItem(json_env, "ir");
                sv.ir = json_ir->valueint;

                cJSON *json_als = cJSON_GetObjectItem(json_env, "als");
                sv.als = json_als->valueint;

                cJSON *json_ps = cJSON_GetObjectItem(json_env, "ps");
                sv.ps = json_ps->valueint;
            }
            QString temp = QString("%1 %2 %3 %4 %5 %6 %7 %8 %9")
                    .arg(sv.left_motor_speed)
                    .arg(sv.right_motor_speed)
                    .arg(sv.battery_voltage)
                    .arg(sv.distance)
                    .arg(sv.temperature)
                    .arg(sv.humidity)
                    .arg(sv.ir)
                    .arg(sv.als)
                    .arg(sv.ps);
            qDebug()<<temp;
            sv.temperature = QString::number(sv.temperature,'f',1).toDouble();
            ui->progressBarTemp->setValue(sv.temperature);
            ui->labelTemp->setText(QString("温度:%1℃").arg(sv.temperature));

            sv.humidity = QString::number(sv.humidity,'f',1).toDouble();
            ui->progressBarHum->setValue(sv.humidity);
            ui->labelHum->setText(QString("湿度:%1RH").arg(sv.humidity));

            ui->progressBarLight->setValue(sv.als);
            ui->labelLight->setText(QString("光照:%1Lux").arg(sv.als));

            ui->progressBarPs->setValue(sv.ps);
            ui->labelPs->setText(QString("接近:%1").arg(sv.ps));

            ui->progressBarIr->setValue(sv.ir);
            ui->labelIr->setText(QString("红外:%1").arg(sv.ir));

            if(sv.temperature > ui->spinBoxTemp->value())
            {
                soundTempWarn->play();

                ui->progressBarTemp->setStyleSheet(
                            "QProgressBar{font:9pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                            "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");


            }
            else
            {
                soundTempWarn->stop();
                ui->progressBarTemp->setStyleSheet(
                            "QProgressBar{font:9pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                            "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");

            }

            if(sv.ps > ui->spinBoxPs->value())
            {
                soundPsWarn->play();
                ui->progressBarPs->setStyleSheet(
                            "QProgressBar{font:9pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                            "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");
            }
            else
            {
                soundPsWarn->stop();
                ui->progressBarPs->setStyleSheet(
                            "QProgressBar{font:9pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                            "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
            }

        }
        cJSON_Delete(root);
        root = NULL;
    }
}

