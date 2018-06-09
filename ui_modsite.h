/********************************************************************************
** Form generated from reading UI file 'modsite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODSITE_H
#define UI_MODSITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AjoutSite
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_titre;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_nom;
    QLineEdit *nom;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_nature;
    QLineEdit *siren;
    QLabel *label_frequence_3;
    QLineEdit *nic;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_cout;
    QLineEdit *adresse;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_frequence;
    QLineEdit *ville;
    QLabel *label_frequence_2;
    QLineEdit *cp;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *retour;
    QPushButton *pushButton;

    void setupUi(QDialog *ModSite)
    {
        if (ModSite->objectName().isEmpty())
            ModSite->setObjectName(QStringLiteral("ModSite"));
        ModSite->resize(400, 500);
        ModSite->setMinimumSize(QSize(400, 500));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        ModSite->setFont(font);
        verticalLayout = new QVBoxLayout(ModSite);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_titre = new QLabel(ModSite);
        label_titre->setObjectName(QStringLiteral("label_titre"));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_titre->setFont(font1);
        label_titre->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_titre);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_nom = new QLabel(ModSite);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_nom->setFont(font2);

        horizontalLayout_7->addWidget(label_nom);

        nom = new QLineEdit(ModSite);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setMinimumSize(QSize(185, 0));
        nom->setBaseSize(QSize(300, 0));

        horizontalLayout_7->addWidget(nom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_nature = new QLabel(ModSite);
        label_nature->setObjectName(QStringLiteral("label_nature"));
        label_nature->setFont(font2);

        horizontalLayout_4->addWidget(label_nature);

        siren = new QLineEdit(ModSite);
        siren->setObjectName(QStringLiteral("siren"));
        siren->setMinimumSize(QSize(185, 0));
        siren->setBaseSize(QSize(300, 0));

        horizontalLayout_4->addWidget(siren);

        label_frequence_3 = new QLabel(ModSite);
        label_frequence_3->setObjectName(QStringLiteral("label_frequence_3"));
        label_frequence_3->setFont(font2);

        horizontalLayout_4->addWidget(label_frequence_3);

        nic = new QLineEdit(ModSite);
        nic->setObjectName(QStringLiteral("nic"));
        nic->setMinimumSize(QSize(100, 0));
        nic->setBaseSize(QSize(30, 0));

        horizontalLayout_4->addWidget(nic);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_cout = new QLabel(ModSite);
        label_cout->setObjectName(QStringLiteral("label_cout"));
        label_cout->setFont(font2);

        horizontalLayout_2->addWidget(label_cout);

        adresse = new QLineEdit(ModSite);
        adresse->setObjectName(QStringLiteral("adresse"));

        horizontalLayout_2->addWidget(adresse);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_frequence = new QLabel(ModSite);
        label_frequence->setObjectName(QStringLiteral("label_frequence"));
        label_frequence->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence);

        ville = new QLineEdit(ModSite);
        ville->setObjectName(QStringLiteral("ville"));
        ville->setMinimumSize(QSize(185, 0));
        ville->setBaseSize(QSize(300, 0));

        horizontalLayout_3->addWidget(ville);

        label_frequence_2 = new QLabel(ModSite);
        label_frequence_2->setObjectName(QStringLiteral("label_frequence_2"));
        label_frequence_2->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence_2);

        cp = new QLineEdit(ModSite);
        cp->setObjectName(QStringLiteral("cp"));
        cp->setMinimumSize(QSize(100, 0));
        cp->setBaseSize(QSize(30, 0));

        horizontalLayout_3->addWidget(cp);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        retour = new QPushButton(ModSite);
        retour->setObjectName(QStringLiteral("retour"));
        retour->setFont(font2);

        horizontalLayout_6->addWidget(retour);

        pushButton = new QPushButton(ModSite);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ModSite);

        QMetaObject::connectSlotsByName(ModSite);
    } // setupUi

    void retranslateUi(QDialog *ModSite)
    {
        ModSite->setWindowTitle(QApplication::translate("AjoutSite", "Dialog", nullptr));
        label_titre->setText(QApplication::translate("AjoutSite", "MODIFIER UN SITE", nullptr));
        label_nom->setText(QApplication::translate("AjoutSite", "NOM : ", nullptr));
        label_nature->setText(QApplication::translate("AjoutSite", "SIREN : ", nullptr));
        label_frequence_3->setText(QApplication::translate("AjoutSite", "NIC : ", nullptr));
        label_cout->setText(QApplication::translate("AjoutSite", "ADRESSE : ", nullptr));
        label_frequence->setText(QApplication::translate("AjoutSite", "VILLE : ", nullptr));
        label_frequence_2->setText(QApplication::translate("AjoutSite", "CP : ", nullptr));
        retour->setText(QApplication::translate("AjoutSite", "RETOUR", nullptr));
        pushButton->setText(QApplication::translate("AjoutSite", "MODIFIER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutSite: public Ui_AjoutSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODSITE_H
