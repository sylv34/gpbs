#include "visusite.h"
#include "ui_visusite.h"

VisuSite::VisuSite(int idSite, QString nom, QString adresse, QString cp, QString ville, QString siren, QString bic,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VisuSite)
{
    ui->setupUi(this);
    managerSite = new SiteManager;
    managerBudget = new BudgetManager;
    modelMateriel = new QStandardItemModel;
    modelFF = new QStandardItemModel;
    modelInv=new QStandardItemModel;

    site = idSite;
    ui->nom->setText(nom);
    ui->labelnom->setText(nom);
    ui->adresse->setText(adresse);
    ui->cp->setText(cp);
    ui->ville->setText(ville);
    ui->sirenBic->setText(siren);
    ui->siret->setText(siren+bic);

    //tableView partie materiel
    managerSite->listeMateriel(site, modelMateriel);
    modelMateriel->setHeaderData(0,Qt::Horizontal,"ID");
    modelMateriel->setHeaderData(1,Qt::Horizontal,"NOM");
    modelMateriel->setHeaderData(2,Qt::Horizontal,"TYPE");
    modelMateriel->setHeaderData(3,Qt::Horizontal,"FABRIQUANT");
    modelMateriel->setHeaderData(4,Qt::Horizontal,"MODELE");
    modelMateriel->setHeaderData(5,Qt::Horizontal,"SN");
    modelMateriel->setHeaderData(6,Qt::Horizontal,"IP");
    modelMateriel->setHeaderData(7,Qt::Horizontal,"UTILISATION");
    modelMateriel->setHeaderData(8,Qt::Horizontal,"PRECISION");
    modelMateriel->setHeaderData(9,Qt::Horizontal,"AFFECTATION");
    modelMateriel->setHeaderData(10,Qt::Horizontal,"VILLE");
    QHeaderView *headers = ui->materielView->horizontalHeader();
    headers->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->materielView->setModel(modelMateriel);

    //tableView partie budget charges
    managerBudget->liste_detail_budgetFF(site, modelFF);
    modelFF->setHeaderData(0,Qt::Horizontal,"ID");
    modelFF->setHeaderData(1,Qt::Horizontal,"COUT ANNUEL");
    modelFF->setHeaderData(2,Qt::Horizontal,"FREQUENCE");
    modelFF->setHeaderData(3,Qt::Horizontal,"NATURE");
    modelFF->setHeaderData(4,Qt::Horizontal,"COMMENTAIRE");
    ui->ffView->setModel(modelFF);
    ui->ffView->resizeColumnsToContents();

    //tableView partie budget investissement

    managerBudget->liste_detail_budgetInv(site,modelInv);
    modelInv->setHeaderData(0,Qt::Horizontal,"ID");
    modelInv->setHeaderData(1,Qt::Horizontal,"ESTIMATION COUT");
    modelInv->setHeaderData(2,Qt::Horizontal,"TYPE MATERIEL");
    modelInv->setHeaderData(3,Qt::Horizontal,"COMMENTAIRE");

    ui->invView->setModel(modelInv);
    ui->invView->resizeColumnsToContents();

}

VisuSite::~VisuSite()
{
    delete ui;
}
