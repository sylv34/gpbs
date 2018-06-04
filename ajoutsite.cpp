#include "ajoutsite.h"
#include "ui_ajoutsite.h"

AjoutSite::AjoutSite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutSite)
{
    ui->setupUi(this);
}

AjoutSite::~AjoutSite()
{
    delete ui;
}
