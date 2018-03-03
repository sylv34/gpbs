#include "modff.h"
#include "ui_modff.h"


ModFF::ModFF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModFF)
{
    ui->setupUi(this);
    manager = new FFBudgetManager;
}
ModFF::ModFF(int id,QString nom,double coutAnnuel,int frequence,int nature,QString commentaire,int IdSite,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModFF)
{
    ui->setupUi(this);
    manager = new FFBudgetManager;
    site = IdSite;

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

    ui->id->setText(QString::number(id));
    ui->nom->setText(nom);
    ui->coutAnnuel->setValue(coutAnnuel);
    ui->frequence->setCurrentIndex(frequence);
    ui->nature->setCurrentIndex(nature);
    ui->commentaire->setPlainText(commentaire);
}
ModFF::~ModFF()
{
    delete ui;
}

void ModFF::on_modifier_clicked()
{
    manager->modifierItem(ui->id->text().toInt(),ui->nom->text(),ui->coutAnnuel->value(),ui->frequence->currentIndex(),ui->nature->currentIndex(),ui->commentaire->toPlainText(),site);
    QMessageBox::information(this,"Modifier","Modification effectuée");
    close();
}

void ModFF::on_retour_clicked()
{
    close();
}
