/********************************************************************************
** Form generated from reading UI file 'modinv.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODINV_H
#define UI_MODINV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModInv
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
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_nom_2;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *type;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_cout;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *estimationCout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_commentaire;
    QTextEdit *commentaire;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *retour;
    QPushButton *modifier;

    void setupUi(QDialog *ModInv)
    {
        if (ModInv->objectName().isEmpty())
            ModInv->setObjectName(QStringLiteral("ModInv"));
        ModInv->resize(400, 500);
        ModInv->setMinimumSize(QSize(400, 500));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        ModInv->setFont(font);
        verticalLayout = new QVBoxLayout(ModInv);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_titre = new QLabel(ModInv);
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
        label_id = new QLabel(ModInv);
        label_id->setObjectName(QStringLiteral("label_id"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_id->setFont(font2);

        horizontalLayout_8->addWidget(label_id);

        id = new QLabel(ModInv);
        id->setObjectName(QStringLiteral("id"));
        id->setFont(font2);

        horizontalLayout_8->addWidget(id);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_nom = new QLabel(ModInv);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setFont(font2);

        horizontalLayout_7->addWidget(label_nom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        nom = new QLineEdit(ModInv);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setMinimumSize(QSize(185, 0));
        nom->setBaseSize(QSize(300, 0));

        horizontalLayout_7->addWidget(nom);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_nom_2 = new QLabel(ModInv);
        label_nom_2->setObjectName(QStringLiteral("label_nom_2"));
        label_nom_2->setFont(font2);

        horizontalLayout_9->addWidget(label_nom_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        type = new QComboBox(ModInv);
        type->setObjectName(QStringLiteral("type"));
        type->setMinimumSize(QSize(180, 0));

        horizontalLayout_9->addWidget(type);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_cout = new QLabel(ModInv);
        label_cout->setObjectName(QStringLiteral("label_cout"));
        label_cout->setFont(font2);

        horizontalLayout_2->addWidget(label_cout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        estimationCout = new QSpinBox(ModInv);
        estimationCout->setObjectName(QStringLiteral("estimationCout"));
        estimationCout->setMinimumSize(QSize(180, 0));
        estimationCout->setMaximum(999999999);

        horizontalLayout_2->addWidget(estimationCout);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_commentaire = new QLabel(ModInv);
        label_commentaire->setObjectName(QStringLiteral("label_commentaire"));
        label_commentaire->setFont(font2);

        horizontalLayout_5->addWidget(label_commentaire);

        commentaire = new QTextEdit(ModInv);
        commentaire->setObjectName(QStringLiteral("commentaire"));

        horizontalLayout_5->addWidget(commentaire);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        retour = new QPushButton(ModInv);
        retour->setObjectName(QStringLiteral("retour"));
        retour->setFont(font2);

        horizontalLayout_6->addWidget(retour);

        modifier = new QPushButton(ModInv);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setFont(font2);

        horizontalLayout_6->addWidget(modifier);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ModInv);

        QMetaObject::connectSlotsByName(ModInv);
    } // setupUi

    void retranslateUi(QDialog *ModInv)
    {
        ModInv->setWindowTitle(QApplication::translate("ModInv", "Dialog", nullptr));
        label_titre->setText(QApplication::translate("ModInv", "MODIFIER UN INVESTISSEMENT ", nullptr));
        label_id->setText(QApplication::translate("ModInv", "ID : ", nullptr));
        id->setText(QApplication::translate("ModInv", "TextLabel", nullptr));
        label_nom->setText(QApplication::translate("ModInv", "NOM : ", nullptr));
        label_nom_2->setText(QApplication::translate("ModInv", "NOM : ", nullptr));
        label_cout->setText(QApplication::translate("ModInv", "COUT ESTIME", nullptr));
        label_commentaire->setText(QApplication::translate("ModInv", "COMMENTAIRES : ", nullptr));
        retour->setText(QApplication::translate("ModInv", "RETOUR", nullptr));
        modifier->setText(QApplication::translate("ModInv", "MODIFIER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModInv: public Ui_ModInv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODINV_H
