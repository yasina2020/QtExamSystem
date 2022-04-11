QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    confirmhisdeletedialog.cpp \
    deletesuccessdialog.cpp \
    eachrow.cpp \
    historyshow.cpp \
    labelplus.cpp \
    main.cpp \
    mainwindow.cpp \
    pickresultdiagram.cpp \
    randomaccess.cpp \
    singlerow.cpp \
    sqlitedatabase.cpp

HEADERS += \
    confirmhisdeletedialog.h \
    defs.h \
    deletesuccessdialog.h \
    eachrow.h \
    historyshow.h \
    labelplus.h \
    mainwindow.h \
    pickresultdiagram.h \
    randomaccess.h \
    singlerow.h \
    sqlitedatabase.h

FORMS += \
    confirmhisdeletedialog.ui \
    deletesuccessdialog.ui \
    historyshow.ui \
    labelplus.ui \
    mainwindow.ui \
    pickresultdiagram.ui \
    singlerow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource/qss.qrc
