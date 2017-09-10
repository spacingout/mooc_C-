TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    MigrantWorker.cpp \
    Farmer.cpp \
    Worker.cpp

HEADERS += \
    Farmer.h \
    Worker.h \
    MigrantWorker.h
