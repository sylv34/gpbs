#include "ajoutsite.h"
#include "ui_ajoutsite.h"

AjoutSite::AjoutSite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutSite)
{
    ui->setupUi(this);
    manager = new SiteManager;
}

AjoutSite::~AjoutSite()
{
    delete ui;
}

void AjoutSite::on_pushButton_clicked()
{
    manager->ajouterSite(ui->nom->text(),ui->adresse->text(),ui->cp->text(), ui->ville->text(),ui->siren->text(),ui->nic->text());
    QMessageBox::information(this, "Enregistrer", "Site enregistré");
    close();
}
