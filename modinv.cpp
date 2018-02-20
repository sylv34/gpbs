#include "modinv.h"
#include "ui_modinv.h"

ModInv::ModInv(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModInv)
{
    ui->setupUi(this);
    manager = new Manager;
}
ModInv::ModInv(int id,QString nom,int estimationCout,int type, QString commentaire, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModInv)
{
    ui->setupUi(this);
    manager = new Manager;

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
