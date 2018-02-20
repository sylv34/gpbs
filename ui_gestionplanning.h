/********************************************************************************
** Form generated from reading UI file 'gestionplanning.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONPLANNING_H
#define UI_GESTIONPLANNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_GestionPlanning
{
public:

    void setupUi(QDialog *GestionPlanning)
    {
        if (GestionPlanning->objectName().isEmpty())
            GestionPlanning->setObjectName(QStringLiteral("GestionPlanning"));
        GestionPlanning->resize(400, 300);

        retranslateUi(GestionPlanning);

        QMetaObject::connectSlotsByName(GestionPlanning);
    } // setupUi

    void retranslateUi(QDialog *GestionPlanning)
    {
        GestionPlanning->setWindowTitle(QApplication::translate("GestionPlanning", "Gestion de planning", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionPlanning: public Ui_GestionPlanning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONPLANNING_H
