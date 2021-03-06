#-------------------------------------------------
#
# Project created by QtCreator 2017-10-23T08:44:34
#
#-------------------------------------------------

QT       += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GPPBS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        gppbs.cpp \
    connexion.cpp \
    gestionparc.cpp \
    ajoutdevice.cpp \
    modificationdevice.cpp \
    gestionsite.cpp \
    manager.cpp \
    gestionbudget.cpp \
    visubudget.cpp \
    ajoutff.cpp \
    modff.cpp \
    ajoutinv.cpp \
    modinv.cpp \
    materielmanager.cpp \
    budgetmanager.cpp \
    invbudgetmanager.cpp \
    ffbudgetmanager.cpp \
    sitemanager.cpp \
    visusite.cpp \
    ajoutsite.cpp \
    modifsite.cpp

HEADERS += \
        gppbs.h \
    connexion.h \
    gestionparc.h \
    ajoutdevice.h \
    modificationdevice.h \
    gestionsite.h \
    manager.h \
    gestionbudget.h \
    visubudget.h \
    ajoutff.h \
    modff.h \
    ajoutinv.h \
    modinv.h \
    materielmanager.h \
    budgetmanager.h \
    invbudgetmanager.h \
    ffbudgetmanager.h \
    sitemanager.h \
    visusite.h \
    ajoutsite.h \
    modifsite.h

FORMS += \
        gppbs.ui \
    connexion.ui \
    gestionparc.ui \
    ajoutdevice.ui \
    modificationdevice.ui \
    gestionsite.ui \
    gestionbudget.ui \
    visubudget.ui \
    ajoutff.ui \
    modff.ui \
    ajoutinv.ui \
    modinv.ui \
    visusite.ui \
    ajoutsite.ui \
    modifsite.ui
