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
    manager = new BudgetManager;
    modelFF = new QStandardItemModel;
    modelInv = new QStandardItemModel;
}
VisuBudget::VisuBudget(int IdSite,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VisuBudget)
{
    ui->setupUi(this);
    manager = new BudgetManager;
    modelFF = new QStandardItemModel;
    modelInv = new QStandardItemModel;
    site=IdSite;
    afficherFF();
    afficherInv();
}
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
        std::vector<QVariant> data;
        foreach (QModelIndex index, selectionList)
        {
            data.push_back(index.data());
        }
        QString nom = manager->recupNom(data[0].toInt());
        int frequence = manager->getId("frequence",data[2].toString());
        int nature = manager->getId("nature",data[3].toString());
        QMessageBox::information(this,"test",QString::number(manager->coutMensuel(data[1].toDouble(), data[0].toInt())));
        ModFF modifierFF(data[0].toInt(),nom,manager->coutMensuel(data[1].toDouble(), data[0].toInt()),frequence,nature,data[4].toString(),site,this);
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
        std::vector<QVariant> data;
        foreach (QModelIndex index, selectionList)
        {
            data.push_back(index.data().toString());
        }
        QString nom = manager->recupNom(data[0].toInt());
        int nature = manager->getId("type",data[2].toString());
        ModInv modifierInv(data[0].toInt(),nom,data[1].toInt(),nature,data[3].toString(),site,this);
        modifierInv.exec();
    }else{
        QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour visualisation");
    }
}

void VisuBudget::on_supprimerInv_clicked()
{
    QItemSelectionModel *selection = ui->viewInvDetails->selectionModel();
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
