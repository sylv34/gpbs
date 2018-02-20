/********************************************************************************
** Form generated from reading UI file 'gestionsite.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONSITE_H
#define UI_GESTIONSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_GestionSite
{
public:

    void setupUi(QDialog *GestionSite)
    {
        if (GestionSite->objectName().isEmpty())
            GestionSite->setObjectName(QStringLiteral("GestionSite"));
        GestionSite->resize(656, 609);

        retranslateUi(GestionSite);

        QMetaObject::connectSlotsByName(GestionSite);
    } // setupUi

    void retranslateUi(QDialog *GestionSite)
    {
        GestionSite->setWindowTitle(QApplication::translate("GestionSite", "Gestion de sites", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionSite: public Ui_GestionSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONSITE_H
