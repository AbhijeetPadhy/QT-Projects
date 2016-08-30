QT += core
QT -= gui

CONFIG += c++11

TARGET = 13-Resource_Files
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

RESOURCES += \
    myresources.qrc
