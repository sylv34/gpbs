#include "gppbs.h"
#include "ui_gppbs.h"
#include "gestionparc.h"
#include "connexion.h"
#include "gestionsite.h"
#include "gestionbudget.h"

GPPBS::GPPBS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GPPBS)
{
    ui->setupUi(this);
    manager = new Manager;
    manager->connexionBase();
    if(manager->etat_connexion())
    {
        Connexion dialConnexion(this);
        dialConnexion.exec();
    }else{
        QMessageBox::critical(this,"Base de donnée", "Connection à la base échoué ! Relancez l'application");
        //exit(1);
    }
}

GPPBS::~GPPBS()
{
    delete ui;
}

void GPPBS::on_gest_parc_clicked()
{
    GestionParc parc(this);
    parc.exec();
}

void GPPBS::on_gest_site_clicked()
{
    GestionSite sites(this);
    sites.exec();
}

void GPPBS::on_gest_budget_clicked()
{
    GestionBudget budget(this);
    budget.exec();
}
