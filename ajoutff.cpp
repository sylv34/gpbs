#include "ajoutff.h"
#include "ui_ajoutff.h"

AjoutFF::AjoutFF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutFF)
{
    ui->setupUi(this);
    manager = new Manager;
}
AjoutFF::AjoutFF(QString nomSite, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutFF)
{
    ui->setupUi(this);
    manager = new Manager;
    site=nomSite;

    std::vector<QString> combo=manager->remplissageCombo("libelle","FREQUENCE");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->frequence->addItem(*it);
       }
    combo=manager->remplissageCombo("libelle","NATURE");
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
    manager->ajoutCharge(ui->nom->text(), ui->coutAnnuel->value(),ui->frequence->currentText(),ui->nature->currentText(), ui->commentaire->toPlainText(), site);
    QMessageBox::information(this, "Enregistrer", "Materiel enregistré");
    close();
}

void AjoutFF::on_retour_clicked()
{
    close();
}
