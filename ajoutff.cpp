#include "ajoutff.h"
#include "ui_ajoutff.h"

AjoutFF::AjoutFF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutFF)
{
    ui->setupUi(this);
    manager = new FFBudgetManager;
}
AjoutFF::AjoutFF(int IdSite, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutFF)
{
    ui->setupUi(this);
    manager = new FFBudgetManager;
    site=IdSite;

    std::vector<QString> combo=manager->remplissageCombo("libelle","frequence");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->frequence->addItem(*it);
       }
    combo=manager->remplissageCombo("libelle","nature");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->nature->addItem(*it);
       }
}

AjoutFF::~AjoutFF()
{
    delete ui;
}

void AjoutFF::on_pushButton_clicked()
{
    manager->ajouterItem(ui->nom->text(), ui->coutAnnuel->value(),ui->frequence->currentIndex(),ui->nature->currentIndex(), ui->commentaire->toPlainText(), site);
    QMessageBox::information(this, "Enregistrer", "Materiel enregistré");
    close();
}

void AjoutFF::on_retour_clicked()
{
    close();
}
