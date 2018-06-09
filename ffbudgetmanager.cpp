#include "ffbudgetmanager.h"
#include <iostream>
#define q2c(string) string.toStdString()

FFBudgetManager::FFBudgetManager() : BudgetManager (){}


void FFBudgetManager::ajouterItem(QString nom, double cout, int frequence, int nature, QString commentaire, int site){

    BudgetManager::ajouterItem(nom,site,commentaire,0);

    double coutAnnuel = BudgetManager::coutAnnuel(cout,frequence);
    query->prepare("INSERT INTO charge values(@id_ITEM, :nature, :frequence, :coutAnnuel)");
    query->bindValue(":nature",nature);
    query->bindValue(":frequence",frequence);
    query->bindValue(":coutAnnuel",coutAnnuel);
    std::cout<<q2c(sqlErreur(query,"ajouterItem", "FFBudgetManager"));
}
void FFBudgetManager::modifierItem(int id, QString nom, double cout, int frequence, int nature, QString commentaire, int site){

    BudgetManager::modifierItem(id,nom,site,commentaire);
    double coutAnnuel = BudgetManager::coutAnnuel(cout,frequence);
    query->prepare("UPDATE charge SET id_nature=:nature, id_frequence=:frequence, coutAnnuel=:coutAnnuel "
                   "WHERE id=:id");
    query->bindValue(":coutAnnuel",coutAnnuel);
    query->bindValue(":id", id);
    query->bindValue(":nature", nature);
    query->bindValue(":frequence", frequence);
    std::cout<<q2c(sqlErreur(query,"modifierItem", "FFBudgetManager"));
}
