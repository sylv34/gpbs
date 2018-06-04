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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GestionSite
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBudget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *detail;
    QSpacerItem *verticalSpacer_4;
    QPushButton *ajouter;
    QSpacerItem *verticalSpacer;
    QPushButton *retour;
    QTableView *viewSite;

    void setupUi(QDialog *GestionSite)
    {
        if (GestionSite->objectName().isEmpty())
            GestionSite->setObjectName(QStringLiteral("GestionSite"));
        GestionSite->resize(662, 611);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        GestionSite->setFont(font);
        verticalLayout = new QVBoxLayout(GestionSite);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelBudget = new QLabel(GestionSite);
        labelBudget->setObjectName(QStringLiteral("labelBudget"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        labelBudget->setFont(font1);
        labelBudget->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelBudget);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        detail = new QPushButton(GestionSite);
        detail->setObjectName(QStringLiteral("detail"));
        detail->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(detail);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        ajouter = new QPushButton(GestionSite);
        ajouter->setObjectName(QStringLiteral("ajouter"));

        verticalLayout_2->addWidget(ajouter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        retour = new QPushButton(GestionSite);
        retour->setObjectName(QStringLiteral("retour"));

        verticalLayout_2->addWidget(retour);


        horizontalLayout_3->addLayout(verticalLayout_2);

        viewSite = new QTableView(GestionSite);
        viewSite->setObjectName(QStringLiteral("viewSite"));
        viewSite->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        viewSite->setAlternatingRowColors(true);
        viewSite->setSelectionBehavior(QAbstractItemView::SelectRows);
        viewSite->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(viewSite);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(GestionSite);

        QMetaObject::connectSlotsByName(GestionSite);
    } // setupUi

    void retranslateUi(QDialog *GestionSite)
    {
        GestionSite->setWindowTitle(QApplication::translate("GestionSite", "Recapitulatif budg\303\251taire", nullptr));
        labelBudget->setText(QApplication::translate("GestionSite", "GESTION DE SITE", nullptr));
        detail->setText(QApplication::translate("GestionSite", "D\303\251tails", nullptr));
        ajouter->setText(QApplication::translate("GestionSite", "Ajouter", nullptr));
        retour->setText(QApplication::translate("GestionSite", "Retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionSite: public Ui_GestionSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONSITE_H
