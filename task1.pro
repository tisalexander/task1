#-------------------------------------------------
#
# Project created by QtCreator 2015-10-30T18:00:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = task1
TEMPLATE = app

CONFIG -= debug release
CONFIG += debug


SOURCES += data.cpp \
           main.cpp \
           mainwindow.cpp \
           worker.cpp

HEADERS  += data.h \
            mainwindow.h \
            worker.h

FORMS    += mainwindow.ui
