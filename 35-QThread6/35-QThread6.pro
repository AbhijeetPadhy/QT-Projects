QT += core
QT -= gui

CONFIG += c++11

TARGET = 35-QThread6
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myobject.cpp

HEADERS += \
    myobject.h
