#include "sitemanager.h"
#include <iostream>
#define q2c(string) string.toStdString()

SiteManager::SiteManager() : Manager(){}

void SiteManager::liste_site(QStandardItemModel *model){
    query->prepare("SELECT id, nom, adresse, cp, ville, siren, nic FROM site");
    std::cout<<q2c(sqlErreur(query,"liste_site", "SiteManager"));
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
                  " INNER JOIN item i ON i.id=m.id"
                  " INNER JOIN type t ON m.id_TYPE=t.id"
                  " INNER JOIN site s ON i.id_SITE= s.id"
                  " INNER JOIN utilisation u ON m.id_UTILISATION=u.id"
                  " WHERE s.id=:id"
                  " ORDER BY id_TYPE");
    query->bindValue(":id",id);
    std::cout<<q2c(sqlErreur(query,"listeMateriel", "SiteManager"));
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
void SiteManager::ajouterSite(QString nom, QString adresse, QString cp, QString ville, QString siren, QString nic){
    query->prepare("INSERT INTO site (nom, adresse, cp, ville, siren, nic) VALUES(:nom,:adresse,:cp,:ville,:siren,:nic)");
    query->bindValue(":nom", nom);
    query->bindValue(":adresse", adresse);
    query->bindValue(":cp", cp);
    query->bindValue(":ville", ville);
    query->bindValue(":siren", siren);
    query->bindValue(":nic", nic);
    std::cout<<q2c(sqlErreur(query,"ajouterSite", "SiteManager"));
}
void SiteManager::modifierSite(int id,QString nom, QString adresse, QString cp, QString ville, QString siren, QString nic){
    query->prepare("UPDATE site SET nom=:nom, adresse=:adresse, cp=:cp, ville=:ville, siren=:siren, nic=:nic WHERE id=:id;");
    query->bindValue(":id", id);
    query->bindValue(":nom", nom);
    query->bindValue(":adresse", adresse);
    query->bindValue(":cp", cp);
    query->bindValue(":ville", ville);
    query->bindValue(":siren", siren);
    query->bindValue(":nic", nic);
    std::cout<<q2c(sqlErreur(query,"modifierSite", "SiteManager"));
}
