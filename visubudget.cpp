#include "visubudget.h"
#include "ajoutff.h"
#include "ajoutinv.h"
#include "modff.h"
#include "modinv.h"
#include "ui_visubudget.h"

VisuBudget::VisuBudget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VisuBudget)
{
    ui->setupUi(this);
    manager = new Manager;
    modelFF = new QStandardItemModel;
    modelInv = new QStandardItemModel;
}
VisuBudget::VisuBudget(QString nomSite,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VisuBudget)
{
    ui->setupUi(this);
    manager = new Manager;
    modelFF = new QStandardItemModel;
    modelInv = new QStandardItemModel;
    site=nomSite;
    afficherFF();
    afficherInv();
}

/*------Frais de fonctionnement-------*/

void VisuBudget::afficherFF(){

    manager->liste_detail_budgetFF(site, modelFF);
    modelFF->setHeaderData(0,Qt::Horizontal,"ID");
    modelFF->setHeaderData(1,Qt::Horizontal,"COUT ANNUEL");
    modelFF->setHeaderData(2,Qt::Horizontal,"FREQUENCE");
    modelFF->setHeaderData(3,Qt::Horizontal,"NATURE");
    modelFF->setHeaderData(4,Qt::Horizontal,"COMMENTAIRE");
    ui->viewFFDetails->setModel(modelFF);
    ui->viewFFDetails->resizeColumnsToContents();

}

VisuBudget::~VisuBudget()
{
    delete ui;
}

void VisuBudget::on_ajouterFF_clicked()
{
    AjoutFF ajouterff(site,this);
    ajouterff.exec();
}

void VisuBudget::on_modifierFF_clicked()
{
    QItemSelectionModel *selection = ui->viewFFDetails->selectionModel();
    QModelIndexList selectionList = selection->selectedIndexes();
    if(!selectionList.isEmpty()){
        std::vector<QString> data;
        foreach (QModelIndex index, selectionList)
        {
            data.push_back(index.data().toString());
        }
        ModFF modifierFF(data[0],manager->recupNom(data[0].toInt()),data[1],data[2],data[3],data[4],this);
        modifierFF.exec();
    }else{
        QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour visualisation");
    }
}

void VisuBudget::on_supprimerFF_clicked()
{
    QItemSelectionModel *selection = ui->viewFFDetails->selectionModel();
    QModelIndexList selectionList = selection->selectedIndexes();

    if(!selectionList.isEmpty()){
        int confirmation = QMessageBox::question(this, "Confirmation", "Etes-vous sur de vouloir supprimer cette charge ?", QMessageBox::Yes|QMessageBox::No);
        if(confirmation==QMessageBox::Yes){
            int id=selectionList.value(0).data().toInt();
            manager->supprimerItem(id);
            QMessageBox::information(this,"Charge supprimée", "La charge à bien été supprimée");
        }
    }else{
        QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour visualisation");
    }
}

/*-------Investissement------*/

void VisuBudget::afficherInv(){
    manager->liste_detail_budgetInv(site,modelInv);
    modelInv->setHeaderData(0,Qt::Horizontal,"ID");
    modelInv->setHeaderData(1,Qt::Horizontal,"ESTIMATION COUT");
    modelInv->setHeaderData(2,Qt::Horizontal,"TYPE MATERIEL");
    modelInv->setHeaderData(3,Qt::Horizontal,"COMMENTAIRE");

    ui->viewInvDetails->setModel(modelInv);
    ui->viewInvDetails->resizeColumnsToContents();
    ui->viewInvDetails->reset();
}

void VisuBudget::on_ajouterInv_clicked()
{
    AjoutInv ajouterinv(site,this);
    ajouterinv.exec();
}

void VisuBudget::on_modifierInv_clicked()
{
    QItemSelectionModel *selection = ui->viewInvDetails->selectionModel();
    QModelIndexList selectionList = selection->selectedIndexes();
    if(!selectionList.isEmpty()){
        std::vector<QString> data;
        foreach (QModelIndex index, selectionList)
        {
            data.push_back(index.data().toString());
        }

        ModInv modifierInv(data[0].toInt(),manager->recupNom(data[0].toInt()),data[1].toInt(),data[2].toInt(),data[3],this);
        modifierInv.exec();
    }else{
        QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour visualisation");
    }
}

void VisuBudget::on_supprimerInv_clicked()
{
    QItemSelectionModel *selection = ui->viewFFDetails->selectionModel();
    QModelIndexList selectionList = selection->selectedIndexes();

    if(!selectionList.isEmpty()){
        int confirmation = QMessageBox::question(this, "Confirmation", "Etes-vous sur de vouloir supprimer cet investissement ?", QMessageBox::Yes|QMessageBox::No);
        if(confirmation==QMessageBox::Yes){
            int id=selectionList.value(0).data().toInt();
            manager->supprimerItem(id);
            QMessageBox::information(this,"Charge supprimée", "La charge à bien été supprimée");
        }
    }else{
        QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour visualisation");
    }
}
