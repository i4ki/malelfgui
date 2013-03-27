#-------------------------------------------------
#
# Project created by QtCreator 2013-03-25T10:59:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MalelfGUI
TEMPLATE = app


SOURCES += src/main.cpp\
    src/gui/MainWindow.cpp \
    src/qhexedit/commands.cpp \
    src/qhexedit/qhexedit.cpp \
    src/qhexedit/qhexedit_p.cpp \
    src/qhexedit/xbytearray.cpp \
    src/controller/MainWindowController.cpp \
    src/util/Util.cpp

HEADERS  += src/gui/MainWindow.h \
    src/qhexedit/commands.h \
    src/qhexedit/qhexedit.h \
    src/qhexedit/qhexedit_p.h \
    src/qhexedit/xbytearray.h \
    src/gui/ui_MainWindow.h \
    src/controller/MainWindowController.h \
    src/util/Util.h

FORMS    += src/gui/MainWindow.ui

OTHER_FILES += \
    src/qhexedit/license.txt
