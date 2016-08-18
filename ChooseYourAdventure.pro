#-------------------------------------------------
#
# Project created by QtCreator 2016-08-16T21:03:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ChooseYourAdventure
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    main.cpp \
    environment.cpp \
    area.cpp \
    event.cpp \
    item.cpp \
    npc.cpp \
    race.cpp

HEADERS  += mainwindow.h \
    content.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
