/********************************************************************************
** Form generated from reading UI file 'gestionparc.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONPARC_H
#define UI_GESTIONPARC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GestionParc
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelParc;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ajouter;
    QPushButton *modifier;
    QPushButton *supprimer;
    QSpacerItem *verticalSpacer;
    QPushButton *retour;
    QSpacerItem *verticalSpacer_2;
    QTableView *viewParc;

    void setupUi(QDialog *GestionParc)
    {
        if (GestionParc->objectName().isEmpty())
            GestionParc->setObjectName(QStringLiteral("GestionParc"));
        GestionParc->resize(662, 611);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        GestionParc->setFont(font);
        verticalLayout = new QVBoxLayout(GestionParc);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelParc = new QLabel(GestionParc);
        labelParc->setObjectName(QStringLiteral("labelParc"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        labelParc->setFont(font1);
        labelParc->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelParc);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        ajouter = new QPushButton(GestionParc);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(ajouter);

        modifier = new QPushButton(GestionParc);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(modifier);

        supprimer = new QPushButton(GestionParc);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(supprimer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        retour = new QPushButton(GestionParc);
        retour->setObjectName(QStringLiteral("retour"));

        verticalLayout_2->addWidget(retour);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        viewParc = new QTableView(GestionParc);
        viewParc->setObjectName(QStringLiteral("viewParc"));
        viewParc->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        viewParc->setAlternatingRowColors(true);
        viewParc->setSelectionBehavior(QAbstractItemView::SelectRows);
        viewParc->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(viewParc);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(GestionParc);

        QMetaObject::connectSlotsByName(GestionParc);
    } // setupUi

    void retranslateUi(QDialog *GestionParc)
    {
        GestionParc->setWindowTitle(QApplication::translate("GestionParc", "Gestion de Parc Informatique", nullptr));
        labelParc->setText(QApplication::translate("GestionParc", "GESTION PARC INFORMATIQUE", nullptr));
        ajouter->setText(QApplication::translate("GestionParc", "Ajouter", nullptr));
        modifier->setText(QApplication::translate("GestionParc", "Modifier", nullptr));
        supprimer->setText(QApplication::translate("GestionParc", "Supprimer", nullptr));
        retour->setText(QApplication::translate("GestionParc", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionParc: public Ui_GestionParc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONPARC_H
