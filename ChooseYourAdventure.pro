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
    result.cpp \
    inventory.cpp \
    map.cpp \
    status.cpp \
    race.cpp

HEADERS  += mainwindow.h \
    content.h \
    content.h \
    inventory.h \
    map.h \
    status.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc
