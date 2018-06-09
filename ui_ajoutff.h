/********************************************************************************
** Form generated from reading UI file 'ajoutff.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTFF_H
#define UI_AJOUTFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AjoutFF
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_titre;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_nom;
    QSpacerItem *horizontalSpacer;
    QLineEdit *nom;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_cout;
    QDoubleSpinBox *coutAnnuel;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_frequence;
    QComboBox *frequence;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_nature;
    QComboBox *nature;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_commentaire;
    QTextEdit *commentaire;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *retour;
    QPushButton *pushButton;

    void setupUi(QDialog *AjoutFF)
    {
        if (AjoutFF->objectName().isEmpty())
            AjoutFF->setObjectName(QStringLiteral("AjoutFF"));
        AjoutFF->resize(400, 500);
        AjoutFF->setMinimumSize(QSize(400, 500));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        AjoutFF->setFont(font);
        verticalLayout = new QVBoxLayout(AjoutFF);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_titre = new QLabel(AjoutFF);
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

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_nom = new QLabel(AjoutFF);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_nom->setFont(font2);

        horizontalLayout_7->addWidget(label_nom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        nom = new QLineEdit(AjoutFF);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setMinimumSize(QSize(185, 0));
        nom->setBaseSize(QSize(300, 0));

        horizontalLayout_7->addWidget(nom);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_cout = new QLabel(AjoutFF);
        label_cout->setObjectName(QStringLiteral("label_cout"));
        label_cout->setFont(font2);

        horizontalLayout_2->addWidget(label_cout);

        coutAnnuel = new QDoubleSpinBox(AjoutFF);
        coutAnnuel->setObjectName(QStringLiteral("coutAnnuel"));
        coutAnnuel->setMaximum(1e+8);

        horizontalLayout_2->addWidget(coutAnnuel);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_frequence = new QLabel(AjoutFF);
        label_frequence->setObjectName(QStringLiteral("label_frequence"));
        label_frequence->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence);

        frequence = new QComboBox(AjoutFF);
        frequence->setObjectName(QStringLiteral("frequence"));

        horizontalLayout_3->addWidget(frequence);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_nature = new QLabel(AjoutFF);
        label_nature->setObjectName(QStringLiteral("label_nature"));
        label_nature->setFont(font2);

        horizontalLayout_4->addWidget(label_nature);

        nature = new QComboBox(AjoutFF);
        nature->setObjectName(QStringLiteral("nature"));

        horizontalLayout_4->addWidget(nature);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_commentaire = new QLabel(AjoutFF);
        label_commentaire->setObjectName(QStringLiteral("label_commentaire"));
        label_commentaire->setFont(font2);

        horizontalLayout_5->addWidget(label_commentaire);

        commentaire = new QTextEdit(AjoutFF);
        commentaire->setObjectName(QStringLiteral("commentaire"));

        horizontalLayout_5->addWidget(commentaire);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        retour = new QPushButton(AjoutFF);
        retour->setObjectName(QStringLiteral("retour"));
        retour->setFont(font2);

        horizontalLayout_6->addWidget(retour);

        pushButton = new QPushButton(AjoutFF);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(AjoutFF);

        QMetaObject::connectSlotsByName(AjoutFF);
    } // setupUi

    void retranslateUi(QDialog *AjoutFF)
    {
        AjoutFF->setWindowTitle(QApplication::translate("AjoutFF", "Dialog", nullptr));
        label_titre->setText(QApplication::translate("AjoutFF", "AJOUTER UNE CHARGE", nullptr));
        label_nom->setText(QApplication::translate("AjoutFF", "NOM : ", nullptr));
        label_cout->setText(QApplication::translate("AjoutFF", "COUT ANNUEL : ", nullptr));
        label_frequence->setText(QApplication::translate("AjoutFF", "FREQUENCE : ", nullptr));
        label_nature->setText(QApplication::translate("AjoutFF", "NATURE : ", nullptr));
        label_commentaire->setText(QApplication::translate("AjoutFF", "COMMENTAIRES : ", nullptr));
        retour->setText(QApplication::translate("AjoutFF", "RETOUR", nullptr));
        pushButton->setText(QApplication::translate("AjoutFF", "AJOUTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutFF: public Ui_AjoutFF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTFF_H
