#include "modff.h"
#include "ui_modff.h"
#include "manager.h"

ModFF::ModFF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModFF)
{
    ui->setupUi(this);
    manager = new Manager;
}
ModFF::ModFF(QString id,QString nom,QString coutAnnuel,QString frequence,QString nature,QString commentaire,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModFF)
{
    ui->setupUi(this);
    manager = new Manager;

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

    ui->id->setText(id);
    ui->nom->setText(nom);
    ui->coutAnnuel->setValue(coutAnnuel.toDouble());
    ui->frequence->setCurrentIndex(manager->getId("frequence",frequence));
    ui->nature->setCurrentIndex(manager->getId("nature", nature));
    ui->commentaire->setPlainText(commentaire);
}
ModFF::~ModFF()
{
    delete ui;
}

void ModFF::on_modifier_clicked()
{
    manager->modifCharge(ui->id->text().toInt(),ui->nom->text(),ui->coutAnnuel->value(),ui->frequence->currentText(),ui->nature->currentText(),ui->commentaire->toPlainText());
    QMessageBox::information(this,"Modifier","Modification effectuée");
    close();
}
