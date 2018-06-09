#include "connexion.h"
#include "ui_connexion.h"
#define q2c(string) string.toStdString()
Connexion::Connexion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connexion)
{
    ui->setupUi(this);
    manager = new Manager();
    ui->mdp->setEchoMode(QLineEdit::Password);
    ui->nom->setText("admin");
    ui->mdp->setText("sylvain");
}

Connexion::~Connexion()
{
    delete ui;
}

void Connexion::on_connexion_clicked()
{
    if(manager->verif_user(ui->nom->text() ,ui->mdp->text()))
    {
        QMessageBox::information(this,"DB", "Utilisateur trouvé !");
        close();

    }else{
        QMessageBox::critical(this, "DB", "Combinaison nom/mdp incorrect");

    }

}

void Connexion::on_quitter_clicked()
{
    exit(1);
}
