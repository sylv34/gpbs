#include "ajoutinv.h"
#include "ui_ajoutinv.h"


AjoutInv::AjoutInv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutInv)
{
    ui->setupUi(this);
}
AjoutInv::AjoutInv(int IdSite, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutInv)
{
    ui->setupUi(this);
    manager = new InvBudgetManager;
    site=IdSite;

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
    manager->ajouterItem(ui->nom->text(),ui->commentaire->toPlainText(),ui->estimationCout->value(),ui->type->currentIndex(),site);
    QMessageBox::information(this, "Enregistrer", "Materiel enregistré");
    close();
}
