/********************************************************************************
** Form generated from reading UI file 'gestionbudget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONBUDGET_H
#define UI_GESTIONBUDGET_H

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

class Ui_GestionBudget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBudget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *detail;
    QSpacerItem *verticalSpacer;
    QPushButton *retour;
    QSpacerItem *verticalSpacer_2;
    QTableView *viewBudget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelTotalCharge;
    QLabel *totalCharge;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *totalInv;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labelTotal;
    QLabel *total;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QDialog *GestionBudget)
    {
        if (GestionBudget->objectName().isEmpty())
            GestionBudget->setObjectName(QStringLiteral("GestionBudget"));
        GestionBudget->resize(662, 611);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        GestionBudget->setFont(font);
        verticalLayout = new QVBoxLayout(GestionBudget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelBudget = new QLabel(GestionBudget);
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

        detail = new QPushButton(GestionBudget);
        detail->setObjectName(QStringLiteral("detail"));
        detail->setMinimumSize(QSize(0, 50));

        verticalLayout_2->addWidget(detail);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        retour = new QPushButton(GestionBudget);
        retour->setObjectName(QStringLiteral("retour"));

        verticalLayout_2->addWidget(retour);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        viewBudget = new QTableView(GestionBudget);
        viewBudget->setObjectName(QStringLiteral("viewBudget"));
        viewBudget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        viewBudget->setAlternatingRowColors(true);
        viewBudget->setSelectionBehavior(QAbstractItemView::SelectRows);
        viewBudget->verticalHeader()->setVisible(false);

        horizontalLayout_3->addWidget(viewBudget);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        labelTotalCharge = new QLabel(GestionBudget);
        labelTotalCharge->setObjectName(QStringLiteral("labelTotalCharge"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        labelTotalCharge->setFont(font2);
        labelTotalCharge->setMargin(20);

        horizontalLayout_2->addWidget(labelTotalCharge);

        totalCharge = new QLabel(GestionBudget);
        totalCharge->setObjectName(QStringLiteral("totalCharge"));
        totalCharge->setFont(font2);

        horizontalLayout_2->addWidget(totalCharge);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        line_2 = new QFrame(GestionBudget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_3 = new QLabel(GestionBudget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font2);
        label_3->setMargin(20);

        horizontalLayout_2->addWidget(label_3);

        totalInv = new QLabel(GestionBudget);
        totalInv->setObjectName(QStringLiteral("totalInv"));
        totalInv->setFont(font2);

        horizontalLayout_2->addWidget(totalInv);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(GestionBudget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        labelTotal = new QLabel(GestionBudget);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        labelTotal->setFont(font3);

        horizontalLayout_4->addWidget(labelTotal);

        total = new QLabel(GestionBudget);
        total->setObjectName(QStringLiteral("total"));
        total->setFont(font3);

        horizontalLayout_4->addWidget(total);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(GestionBudget);

        QMetaObject::connectSlotsByName(GestionBudget);
    } // setupUi

    void retranslateUi(QDialog *GestionBudget)
    {
        GestionBudget->setWindowTitle(QApplication::translate("GestionBudget", "Recapitulatif budg\303\251taire", nullptr));
        labelBudget->setText(QApplication::translate("GestionBudget", "GESTION DE BUDGET", nullptr));
        detail->setText(QApplication::translate("GestionBudget", "D\303\251tails", nullptr));
        retour->setText(QApplication::translate("GestionBudget", "Retour", nullptr));
        labelTotalCharge->setText(QApplication::translate("GestionBudget", "Total FF :  ", nullptr));
        totalCharge->setText(QApplication::translate("GestionBudget", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("GestionBudget", "Total Inv : ", nullptr));
        totalInv->setText(QApplication::translate("GestionBudget", "TextLabel", nullptr));
        labelTotal->setText(QApplication::translate("GestionBudget", "TOTAL : ", nullptr));
        total->setText(QApplication::translate("GestionBudget", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestionBudget: public Ui_GestionBudget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONBUDGET_H
