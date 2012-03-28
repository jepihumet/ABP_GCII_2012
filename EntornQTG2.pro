#-------------------------------------------------
#
# Project created by QtCreator 2012-02-23T15:45:12
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = EntornQTG2
TEMPLATE = app


SOURCES += main.cpp\
        uigc2.cpp \
    Model.cpp \
    GLWidget.cpp \
    Piece.cpp \
    Object3D.cpp \
    Cell.cpp \
    Board.cpp \
    Game.cpp \
    Movement.cpp

HEADERS  += uigc2.h \
    Util.h \
    ui_uigc2.h \
    Model.h \
    GLWidget.h \
    Piece.h \
    constants.h \
    Object3D.h \
    Cell.h \
    Board.h \
    Game.h \
    Movement.h

FORMS    += uigc2.ui

LIBS += "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\lib\glew32.lib" \
        -L"$$(GLC_LIB_DIR)/lib" -lGLC_lib2
INCLUDEPATH += "$$(GLC_LIB_DIR)/include"

OTHER_FILES += \
    simple.vert \
    simple.frag

