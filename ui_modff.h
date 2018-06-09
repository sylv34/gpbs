/********************************************************************************
** Form generated from reading UI file 'modff.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODFF_H
#define UI_MODFF_H

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

class Ui_ModFF
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_titre;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_id;
    QLabel *id;
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
    QPushButton *modifier;

    void setupUi(QDialog *ModFF)
    {
        if (ModFF->objectName().isEmpty())
            ModFF->setObjectName(QStringLiteral("ModFF"));
        ModFF->resize(400, 500);
        ModFF->setMinimumSize(QSize(400, 500));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        ModFF->setFont(font);
        verticalLayout = new QVBoxLayout(ModFF);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_titre = new QLabel(ModFF);
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

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_id = new QLabel(ModFF);
        label_id->setObjectName(QStringLiteral("label_id"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_id->setFont(font2);

        horizontalLayout_8->addWidget(label_id);

        id = new QLabel(ModFF);
        id->setObjectName(QStringLiteral("id"));
        id->setFont(font2);

        horizontalLayout_8->addWidget(id);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_nom = new QLabel(ModFF);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setFont(font2);

        horizontalLayout_7->addWidget(label_nom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        nom = new QLineEdit(ModFF);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setMinimumSize(QSize(185, 0));
        nom->setBaseSize(QSize(300, 0));

        horizontalLayout_7->addWidget(nom);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_cout = new QLabel(ModFF);
        label_cout->setObjectName(QStringLiteral("label_cout"));
        label_cout->setFont(font2);

        horizontalLayout_2->addWidget(label_cout);

        coutAnnuel = new QDoubleSpinBox(ModFF);
        coutAnnuel->setObjectName(QStringLiteral("coutAnnuel"));
        coutAnnuel->setMaximum(1e+8);

        horizontalLayout_2->addWidget(coutAnnuel);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_frequence = new QLabel(ModFF);
        label_frequence->setObjectName(QStringLiteral("label_frequence"));
        label_frequence->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence);

        frequence = new QComboBox(ModFF);
        frequence->setObjectName(QStringLiteral("frequence"));

        horizontalLayout_3->addWidget(frequence);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_nature = new QLabel(ModFF);
        label_nature->setObjectName(QStringLiteral("label_nature"));
        label_nature->setFont(font2);

        horizontalLayout_4->addWidget(label_nature);

        nature = new QComboBox(ModFF);
        nature->setObjectName(QStringLiteral("nature"));

        horizontalLayout_4->addWidget(nature);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_commentaire = new QLabel(ModFF);
        label_commentaire->setObjectName(QStringLiteral("label_commentaire"));
        label_commentaire->setFont(font2);

        horizontalLayout_5->addWidget(label_commentaire);

        commentaire = new QTextEdit(ModFF);
        commentaire->setObjectName(QStringLiteral("commentaire"));

        horizontalLayout_5->addWidget(commentaire);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        retour = new QPushButton(ModFF);
        retour->setObjectName(QStringLiteral("retour"));
        retour->setFont(font2);

        horizontalLayout_6->addWidget(retour);

        modifier = new QPushButton(ModFF);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setFont(font2);

        horizontalLayout_6->addWidget(modifier);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ModFF);

        QMetaObject::connectSlotsByName(ModFF);
    } // setupUi

    void retranslateUi(QDialog *ModFF)
    {
        ModFF->setWindowTitle(QApplication::translate("ModFF", "Dialog", nullptr));
        label_titre->setText(QApplication::translate("ModFF", "MODIFIER UNE CHARGE", nullptr));
        label_id->setText(QApplication::translate("ModFF", "ID : ", nullptr));
        id->setText(QApplication::translate("ModFF", "TextLabel", nullptr));
        label_nom->setText(QApplication::translate("ModFF", "NOM : ", nullptr));
        label_cout->setText(QApplication::translate("ModFF", "COUT ANNUEL : ", nullptr));
        label_frequence->setText(QApplication::translate("ModFF", "FREQUENCE : ", nullptr));
        label_nature->setText(QApplication::translate("ModFF", "NATURE : ", nullptr));
        label_commentaire->setText(QApplication::translate("ModFF", "COMMENTAIRES : ", nullptr));
        retour->setText(QApplication::translate("ModFF", "RETOUR", nullptr));
        modifier->setText(QApplication::translate("ModFF", "MODIFIER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModFF: public Ui_ModFF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODFF_H
