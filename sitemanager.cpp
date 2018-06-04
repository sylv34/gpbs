#include "sitemanager.h"

SiteManager::SiteManager() : Manager(){}

void SiteManager::liste_site(QStandardItemModel *model){
    query->prepare("SELECT id, nom, adresse, cp, ville, siren, nic FROM SITE");
    query->exec();
    int i(0);
    while (query->next()) {
        for(int j(0);j<7;j++){
            model->setItem(i,j,new QStandardItem(query->value(j).toString()));
        }
        i++;
    }
}
void SiteManager::listeMateriel(int id, QStandardItemModel *model)
{
    query->prepare("SELECT m.id, i.nom, t.libelle, m.fabriquant, m.modele, m.numSerie, m.ip, u.libelle, precisionUtilisation"
                  " FROM materiel m"
                  " INNER JOIN ITEM i ON i.id=m.id"
                  " INNER JOIN TYPE t ON m.id_TYPE=t.id"
                  " INNER JOIN SITE s ON i.id_SITE= s.id"
                  " INNER JOIN UTILISATION u ON m.id_UTILISATION=u.id"
                  " WHERE s.id=:id"
                  " ORDER BY id_TYPE");
    query->bindValue(":id",id);
    query->exec();
    int i(0);
    while (query->next()) {
        model->setItem(i,0,new QStandardItem(query->value(0).toString()));
        model->setItem(i,1,new QStandardItem(query->value(1).toString()));
        model->setItem(i,2,new QStandardItem(query->value(2).toString()));
        model->setItem(i,3,new QStandardItem(query->value(3).toString()));
        model->setItem(i,4,new QStandardItem(query->value(4).toString()));
        model->setItem(i,5,new QStandardItem(query->value(5).toString()));
        model->setItem(i,6,new QStandardItem(query->value(6).toString()));
        model->setItem(i,7,new QStandardItem(query->value(7).toString()));
        model->setItem(i,8,new QStandardItem(query->value(8).toString()));
        i++;
    }
}
void SiteManager::ajouterSite(QString nom, QString adresse, QString cp, QString ville, QString siren, QString bic){
    query->prepare("INSERT INTO SITE (nom, adresse, cp, ville, siren, nic) VALUES(:nom,:adresse,:cp,:ville,:siren,:bic)");
    query->bindValue(":nom", nom);
    query->bindValue(":adresse", adresse);
    query->bindValue(":cp", cp);
    query->bindValue(":ville", ville);
    query->bindValue(":siren", siren);
    query->bindValue(":bic", bic);
}
