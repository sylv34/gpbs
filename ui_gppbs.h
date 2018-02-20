/********************************************************************************
** Form generated from reading UI file 'gppbs.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPPBS_H
#define UI_GPPBS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GPPBS
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titre_main;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *gest_parc;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *gest_budget;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *gest_site;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GPPBS)
    {
        if (GPPBS->objectName().isEmpty())
            GPPBS->setObjectName(QStringLiteral("GPPBS"));
        GPPBS->resize(566, 500);
        centralWidget = new QWidget(GPPBS);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        titre_main = new QLabel(centralWidget);
        titre_main->setObjectName(QStringLiteral("titre_main"));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        titre_main->setFont(font);
        titre_main->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(titre_main);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        gest_parc = new QPushButton(centralWidget);
        gest_parc->setObjectName(QStringLiteral("gest_parc"));
        gest_parc->setMinimumSize(QSize(400, 150));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        gest_parc->setFont(font1);
        gest_parc->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(gest_parc);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        gest_budget = new QPushButton(centralWidget);
        gest_budget->setObjectName(QStringLiteral("gest_budget"));
        gest_budget->setMinimumSize(QSize(200, 150));
        gest_budget->setFont(font1);
        gest_budget->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(gest_budget);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        gest_site = new QPushButton(centralWidget);
        gest_site->setObjectName(QStringLiteral("gest_site"));
        gest_site->setMinimumSize(QSize(200, 150));
        gest_site->setFont(font1);
        gest_site->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_3->addWidget(gest_site);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        GPPBS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GPPBS);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 566, 21));
        GPPBS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GPPBS);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GPPBS->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GPPBS);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GPPBS->setStatusBar(statusBar);

        retranslateUi(GPPBS);

        QMetaObject::connectSlotsByName(GPPBS);
    } // setupUi

    void retranslateUi(QMainWindow *GPPBS)
    {
        GPPBS->setWindowTitle(QApplication::translate("GPPBS", "GPPBS", nullptr));
        titre_main->setText(QApplication::translate("GPPBS", "GESTION PARC PLANNING BUDGET SITE", nullptr));
        gest_parc->setText(QApplication::translate("GPPBS", "GESTION PARC", nullptr));
        gest_budget->setText(QApplication::translate("GPPBS", "GESTION BUDGET", nullptr));
        gest_site->setText(QApplication::translate("GPPBS", "GESTION SITE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GPPBS: public Ui_GPPBS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPPBS_H
