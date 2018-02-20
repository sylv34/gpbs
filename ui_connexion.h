/********************************************************************************
** Form generated from reading UI file 'connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Connexion
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelNom;
    QLineEdit *nom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelMdp;
    QLineEdit *mdp;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *quitter;
    QPushButton *connexion;

    void setupUi(QDialog *Connexion)
    {
        if (Connexion->objectName().isEmpty())
            Connexion->setObjectName(QStringLiteral("Connexion"));
        Connexion->resize(200, 200);
        Connexion->setMaximumSize(QSize(500, 200));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        Connexion->setFont(font);
        verticalLayout = new QVBoxLayout(Connexion);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelNom = new QLabel(Connexion);
        labelNom->setObjectName(QStringLiteral("labelNom"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelNom->setFont(font1);

        horizontalLayout->addWidget(labelNom);

        nom = new QLineEdit(Connexion);
        nom->setObjectName(QStringLiteral("nom"));

        horizontalLayout->addWidget(nom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelMdp = new QLabel(Connexion);
        labelMdp->setObjectName(QStringLiteral("labelMdp"));
        labelMdp->setFont(font1);

        horizontalLayout_2->addWidget(labelMdp);

        mdp = new QLineEdit(Connexion);
        mdp->setObjectName(QStringLiteral("mdp"));

        horizontalLayout_2->addWidget(mdp);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        quitter = new QPushButton(Connexion);
        quitter->setObjectName(QStringLiteral("quitter"));

        horizontalLayout_3->addWidget(quitter);

        connexion = new QPushButton(Connexion);
        connexion->setObjectName(QStringLiteral("connexion"));

        horizontalLayout_3->addWidget(connexion);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Connexion);

        QMetaObject::connectSlotsByName(Connexion);
    } // setupUi

    void retranslateUi(QDialog *Connexion)
    {
        Connexion->setWindowTitle(QApplication::translate("Connexion", "Connexion", nullptr));
        labelNom->setText(QApplication::translate("Connexion", "NOM :", nullptr));
        labelMdp->setText(QApplication::translate("Connexion", "MDP : ", nullptr));
        quitter->setText(QApplication::translate("Connexion", "Quitter", nullptr));
        connexion->setText(QApplication::translate("Connexion", "Connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connexion: public Ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_H
