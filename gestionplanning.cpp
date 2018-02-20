#include "gestionplanning.h"
#include "ui_gestionplanning.h"

GestionPlanning::GestionPlanning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionPlanning)
{
    ui->setupUi(this);
}

GestionPlanning::~GestionPlanning()
{
    delete ui;
}
