#include "modifsite.h"
#include "ui_modifsite.h"

ModifSite::ModifSite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifSite)
{
    ui->setupUi(this);
}
ModifSite::ModifSite(int id,QString nom,QString adresse,QString CP,QString ville,QString siren, QString nic, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifSite)
{
    ui->setupUi(this);
    manager = new SiteManager;

    ui->ID->setText(QString::number(id));
    ui->nom->setText(nom);
    ui->siren->setText(siren);
    ui->nic->setText(nic);
    ui->adresse->setText(adresse);
    ui->ville->setText(ville);
    ui->cp->setText(CP);

}
ModifSite::~ModifSite()
{
    delete ui;
}

void ModifSite::on_pushButton_clicked()
{
    manager->modifierSite(ui->ID->text().toInt(),ui->nom->text(),ui->adresse->text(),ui->cp->text(),ui->ville->text(),ui->siren->text(),ui->nic->text());
    QMessageBox::information(this, "Modification", "Site modifié");
    close();
}
