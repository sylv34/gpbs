/********************************************************************************
** Form generated from reading UI file 'modifsite.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFSITE_H
#define UI_MODIFSITE_H

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

class Ui_ModifSite
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_titre;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_nom_3;
    QLabel *ID;
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

    void setupUi(QDialog *ModifSite)
    {
        if (ModifSite->objectName().isEmpty())
            ModifSite->setObjectName(QStringLiteral("ModifSite"));
        ModifSite->resize(400, 500);
        ModifSite->setMinimumSize(QSize(400, 500));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        ModifSite->setFont(font);
        verticalLayout = new QVBoxLayout(ModifSite);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_titre = new QLabel(ModifSite);
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

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_nom_3 = new QLabel(ModifSite);
        label_nom_3->setObjectName(QStringLiteral("label_nom_3"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_nom_3->setFont(font2);

        horizontalLayout_5->addWidget(label_nom_3);

        ID = new QLabel(ModifSite);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setFont(font2);

        horizontalLayout_5->addWidget(ID);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_nom = new QLabel(ModifSite);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setFont(font2);

        horizontalLayout_7->addWidget(label_nom);

        nom = new QLineEdit(ModifSite);
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
        label_nature = new QLabel(ModifSite);
        label_nature->setObjectName(QStringLiteral("label_nature"));
        label_nature->setFont(font2);

        horizontalLayout_4->addWidget(label_nature);

        siren = new QLineEdit(ModifSite);
        siren->setObjectName(QStringLiteral("siren"));
        siren->setMinimumSize(QSize(185, 0));
        siren->setBaseSize(QSize(300, 0));

        horizontalLayout_4->addWidget(siren);

        label_frequence_3 = new QLabel(ModifSite);
        label_frequence_3->setObjectName(QStringLiteral("label_frequence_3"));
        label_frequence_3->setFont(font2);

        horizontalLayout_4->addWidget(label_frequence_3);

        nic = new QLineEdit(ModifSite);
        nic->setObjectName(QStringLiteral("nic"));
        nic->setMinimumSize(QSize(100, 0));
        nic->setBaseSize(QSize(30, 0));

        horizontalLayout_4->addWidget(nic);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_cout = new QLabel(ModifSite);
        label_cout->setObjectName(QStringLiteral("label_cout"));
        label_cout->setFont(font2);

        horizontalLayout_2->addWidget(label_cout);

        adresse = new QLineEdit(ModifSite);
        adresse->setObjectName(QStringLiteral("adresse"));

        horizontalLayout_2->addWidget(adresse);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_frequence = new QLabel(ModifSite);
        label_frequence->setObjectName(QStringLiteral("label_frequence"));
        label_frequence->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence);

        ville = new QLineEdit(ModifSite);
        ville->setObjectName(QStringLiteral("ville"));
        ville->setMinimumSize(QSize(185, 0));
        ville->setBaseSize(QSize(300, 0));

        horizontalLayout_3->addWidget(ville);

        label_frequence_2 = new QLabel(ModifSite);
        label_frequence_2->setObjectName(QStringLiteral("label_frequence_2"));
        label_frequence_2->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence_2);

        cp = new QLineEdit(ModifSite);
        cp->setObjectName(QStringLiteral("cp"));
        cp->setMinimumSize(QSize(100, 0));
        cp->setBaseSize(QSize(30, 0));

        horizontalLayout_3->addWidget(cp);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        retour = new QPushButton(ModifSite);
        retour->setObjectName(QStringLiteral("retour"));
        retour->setFont(font2);

        horizontalLayout_6->addWidget(retour);

        pushButton = new QPushButton(ModifSite);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ModifSite);

        QMetaObject::connectSlotsByName(ModifSite);
    } // setupUi

    void retranslateUi(QDialog *ModifSite)
    {
        ModifSite->setWindowTitle(QApplication::translate("ModifSite", "Dialog", nullptr));
        label_titre->setText(QApplication::translate("ModifSite", "MODIFIER UN SITE", nullptr));
        label_nom_3->setText(QApplication::translate("ModifSite", "ID", nullptr));
        ID->setText(QApplication::translate("ModifSite", "ID", nullptr));
        label_nom->setText(QApplication::translate("ModifSite", "NOM : ", nullptr));
        label_nature->setText(QApplication::translate("ModifSite", "SIREN : ", nullptr));
        label_frequence_3->setText(QApplication::translate("ModifSite", "NIC : ", nullptr));
        label_cout->setText(QApplication::translate("ModifSite", "ADRESSE : ", nullptr));
        label_frequence->setText(QApplication::translate("ModifSite", "VILLE : ", nullptr));
        label_frequence_2->setText(QApplication::translate("ModifSite", "CP : ", nullptr));
        retour->setText(QApplication::translate("ModifSite", "RETOUR", nullptr));
        pushButton->setText(QApplication::translate("ModifSite", "MODIFIER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifSite: public Ui_ModifSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFSITE_H
