/********************************************************************************
** Form generated from reading UI file 'visusite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUSITE_H
#define UI_VISUSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VisuSite
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *nom;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_charges_2;
    QFrame *line_2;
    QGridLayout *gridLayout;
    QLabel *cp;
    QLabel *label_2;
    QLabel *siret;
    QLabel *labelnom;
    QLabel *ville;
    QLabel *sirenBic;
    QLabel *label_4;
    QLabel *adresse;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_charges_3;
    QFrame *line_4;
    QTableView *materielView;
    QFrame *line_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_charges_4;
    QFrame *line_6;
    QHBoxLayout *horizontalLayout_5;
    QTableView *ffView;
    QTableView *invView;

    void setupUi(QDialog *VisuSite)
    {
        if (VisuSite->objectName().isEmpty())
            VisuSite->setObjectName(QStringLiteral("VisuSite"));
        VisuSite->resize(662, 611);
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        VisuSite->setFont(font);
        verticalLayout = new QVBoxLayout(VisuSite);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        nom = new QLabel(VisuSite);
        nom->setObjectName(QStringLiteral("nom"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        nom->setFont(font1);
        nom->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(nom);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(VisuSite);
        line->setObjectName(QStringLiteral("line"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        line->setFont(font2);
        line->setFrameShadow(QFrame::Raised);
        line->setFrameShape(QFrame::HLine);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_charges_2 = new QLabel(VisuSite);
        label_charges_2->setObjectName(QStringLiteral("label_charges_2"));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        label_charges_2->setFont(font3);
        label_charges_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_charges_2);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(VisuSite);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(11);
        gridLayout->setVerticalSpacing(20);
        cp = new QLabel(VisuSite);
        cp->setObjectName(QStringLiteral("cp"));

        gridLayout->addWidget(cp, 0, 2, 1, 1);

        label_2 = new QLabel(VisuSite);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        siret = new QLabel(VisuSite);
        siret->setObjectName(QStringLiteral("siret"));

        gridLayout->addWidget(siret, 1, 3, 1, 1);

        labelnom = new QLabel(VisuSite);
        labelnom->setObjectName(QStringLiteral("labelnom"));
        labelnom->setFont(font2);

        gridLayout->addWidget(labelnom, 0, 0, 1, 1);

        ville = new QLabel(VisuSite);
        ville->setObjectName(QStringLiteral("ville"));

        gridLayout->addWidget(ville, 0, 3, 1, 1);

        sirenBic = new QLabel(VisuSite);
        sirenBic->setObjectName(QStringLiteral("sirenBic"));

        gridLayout->addWidget(sirenBic, 1, 1, 1, 1);

        label_4 = new QLabel(VisuSite);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        adresse = new QLabel(VisuSite);
        adresse->setObjectName(QStringLiteral("adresse"));

        gridLayout->addWidget(adresse, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line_3 = new QFrame(VisuSite);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_charges_3 = new QLabel(VisuSite);
        label_charges_3->setObjectName(QStringLiteral("label_charges_3"));
        label_charges_3->setFont(font3);
        label_charges_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_charges_3);


        verticalLayout->addLayout(horizontalLayout_3);

        line_4 = new QFrame(VisuSite);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        materielView = new QTableView(VisuSite);
        materielView->setObjectName(QStringLiteral("materielView"));

        verticalLayout->addWidget(materielView);

        line_5 = new QFrame(VisuSite);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_charges_4 = new QLabel(VisuSite);
        label_charges_4->setObjectName(QStringLiteral("label_charges_4"));
        label_charges_4->setFont(font3);
        label_charges_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_charges_4);


        verticalLayout->addLayout(horizontalLayout_4);

        line_6 = new QFrame(VisuSite);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        ffView = new QTableView(VisuSite);
        ffView->setObjectName(QStringLiteral("ffView"));

        horizontalLayout_5->addWidget(ffView);

        invView = new QTableView(VisuSite);
        invView->setObjectName(QStringLiteral("invView"));

        horizontalLayout_5->addWidget(invView);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(VisuSite);

        QMetaObject::connectSlotsByName(VisuSite);
    } // setupUi

    void retranslateUi(QDialog *VisuSite)
    {
        VisuSite->setWindowTitle(QApplication::translate("VisuSite", "DETAILS", nullptr));
        nom->setText(QApplication::translate("VisuSite", "DETAILS", nullptr));
        label_charges_2->setText(QApplication::translate("VisuSite", "Administratif", nullptr));
        cp->setText(QApplication::translate("VisuSite", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("VisuSite", "Siren (BIC) : ", nullptr));
        siret->setText(QApplication::translate("VisuSite", "TextLabel", nullptr));
        labelnom->setText(QString());
        ville->setText(QApplication::translate("VisuSite", "TextLabel", nullptr));
        sirenBic->setText(QApplication::translate("VisuSite", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("VisuSite", "SIRET : ", nullptr));
        adresse->setText(QApplication::translate("VisuSite", "TextLabel", nullptr));
        label_charges_3->setText(QApplication::translate("VisuSite", "Mat\303\251riel", nullptr));
        label_charges_4->setText(QApplication::translate("VisuSite", "Budget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisuSite: public Ui_VisuSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUSITE_H
