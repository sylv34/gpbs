#include "modificationdevice.h"
#include "ui_modificationdevice.h"

ModificationDevice::ModificationDevice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificationDevice)
{
    ui->setupUi(this);
    manager = new Manager;
}
ModificationDevice::ModificationDevice(QString id, QString nom, QString nomType, QString fabriquant, QString modele, QString numSerie, QString ip, QString nomUtilisation, QString precision, QString nomSite, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificationDevice)
{
    ui->setupUi(this);
    manager = new Manager;

    std::vector<QString> combo=manager->remplissageCombo("libelle","TYPE");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->typeMod->addItem(*it);
       }
    combo=manager->remplissageCombo("nom","SITE");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->siteMod->addItem(*it);
       }
    combo=manager->remplissageCombo("libelle","UTILISATION");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->utilisationMod->addItem(*it);
       }

    ui->idMod->setText(id);
    ui->nomMod->setText(nom);
    ui->typeMod->setCurrentIndex(manager->getId("type", nomType));
    ui->fabriquantMod->setText(fabriquant);
    ui->modeleMod->setText(modele);
    ui->SNMod->setText(numSerie);
    ui->IPMod->setText(ip);
    ui->utilisationMod->setCurrentIndex(manager->getId("utilisation",nomUtilisation));
    ui->precisionMod->setText(precision);
    ui->siteMod->setCurrentIndex(manager->getId("site",nomSite));

}

ModificationDevice::~ModificationDevice()
{
    delete ui;
}

void ModificationDevice::on_modifier_clicked()
{
    manager->modifierDevice(ui->idMod->text().toInt(),ui->nomMod->text(),ui->typeMod->currentText(),ui->fabriquantMod->text(),ui->modeleMod->text(),ui->SNMod->text(),ui->IPMod->text(),ui->utilisationMod->currentText() ,ui->precisionMod->toPlainText(),ui->siteMod->currentText());
    QMessageBox::information(this, "Modification", "Materiel modifié");
    close();
}

void ModificationDevice::on_quitter_clicked()
{
    close();
}
