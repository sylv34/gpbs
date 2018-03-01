#include "modinv.h"
#include "ui_modinv.h"

ModInv::ModInv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModInv)
{
    ui->setupUi(this);
    manager = new InvBudgetManager;
}
ModInv::ModInv(int id,QString nom,int estimationCout,int type, QString commentaire,int IdSite, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModInv)
{
    ui->setupUi(this);
    manager = new InvBudgetManager;
    site = IdSite;

    std::vector<QString> combo=manager->remplissageCombo("libelle","type");
    for(std::vector<QString>::iterator it=combo.begin(); it!=combo.end(); ++it)
       {
           ui->type->addItem(*it);
       }

    ui->id->setText(QString::number(id));
    ui->nom->setText(nom);
    ui->estimationCout->setValue(estimationCout);
    ui->type->setCurrentIndex(type);
    ui->commentaire->setPlainText(commentaire);
}

ModInv::~ModInv()
{
    delete ui;
}

void ModInv::on_retour_clicked()
{
    close();
}

void ModInv::on_modifier_clicked()
{
    manager->modifierItem(ui->id->text().toInt(),ui->nom->text(),ui->estimationCout->value(),ui->type->currentIndex(), ui->commentaire->toPlainText(),site);
    QMessageBox::information(this, "test",ui->id->text()+ui->nom->text()+QString::number(ui->estimationCout->value())+QString::number(ui->type->currentIndex())+ ui->commentaire->toPlainText());
    QMessageBox::information(this,"Modifier","Modification effectuée");
    close();
}
