#-------------------------------------------------
#
# Project created by QtCreator 2019-01-22T01:40:51
#
#-------------------------------------------------

QT += core gui
QT += sql
#LIBS += -L"/usr/lib" -lwiringPi -lopenalpr -lraspicam
#INCLUDEPATH += /usr/local/include

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Scanparking
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    bdd.cpp \
    gachette.cpp \
    reconnaissanceplaque.cpp \
    camera.cpp \
    cmainscanparking.cpp \
    mainwindowthread.cpp

HEADERS += mainwindow.h \
    bdd.h \
    gachette.h \
    reconnaissanceplaque.h \
    camera.h \
    cmainscanparking.h \
    mainwindowthread.h

FORMS += mainwindow.ui


unix:!macx: LIBS += -L$$PWD/../../../usr/lib/ -lwiringPi

#INCLUDEPATH += $$PWD/../../../usr/include
DEPENDPATH += $$PWD/../../../usr/include


unix:!macx: LIBS += -L$$PWD/../../../usr/lib/ -lopenalpr

#INCLUDEPATH += $$PWD/../../../usr/include
DEPENDPATH += $$PWD/../../../usr/include


unix:!macx: LIBS += -L$$PWD/../../../usr/local/lib/ -lraspicam

INCLUDEPATH += $$PWD/../../../usr/local/include
DEPENDPATH += $$PWD/../../../usr/local/include

unix:!macx: LIBS += -L$$PWD/../../../usr/local/lib/ -lraspicam_cv

INCLUDEPATH += $$PWD/../../../usr/local/include
DEPENDPATH += $$PWD/../../../usr/local/include

unix:!macx: LIBS += -L$$PWD/../../../usr/lib/arm-linux-gnueabihf/ -lopencv_core

INCLUDEPATH += $$PWD/../../../usr/lib/arm-linux-gnueabihf
DEPENDPATH += $$PWD/../../../usr/lib/arm-linux-gnueabihf

unix:!macx: LIBS += -L$$PWD/../../../usr/lib/arm-linux-gnueabihf/ -lopencv_highgui

INCLUDEPATH += $$PWD/../../../usr/lib/arm-linux-gnueabihf
DEPENDPATH += $$PWD/../../../usr/lib/arm-linux-gnueabihf


unix:!macx: LIBS += -L$$PWD/./ -lmmal_core

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

unix:!macx: LIBS += -L$$PWD/./ -lmmal_util

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

unix:!macx: LIBS += -L$$PWD/./ -lmmal

INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.
