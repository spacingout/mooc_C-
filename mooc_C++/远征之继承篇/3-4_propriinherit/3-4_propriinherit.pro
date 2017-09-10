TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Person.cpp \
    Soldier.cpp \
    Infantry.cpp

HEADERS += \
    Infantry.h \
    Soldier.h \
    Person.h
