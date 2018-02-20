#include "gestionsite.h"
#include "ui_gestionsite.h"

GestionSite::GestionSite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionSite)
{
    ui->setupUi(this);
}

GestionSite::~GestionSite()
{
    delete ui;
}
