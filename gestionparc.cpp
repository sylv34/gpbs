#include "gestionparc.h"
#include "ui_gestionparc.h"
#include "ajoutdevice.h"
#include "modificationdevice.h"
#include <vector>

GestionParc::GestionParc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionParc)
{
    ui->setupUi(this);
    manager = new MaterielManager;
    model = new QStandardItemModel;
    setFixedSize(QApplication::desktop()->availableGeometry(this).width(),QApplication::desktop()->availableGeometry(this).height());
    afficherListe();

}

GestionParc::~GestionParc()
{
    delete ui;
}

void GestionParc::afficherListe(){

    manager->liste_device(model);
    model->setHeaderData(0,Qt::Horizontal,"ID");
    model->setHeaderData(1,Qt::Horizontal,"NOM");
    model->setHeaderData(2,Qt::Horizontal,"TYPE");
    model->setHeaderData(3,Qt::Horizontal,"FABRIQUANT");
    model->setHeaderData(4,Qt::Horizontal,"MODELE");
    model->setHeaderData(5,Qt::Horizontal,"SN");
    model->setHeaderData(6,Qt::Horizontal,"IP");
    model->setHeaderData(7,Qt::Horizontal,"UTILISATION");
    model->setHeaderData(8,Qt::Horizontal,"PRECISION");
    model->setHeaderData(9,Qt::Horizontal,"AFFECTATION");
    model->setHeaderData(10,Qt::Horizontal,"VILLE");
    QHeaderView *headers = ui->viewParc->horizontalHeader();
    headers->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->viewParc->setModel(model);

    ui->viewParc->reset();
}

void GestionParc::on_ajouter_clicked()
{
    AjoutDevice fenAjout(this);
    fenAjout.exec();
    afficherListe();

}

void GestionParc::on_modifier_clicked()
{
   QItemSelectionModel *selection = ui->viewParc->selectionModel();
   QModelIndexList selectionList = selection->selectedIndexes();
   if(!selectionList.isEmpty()){
       std::vector<QString> data;
       foreach (QModelIndex index, selectionList)
       {
           data.push_back(index.data().toString());
       }
       ModificationDevice fenModif(data[0],data[1],data[2],data[3],data[4],data[5], data[6], data[7], data[8], data[9], this);
       fenModif.exec();
       afficherListe();
   }else{
       QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour modification");
   }
}

void GestionParc::on_retour_clicked()
{
    close();
}

void GestionParc::on_supprimer_clicked()
{
    QItemSelectionModel *selection = ui->viewParc->selectionModel();
   QModelIndexList selectionList = selection->selectedIndexes();
   if(!selectionList.isEmpty()){
       int confirmation = QMessageBox::question(this, "Confirmation", "Etes-vous sur de vouloir supprimer ce materiel ?", QMessageBox::Yes|QMessageBox::No);
       if(confirmation==QMessageBox::Yes)
       {
           int id=selectionList.value(0).data().toInt();
           manager->supprimerItem(id);
           QMessageBox::information(this, "Suppression", "Materiel supprimé");
       }

   }else{
       QMessageBox::critical(this,"Erreur", "Aucun materiel selectionné");
   }

}
