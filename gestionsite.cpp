#include "gestionsite.h"
#include "ui_gestionsite.h"

GestionSite::GestionSite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GestionSite)
{
    ui->setupUi(this);
    manager = new SiteManager;
    model = new QStandardItemModel;
    setFixedSize(800,600);
    afficherListe();
}
void GestionSite::afficherListe(){
    manager->liste_site(model);

    QHeaderView *headers = ui->viewSite->horizontalHeader();
    headers->setSectionResizeMode(QHeaderView::ResizeToContents);
    model->setHeaderData(0,Qt::Horizontal,"ID");
    model->setHeaderData(1,Qt::Horizontal,"NOM");
    model->setHeaderData(2,Qt::Horizontal,"ADRESSE");
    model->setHeaderData(3,Qt::Horizontal,"CP");
    model->setHeaderData(4,Qt::Horizontal,"VILLE");
    model->setHeaderData(5,Qt::Horizontal,"SIREN");
    model->setHeaderData(6,Qt::Horizontal,"NIC");
    ui->viewSite->setModel(model);

}
GestionSite::~GestionSite()
{
    delete ui;
}

void GestionSite::on_detail_clicked()
{
    QItemSelectionModel *selection = ui->viewSite->selectionModel();
    QModelIndexList selectionList = selection->selectedIndexes();
    if(!selectionList.isEmpty()){
        std::vector<QString> data;
        foreach (QModelIndex index, selectionList)
        {
            data.push_back(index.data().toString());
        }

        VisuSite site(data[0].toInt(),data[1],data[2],data[3],data[4],data[5],data[6],this);
        site.exec();
    }else{
        QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour visualisation");
    }
}

void GestionSite::on_ajouter_clicked()
{
    AjoutSite fenAjout(this);
    fenAjout.exec();
}

void GestionSite::on_modifier_clicked()
{
    QItemSelectionModel *selection = ui->viewSite->selectionModel();
    QModelIndexList selectionList = selection->selectedIndexes();
    if(!selectionList.isEmpty()){
        std::vector<QVariant> data;
        foreach (QModelIndex index, selectionList)
        {
            data.push_back(index.data());
        }
        ModifSite fenModif(data[0].toInt(),data[1].toString(),data[2].toString(),data[3].toString(),data[4].toString(),data[5].toString(), data[6].toString(),this);
        fenModif.exec();
        afficherListe();
    }else{
       QMessageBox::warning(this,"Attention", "Séléctionnez une ligne pour modification");
   }
}
