#include "ajoutinv.h"
#include "ui_ajoutinv.h"


AjoutInv::AjoutInv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutInv)
{
    ui->setupUi(this);
}
AjoutInv::AjoutInv(QString nomSite, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutInv)
{
    ui->setupUi(this);
    manager = new Manager;
    site=nomSite;

    std::vector<QString> combo=manager->remplissageCombo("libelle","TYPE");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->type->addItem(*it);
       }
}
AjoutInv::~AjoutInv()
{
    delete ui;
}

void AjoutInv::on_ajouter_clicked()
{
    manager->ajouterInv(site,ui->nom->text(),ui->commentaire->toPlainText(),ui->estimationCout->value(),ui->type->currentIndex());
    QMessageBox::information(this, "Enregistrer", "Materiel enregistré");
    close();
}
