#include "ajoutdevice.h"
#include "ui_ajoutdevice.h"
#include "gppbs.h"
#include "gestionparc.h"
#include <iostream>

AjoutDevice::AjoutDevice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutDevice)
{
    ui->setupUi(this);
    manager = new MaterielManager;
    std::vector<QString> combo=manager->remplissageCombo("libelle","type");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->typeAjout->addItem(*it);
       }
    combo=manager->remplissageCombo("nom","site");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->siteAjout->addItem(*it);
       }
    combo=manager->remplissageCombo("libelle","utilisation");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->utilisationAjout->addItem(*it);
       }



}

AjoutDevice::~AjoutDevice()
{
    delete ui;
}

void AjoutDevice::on_ajouter_clicked()
{
    manager->ajouterItem(ui->nomAjout->text(),ui->typeAjout->currentIndex(),ui->fabriquantAjout->text(),ui->modeleAjout->text(),ui->SNAjout->text(),ui->IPAjout->text(),ui->utilisationAjout->currentIndex(),ui->precisionAjout->toPlainText(),ui->siteAjout->currentIndex());
    QMessageBox::information(this, "Enregistrer", "Materiel enregistré");
    close();
}

void AjoutDevice::on_quitter_clicked()
{
    close();
}
