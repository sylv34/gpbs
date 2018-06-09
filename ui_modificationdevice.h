/********************************************************************************
** Form generated from reading UI file 'modificationdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICATIONDEVICE_H
#define UI_MODIFICATIONDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModificationDevice
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelAjoutDevice;
    QHBoxLayout *horizontalLayout;
    QLabel *labelId;
    QLabel *idMod;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QTextEdit *precisionMod;
    QLabel *utilisatationlabel;
    QLineEdit *IPMod;
    QComboBox *typeMod;
    QLineEdit *fabriquantMod;
    QComboBox *siteMod;
    QLabel *labelsite;
    QLineEdit *nomMod;
    QLabel *labelSN;
    QLineEdit *SNMod;
    QLineEdit *modeleMod;
    QLabel *labelType;
    QComboBox *utilisationMod;
    QLabel *labelNom;
    QLabel *labelFabriquant;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelMarque_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelMarque;
    QLabel *precisionlabel;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *quitter;
    QPushButton *modifier;

    void setupUi(QDialog *ModificationDevice)
    {
        if (ModificationDevice->objectName().isEmpty())
            ModificationDevice->setObjectName(QStringLiteral("ModificationDevice"));
        ModificationDevice->resize(700, 600);
        ModificationDevice->setMinimumSize(QSize(700, 600));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        ModificationDevice->setFont(font);
        verticalLayout = new QVBoxLayout(ModificationDevice);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelAjoutDevice = new QLabel(ModificationDevice);
        labelAjoutDevice->setObjectName(QStringLiteral("labelAjoutDevice"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        labelAjoutDevice->setFont(font1);
        labelAjoutDevice->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelAjoutDevice);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelId = new QLabel(ModificationDevice);
        labelId->setObjectName(QStringLiteral("labelId"));
        labelId->setFont(font1);
        labelId->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelId);

        idMod = new QLabel(ModificationDevice);
        idMod->setObjectName(QStringLiteral("idMod"));
        idMod->setFont(font1);

        horizontalLayout->addWidget(idMod);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        precisionMod = new QTextEdit(ModificationDevice);
        precisionMod->setObjectName(QStringLiteral("precisionMod"));

        gridLayout->addWidget(precisionMod, 6, 3, 1, 1);

        utilisatationlabel = new QLabel(ModificationDevice);
        utilisatationlabel->setObjectName(QStringLiteral("utilisatationlabel"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        utilisatationlabel->setFont(font2);

        gridLayout->addWidget(utilisatationlabel, 6, 0, 1, 1);

        IPMod = new QLineEdit(ModificationDevice);
        IPMod->setObjectName(QStringLiteral("IPMod"));
        IPMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(IPMod, 4, 3, 1, 1);

        typeMod = new QComboBox(ModificationDevice);
        typeMod->setObjectName(QStringLiteral("typeMod"));
        typeMod->setMinimumSize(QSize(180, 0));
        typeMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(typeMod, 0, 1, 1, 1);

        fabriquantMod = new QLineEdit(ModificationDevice);
        fabriquantMod->setObjectName(QStringLiteral("fabriquantMod"));
        fabriquantMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(fabriquantMod, 2, 1, 1, 1);

        siteMod = new QComboBox(ModificationDevice);
        siteMod->setObjectName(QStringLiteral("siteMod"));
        siteMod->setMinimumSize(QSize(180, 0));
        siteMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(siteMod, 8, 2, 1, 2);

        labelsite = new QLabel(ModificationDevice);
        labelsite->setObjectName(QStringLiteral("labelsite"));
        labelsite->setFont(font2);
        labelsite->setLayoutDirection(Qt::LeftToRight);
        labelsite->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelsite, 8, 0, 1, 2);

        nomMod = new QLineEdit(ModificationDevice);
        nomMod->setObjectName(QStringLiteral("nomMod"));
        nomMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(nomMod, 0, 3, 1, 1);

        labelSN = new QLabel(ModificationDevice);
        labelSN->setObjectName(QStringLiteral("labelSN"));
        labelSN->setFont(font2);
        labelSN->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(labelSN, 4, 0, 1, 1);

        SNMod = new QLineEdit(ModificationDevice);
        SNMod->setObjectName(QStringLiteral("SNMod"));
        SNMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(SNMod, 4, 1, 1, 1);

        modeleMod = new QLineEdit(ModificationDevice);
        modeleMod->setObjectName(QStringLiteral("modeleMod"));
        modeleMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(modeleMod, 2, 3, 1, 1);

        labelType = new QLabel(ModificationDevice);
        labelType->setObjectName(QStringLiteral("labelType"));
        labelType->setFont(font2);

        gridLayout->addWidget(labelType, 0, 0, 1, 1);

        utilisationMod = new QComboBox(ModificationDevice);
        utilisationMod->setObjectName(QStringLiteral("utilisationMod"));
        utilisationMod->setMinimumSize(QSize(180, 0));
        utilisationMod->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(utilisationMod, 6, 1, 1, 1);

        labelNom = new QLabel(ModificationDevice);
        labelNom->setObjectName(QStringLiteral("labelNom"));
        labelNom->setMinimumSize(QSize(20, 0));
        labelNom->setFont(font2);

        gridLayout->addWidget(labelNom, 0, 2, 1, 1);

        labelFabriquant = new QLabel(ModificationDevice);
        labelFabriquant->setObjectName(QStringLiteral("labelFabriquant"));
        labelFabriquant->setFont(font2);

        gridLayout->addWidget(labelFabriquant, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        labelMarque_3 = new QLabel(ModificationDevice);
        labelMarque_3->setObjectName(QStringLiteral("labelMarque_3"));
        labelMarque_3->setFont(font2);

        gridLayout->addWidget(labelMarque_3, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        labelMarque = new QLabel(ModificationDevice);
        labelMarque->setObjectName(QStringLiteral("labelMarque"));
        labelMarque->setFont(font2);

        gridLayout->addWidget(labelMarque, 2, 2, 1, 1);

        precisionlabel = new QLabel(ModificationDevice);
        precisionlabel->setObjectName(QStringLiteral("precisionlabel"));
        precisionlabel->setFont(font2);

        gridLayout->addWidget(precisionlabel, 6, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 7, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        quitter = new QPushButton(ModificationDevice);
        quitter->setObjectName(QStringLiteral("quitter"));

        horizontalLayout_5->addWidget(quitter);

        modifier = new QPushButton(ModificationDevice);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(modifier);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(ModificationDevice);

        QMetaObject::connectSlotsByName(ModificationDevice);
    } // setupUi

    void retranslateUi(QDialog *ModificationDevice)
    {
        ModificationDevice->setWindowTitle(QApplication::translate("ModificationDevice", "Modifier un materiel", nullptr));
        labelAjoutDevice->setText(QApplication::translate("ModificationDevice", "MODIFIER UN MATERIEL", nullptr));
        labelId->setText(QApplication::translate("ModificationDevice", "Identifiant :", nullptr));
        idMod->setText(QApplication::translate("ModificationDevice", "TextLabel", nullptr));
        utilisatationlabel->setText(QApplication::translate("ModificationDevice", "UTILISATION :", nullptr));
        labelsite->setText(QApplication::translate("ModificationDevice", "SITE :", nullptr));
        labelSN->setText(QApplication::translate("ModificationDevice", "NUMERO DE SERIE : ", nullptr));
        labelType->setText(QApplication::translate("ModificationDevice", "TYPE : ", nullptr));
        labelNom->setText(QApplication::translate("ModificationDevice", "NOM :", nullptr));
        labelFabriquant->setText(QApplication::translate("ModificationDevice", "FABRIQUANT : ", nullptr));
        labelMarque_3->setText(QApplication::translate("ModificationDevice", "IP :", nullptr));
        labelMarque->setText(QApplication::translate("ModificationDevice", "MODELE :", nullptr));
        precisionlabel->setText(QApplication::translate("ModificationDevice", "PRECISION : ", nullptr));
        quitter->setText(QApplication::translate("ModificationDevice", "Quitter", nullptr));
        modifier->setText(QApplication::translate("ModificationDevice", "Modifier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificationDevice: public Ui_ModificationDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICATIONDEVICE_H
