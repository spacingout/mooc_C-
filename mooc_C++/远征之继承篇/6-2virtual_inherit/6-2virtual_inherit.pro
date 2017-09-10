TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Person.cpp \
    Worker.cpp \
    MigrantWorker.cpp \
    Farmer.cpp

HEADERS += \
    Person.h \
    Worker.h \
    MigrantWorker.h \
    Farmer.h
