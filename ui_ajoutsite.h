/********************************************************************************
** Form generated from reading UI file 'ajoutsite.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTSITE_H
#define UI_AJOUTSITE_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AjoutSite
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_titre;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_nom;
    QLineEdit *nom;
    QSpacerItem *horizontalSpacer;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_cout;
    QTextEdit *textEdit;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_frequence;
    QLineEdit *nom_3;
    QLabel *label_frequence_2;
    QLineEdit *nom_4;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_nature;
    QLineEdit *nom_5;
    QLabel *label_frequence_3;
    QLineEdit *nom_6;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *retour;
    QPushButton *pushButton;

    void setupUi(QDialog *AjoutSite)
    {
        if (AjoutSite->objectName().isEmpty())
            AjoutSite->setObjectName(QStringLiteral("AjoutSite"));
        AjoutSite->resize(400, 500);
        AjoutSite->setMinimumSize(QSize(400, 500));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(11);
        AjoutSite->setFont(font);
        widget = new QWidget(AjoutSite);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_titre = new QLabel(widget);
        label_titre->setObjectName(QStringLiteral("label_titre"));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_titre->setFont(font1);
        label_titre->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_titre);

        widget1 = new QWidget(AjoutSite);
        widget1->setObjectName(QStringLiteral("widget1"));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_nom = new QLabel(widget1);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_nom->setFont(font2);

        horizontalLayout_7->addWidget(label_nom);

        nom = new QLineEdit(widget1);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setMinimumSize(QSize(185, 0));
        nom->setBaseSize(QSize(300, 0));

        horizontalLayout_7->addWidget(nom);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        widget2 = new QWidget(AjoutSite);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 200, 257, 73));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_cout = new QLabel(widget2);
        label_cout->setObjectName(QStringLiteral("label_cout"));
        label_cout->setFont(font2);

        horizontalLayout_2->addWidget(label_cout);

        textEdit = new QTextEdit(widget2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);

        widget3 = new QWidget(AjoutSite);
        widget3->setObjectName(QStringLiteral("widget3"));
        horizontalLayout_3 = new QHBoxLayout(widget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_frequence = new QLabel(widget3);
        label_frequence->setObjectName(QStringLiteral("label_frequence"));
        label_frequence->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence);

        nom_3 = new QLineEdit(widget3);
        nom_3->setObjectName(QStringLiteral("nom_3"));
        nom_3->setMinimumSize(QSize(185, 0));
        nom_3->setBaseSize(QSize(300, 0));

        horizontalLayout_3->addWidget(nom_3);

        label_frequence_2 = new QLabel(widget3);
        label_frequence_2->setObjectName(QStringLiteral("label_frequence_2"));
        label_frequence_2->setFont(font2);

        horizontalLayout_3->addWidget(label_frequence_2);

        nom_4 = new QLineEdit(widget3);
        nom_4->setObjectName(QStringLiteral("nom_4"));
        nom_4->setMinimumSize(QSize(100, 0));
        nom_4->setBaseSize(QSize(30, 0));

        horizontalLayout_3->addWidget(nom_4);

        widget4 = new QWidget(AjoutSite);
        widget4->setObjectName(QStringLiteral("widget4"));
        horizontalLayout_4 = new QHBoxLayout(widget4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_nature = new QLabel(widget4);
        label_nature->setObjectName(QStringLiteral("label_nature"));
        label_nature->setFont(font2);

        horizontalLayout_4->addWidget(label_nature);

        nom_5 = new QLineEdit(widget4);
        nom_5->setObjectName(QStringLiteral("nom_5"));
        nom_5->setMinimumSize(QSize(185, 0));
        nom_5->setBaseSize(QSize(300, 0));

        horizontalLayout_4->addWidget(nom_5);

        label_frequence_3 = new QLabel(widget4);
        label_frequence_3->setObjectName(QStringLiteral("label_frequence_3"));
        label_frequence_3->setFont(font2);

        horizontalLayout_4->addWidget(label_frequence_3);

        nom_6 = new QLineEdit(widget4);
        nom_6->setObjectName(QStringLiteral("nom_6"));
        nom_6->setMinimumSize(QSize(100, 0));
        nom_6->setBaseSize(QSize(30, 0));

        horizontalLayout_4->addWidget(nom_6);

        widget5 = new QWidget(AjoutSite);
        widget5->setObjectName(QStringLiteral("widget5"));
        horizontalLayout_6 = new QHBoxLayout(widget5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        retour = new QPushButton(widget5);
        retour->setObjectName(QStringLiteral("retour"));
        retour->setFont(font2);

        horizontalLayout_6->addWidget(retour);

        pushButton = new QPushButton(widget5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font2);

        horizontalLayout_6->addWidget(pushButton);


        retranslateUi(AjoutSite);

        QMetaObject::connectSlotsByName(AjoutSite);
    } // setupUi

    void retranslateUi(QDialog *AjoutSite)
    {
        AjoutSite->setWindowTitle(QApplication::translate("AjoutSite", "Dialog", nullptr));
        label_titre->setText(QApplication::translate("AjoutSite", "AJOUTER UN SITE", nullptr));
        label_nom->setText(QApplication::translate("AjoutSite", "NOM : ", nullptr));
        label_cout->setText(QApplication::translate("AjoutSite", "ADRESSE : ", nullptr));
        label_frequence->setText(QApplication::translate("AjoutSite", "VILLE : ", nullptr));
        label_frequence_2->setText(QApplication::translate("AjoutSite", "CP : ", nullptr));
        label_nature->setText(QApplication::translate("AjoutSite", "SIREN : ", nullptr));
        label_frequence_3->setText(QApplication::translate("AjoutSite", "BIC : ", nullptr));
        retour->setText(QApplication::translate("AjoutSite", "RETOUR", nullptr));
        pushButton->setText(QApplication::translate("AjoutSite", "AJOUTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutSite: public Ui_AjoutSite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTSITE_H
