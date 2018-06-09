#include "invbudgetmanager.h"
#include <iostream>
#define q2c(string) string.toStdString()

InvBudgetManager::InvBudgetManager() : BudgetManager (){}


void InvBudgetManager::ajouterItem(QString nom, QString commentaire, int coutEstime, int idType,int IdSite){

    BudgetManager::ajouterItem(nom,IdSite,commentaire,1);

    query->prepare("INSERT INTO investissement values(@id_ITEM, :coutEstime, :idType)");
    query->bindValue(":coutEstime",coutEstime);
    query->bindValue(":idType", idType);
    std::cout<<q2c(sqlErreur(query,"ajouterItem", "InvBudgetManager"));
}
void InvBudgetManager::modifierItem(int id,QString nom,int estimationCout,int type, QString commentaire, int IdSite){

    BudgetManager::modifierItem(id,nom,IdSite,commentaire);

    query->prepare("UPDATE investissement SET estimationCout=:cout, id_TYPE=:type"
                   " WHERE id=:id");
    query->bindValue(":cout", estimationCout);
    query->bindValue(":type", type);
    query->bindValue(":id", id);
    std::cout<<q2c(sqlErreur(query,"modifierItem", "InvBudgetManager"));

}
