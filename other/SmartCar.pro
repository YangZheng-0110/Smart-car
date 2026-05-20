#-------------------------------------------------
#
# Project created by QtCreator 2023-10-11T21:29:53
#
#-------------------------------------------------

QT       += core gui
QT += network
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SmartCar
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cJSON.c

HEADERS  += mainwindow.h \
    cJSON.h \
    systemvalue.h

FORMS    += mainwindow.ui

RESOURCES += \
    main.qrc
