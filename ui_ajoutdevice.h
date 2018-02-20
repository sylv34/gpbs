/********************************************************************************
** Form generated from reading UI file 'ajoutdevice.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTDEVICE_H
#define UI_AJOUTDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AjoutDevice
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelAjoutDevice;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QTextEdit *precisionAjout;
    QLabel *utilisatationlabel;
    QLineEdit *IPAjout;
    QComboBox *typeAjout;
    QLineEdit *fabriquantAjout;
    QComboBox *siteAjout;
    QLabel *labelsite;
    QLineEdit *nomAjout;
    QLabel *labelSN;
    QLineEdit *SNAjout;
    QLineEdit *modeleAjout;
    QLabel *labelType;
    QComboBox *utilisationAjout;
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
    QPushButton *ajouter;

    void setupUi(QDialog *AjoutDevice)
    {
        if (AjoutDevice->objectName().isEmpty())
            AjoutDevice->setObjectName(QStringLiteral("AjoutDevice"));
        AjoutDevice->resize(700, 600);
        AjoutDevice->setMinimumSize(QSize(700, 600));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        AjoutDevice->setFont(font);
        verticalLayout = new QVBoxLayout(AjoutDevice);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelAjoutDevice = new QLabel(AjoutDevice);
        labelAjoutDevice->setObjectName(QStringLiteral("labelAjoutDevice"));
        QFont font1;
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        labelAjoutDevice->setFont(font1);
        labelAjoutDevice->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelAjoutDevice);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        precisionAjout = new QTextEdit(AjoutDevice);
        precisionAjout->setObjectName(QStringLiteral("precisionAjout"));

        gridLayout->addWidget(precisionAjout, 6, 3, 1, 1);

        utilisatationlabel = new QLabel(AjoutDevice);
        utilisatationlabel->setObjectName(QStringLiteral("utilisatationlabel"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        utilisatationlabel->setFont(font2);

        gridLayout->addWidget(utilisatationlabel, 6, 0, 1, 1);

        IPAjout = new QLineEdit(AjoutDevice);
        IPAjout->setObjectName(QStringLiteral("IPAjout"));
        IPAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(IPAjout, 4, 3, 1, 1);

        typeAjout = new QComboBox(AjoutDevice);
        typeAjout->setObjectName(QStringLiteral("typeAjout"));
        typeAjout->setMinimumSize(QSize(180, 0));
        typeAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(typeAjout, 0, 1, 1, 1);

        fabriquantAjout = new QLineEdit(AjoutDevice);
        fabriquantAjout->setObjectName(QStringLiteral("fabriquantAjout"));
        fabriquantAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(fabriquantAjout, 2, 1, 1, 1);

        siteAjout = new QComboBox(AjoutDevice);
        siteAjout->setObjectName(QStringLiteral("siteAjout"));
        siteAjout->setMinimumSize(QSize(180, 0));
        siteAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(siteAjout, 8, 2, 1, 2);

        labelsite = new QLabel(AjoutDevice);
        labelsite->setObjectName(QStringLiteral("labelsite"));
        labelsite->setFont(font2);
        labelsite->setLayoutDirection(Qt::LeftToRight);
        labelsite->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelsite, 8, 0, 1, 2);

        nomAjout = new QLineEdit(AjoutDevice);
        nomAjout->setObjectName(QStringLiteral("nomAjout"));
        nomAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(nomAjout, 0, 3, 1, 1);

        labelSN = new QLabel(AjoutDevice);
        labelSN->setObjectName(QStringLiteral("labelSN"));
        labelSN->setFont(font2);
        labelSN->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(labelSN, 4, 0, 1, 1);

        SNAjout = new QLineEdit(AjoutDevice);
        SNAjout->setObjectName(QStringLiteral("SNAjout"));
        SNAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(SNAjout, 4, 1, 1, 1);

        modeleAjout = new QLineEdit(AjoutDevice);
        modeleAjout->setObjectName(QStringLiteral("modeleAjout"));
        modeleAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(modeleAjout, 2, 3, 1, 1);

        labelType = new QLabel(AjoutDevice);
        labelType->setObjectName(QStringLiteral("labelType"));
        labelType->setFont(font2);

        gridLayout->addWidget(labelType, 0, 0, 1, 1);

        utilisationAjout = new QComboBox(AjoutDevice);
        utilisationAjout->setObjectName(QStringLiteral("utilisationAjout"));
        utilisationAjout->setMinimumSize(QSize(180, 0));
        utilisationAjout->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(utilisationAjout, 6, 1, 1, 1);

        labelNom = new QLabel(AjoutDevice);
        labelNom->setObjectName(QStringLiteral("labelNom"));
        labelNom->setMinimumSize(QSize(20, 0));
        labelNom->setFont(font2);

        gridLayout->addWidget(labelNom, 0, 2, 1, 1);

        labelFabriquant = new QLabel(AjoutDevice);
        labelFabriquant->setObjectName(QStringLiteral("labelFabriquant"));
        labelFabriquant->setFont(font2);

        gridLayout->addWidget(labelFabriquant, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        labelMarque_3 = new QLabel(AjoutDevice);
        labelMarque_3->setObjectName(QStringLiteral("labelMarque_3"));
        labelMarque_3->setFont(font2);

        gridLayout->addWidget(labelMarque_3, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        labelMarque = new QLabel(AjoutDevice);
        labelMarque->setObjectName(QStringLiteral("labelMarque"));
        labelMarque->setFont(font2);

        gridLayout->addWidget(labelMarque, 2, 2, 1, 1);

        precisionlabel = new QLabel(AjoutDevice);
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
        quitter = new QPushButton(AjoutDevice);
        quitter->setObjectName(QStringLiteral("quitter"));

        horizontalLayout_5->addWidget(quitter);

        ajouter = new QPushButton(AjoutDevice);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(ajouter);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(AjoutDevice);

        QMetaObject::connectSlotsByName(AjoutDevice);
    } // setupUi

    void retranslateUi(QDialog *AjoutDevice)
    {
        AjoutDevice->setWindowTitle(QApplication::translate("AjoutDevice", "Ajouter un materiel", nullptr));
        labelAjoutDevice->setText(QApplication::translate("AjoutDevice", "AJOUTER UN MATERIEL", nullptr));
        utilisatationlabel->setText(QApplication::translate("AjoutDevice", "UTILISATION :", nullptr));
        labelsite->setText(QApplication::translate("AjoutDevice", "SITE :", nullptr));
        labelSN->setText(QApplication::translate("AjoutDevice", "NUMERO DE SERIE : ", nullptr));
        labelType->setText(QApplication::translate("AjoutDevice", "TYPE : ", nullptr));
        labelNom->setText(QApplication::translate("AjoutDevice", "NOM :", nullptr));
        labelFabriquant->setText(QApplication::translate("AjoutDevice", "FABRIQUANT : ", nullptr));
        labelMarque_3->setText(QApplication::translate("AjoutDevice", "IP :", nullptr));
        labelMarque->setText(QApplication::translate("AjoutDevice", "MODELE :", nullptr));
        precisionlabel->setText(QApplication::translate("AjoutDevice", "PRECISION : ", nullptr));
        quitter->setText(QApplication::translate("AjoutDevice", "Quitter", nullptr));
        ajouter->setText(QApplication::translate("AjoutDevice", "Ajouter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutDevice: public Ui_AjoutDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTDEVICE_H
