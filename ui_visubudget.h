/********************************************************************************
** Form generated from reading UI file 'visubudget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUBUDGET_H
#define UI_VISUBUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VisuBudget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelParc;
    QFrame *line;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_charges_2;
    QTableView *viewFFDetails;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ajouterFF;
    QPushButton *modifierFF;
    QPushButton *supprimerFF;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_invest_2;
    QTableView *viewInvDetails;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ajouterInv;
    QPushButton *modifierInv;
    QPushButton *supprimerInv;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *VisuBudget)
    {
        if (VisuBudget->objectName().isEmpty())
            VisuBudget->setObjectName(QStringLiteral("VisuBudget"));
        VisuBudget->resize(662, 611);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        VisuBudget->setFont(font);
        verticalLayout = new QVBoxLayout(VisuBudget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelParc = new QLabel(VisuBudget);
        labelParc->setObjectName(QStringLiteral("labelParc"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        labelParc->setFont(font1);
        labelParc->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelParc);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(VisuBudget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_charges_2 = new QLabel(VisuBudget);
        label_charges_2->setObjectName(QStringLiteral("label_charges_2"));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        label_charges_2->setFont(font2);
        label_charges_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_charges_2);

        viewFFDetails = new QTableView(VisuBudget);
        viewFFDetails->setObjectName(QStringLiteral("viewFFDetails"));
        viewFFDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewFFDetails->setAlternatingRowColors(true);
        viewFFDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
        viewFFDetails->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(viewFFDetails);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ajouterFF = new QPushButton(VisuBudget);
        ajouterFF->setObjectName(QStringLiteral("ajouterFF"));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        ajouterFF->setFont(font3);

        horizontalLayout_2->addWidget(ajouterFF);

        modifierFF = new QPushButton(VisuBudget);
        modifierFF->setObjectName(QStringLiteral("modifierFF"));
        modifierFF->setFont(font3);

        horizontalLayout_2->addWidget(modifierFF);

        supprimerFF = new QPushButton(VisuBudget);
        supprimerFF->setObjectName(QStringLiteral("supprimerFF"));
        supprimerFF->setFont(font3);

        horizontalLayout_2->addWidget(supprimerFF);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        line_2 = new QFrame(VisuBudget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_invest_2 = new QLabel(VisuBudget);
        label_invest_2->setObjectName(QStringLiteral("label_invest_2"));
        label_invest_2->setFont(font2);
        label_invest_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_invest_2);

        viewInvDetails = new QTableView(VisuBudget);
        viewInvDetails->setObjectName(QStringLiteral("viewInvDetails"));
        viewInvDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewInvDetails->setSelectionBehavior(QAbstractItemView::SelectRows);
        viewInvDetails->verticalHeader()->setVisible(false);

        verticalLayout_4->addWidget(viewInvDetails);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ajouterInv = new QPushButton(VisuBudget);
        ajouterInv->setObjectName(QStringLiteral("ajouterInv"));
        ajouterInv->setFont(font3);

        horizontalLayout_3->addWidget(ajouterInv);

        modifierInv = new QPushButton(VisuBudget);
        modifierInv->setObjectName(QStringLiteral("modifierInv"));
        modifierInv->setFont(font3);

        horizontalLayout_3->addWidget(modifierInv);

        supprimerInv = new QPushButton(VisuBudget);
        supprimerInv->setObjectName(QStringLiteral("supprimerInv"));
        supprimerInv->setFont(font3);

        horizontalLayout_3->addWidget(supprimerInv);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(VisuBudget);

        QMetaObject::connectSlotsByName(VisuBudget);
    } // setupUi

    void retranslateUi(QDialog *VisuBudget)
    {
        VisuBudget->setWindowTitle(QApplication::translate("VisuBudget", "DETAILS", nullptr));
        labelParc->setText(QApplication::translate("VisuBudget", "DETAILS", nullptr));
        label_charges_2->setText(QApplication::translate("VisuBudget", "FRAIS DE FONCTIONNEMENT", nullptr));
        ajouterFF->setText(QApplication::translate("VisuBudget", "AJOUTER", nullptr));
        modifierFF->setText(QApplication::translate("VisuBudget", "MODIFIER", nullptr));
        supprimerFF->setText(QApplication::translate("VisuBudget", "SUPPRIMER", nullptr));
        label_invest_2->setText(QApplication::translate("VisuBudget", "INVESTISSEMENT", nullptr));
        ajouterInv->setText(QApplication::translate("VisuBudget", "AJOUTER", nullptr));
        modifierInv->setText(QApplication::translate("VisuBudget", "MODIFIER", nullptr));
        supprimerInv->setText(QApplication::translate("VisuBudget", "SUPPRIMER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisuBudget: public Ui_VisuBudget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUBUDGET_H
