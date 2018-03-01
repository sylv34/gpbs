#include "invbudgetmanager.h"

InvBudgetManager::InvBudgetManager() : BudgetManager (){}


void InvBudgetManager::ajouterItem(QString nom, QString commentaire, int coutEstime, int idType,int IdSite){

    BudgetManager::ajouterItem(nom,IdSite,commentaire);

    query->prepare("INSERT INTO INVESTISSEMENT values(@id_ITEM, :coutEstime, :idType)");
    query->bindValue(":coutEstime",coutEstime);
    query->bindValue(":idType", idType);
    query->exec();
}
void InvBudgetManager::modifierItem(int id,QString nom,int estimationCout,int type, QString commentaire, int IdSite){

    BudgetManager::modifierItem(id,nom,IdSite,commentaire);

    query->prepare("UPDATE INVESTISSEMENT SET estimationCout=:cout, id_TYPE=:type"
                   " WHERE id=:id");
    query->bindValue(":cout", estimationCout);
    query->bindValue(":type", type);
    query->bindValue(":id", id);
    query->exec();

}
