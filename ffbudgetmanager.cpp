#include "ffbudgetmanager.h"

FFBudgetManager::FFBudgetManager() : BudgetManager (){}
void FFBudgetManager::ajouterItem(QString nom, double coutAnnuel, int frequence, int nature, QString commentaire, int site){

    BudgetManager::ajouterItem(nom,site,commentaire,0);

    query->prepare("INSERT INTO CHARGE values(@id_ITEM, :nature, :frequence, :coutAnnuel)");
    query->bindValue(":nature",nature);
    query->bindValue(":frequence",frequence);
    query->bindValue(":coutAnnuel",coutAnnuel);
    query->exec();
}
void FFBudgetManager::modifierItem(int id, QString nom, double coutAnnuel, int frequence, int nature, QString commentaire, int site){

    BudgetManager::modifierItem(id,nom,site,commentaire);

    query->prepare("UPDATE CHARGE SET id_nature=:nature, id_frequence=:frequence, coutAnnuel=:coutAnnuel "
                   "WHERE id=:id");
    query->bindValue(":coutAnnuel",coutAnnuel);
    query->bindValue(":id", id);
    query->bindValue(":nature", nature);
    query->bindValue(":frequence", frequence);
    query->exec();
}
