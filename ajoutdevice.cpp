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
    manager = new Manager;
    std::vector<QString> combo=manager->remplissageCombo("libelle","TYPE");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->typeAjout->addItem(*it);
       }
    combo=manager->remplissageCombo("nom","SITE");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->siteAjout->addItem(*it);
       }
    combo=manager->remplissageCombo("libelle","UTILISATION");
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
    manager->ajouterDevice(ui->nomAjout->text(),ui->typeAjout->currentText(),ui->fabriquantAjout->text(),ui->modeleAjout->text(),ui->SNAjout->text(),ui->IPAjout->text(),ui->utilisationAjout->currentText() ,ui->precisionAjout->toPlainText(),ui->siteAjout->currentText());
    QMessageBox::information(this, "Enregistrer", "Materiel enregistré");
    close();
}

void AjoutDevice::on_quitter_clicked()
{
    close();
}