#include "gestionbudget.h"
#include "visubudget.h"
#include "ui_gestionbudget.h"
#include <iostream>

GestionBudget::GestionBudget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionBudget)
{
    ui->setupUi(this);
    manager = new BudgetManager;
    model = new QStandardItemModel;
    totFF= new int;
    totInv= new int;
    setFixedSize(800,600);
    afficherListe();
}
void GestionBudget::afficherListe(){

    manager->liste_budget(model);

    model->setHeaderData(0,Qt::Horizontal,"SITE");
    model->setHeaderData(1,Qt::Horizontal,"FRAIS DE FONCTIONNEMENT");
    model->setHeaderData(2,Qt::Horizontal,"INVESTISSEMENT");
    model->setHeaderData(3,Qt::Horizontal,"TOTAL");

    QHeaderView *headers = ui->viewBudget->horizontalHeader();
    headers->setSectionResizeMode(QHeaderView::ResizeToContents);
    double totfrai(0);
    int totinvest(0);
    for(int i(0); i<=model->rowCount();i++)
    {
      totfrai+=model->index(i,1).data().toDouble();
      totinvest+=model->index(i,2).data().toInt();
    }
    ui->totalCharge->setText(QString::number(totfrai));
    ui->totalInv->setText(QString::number(totinvest));
    ui->total->setText(QString::number(totfrai+totinvest));
    ui->viewBudget->setModel(model);
    ui->viewBudget->reset();
}
GestionBudget::~GestionBudget()
{
    delete ui;
}

void GestionBudget::on_detail_clicked()
{
    QItemSelectionModel *selection = ui->viewBudget->selectionModel();
    QModelIndexList selectionList = selection->selectedIndexes();
    if(!selectionList.isEmpty()){
        std::vector<QString> data;
        foreach (QModelIndex index, selectionList)
        {
            data.push_back(index.data().toString());
        }
        VisuBudget budget(manager->getId("site",data[0]),this);
        budget.exec();
    }else{
        QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour visualisation");
    }
}

void GestionBudget::on_retour_clicked()
{
    close();
}
