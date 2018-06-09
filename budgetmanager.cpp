#include "budgetmanager.h"
#include <iostream>
#define q2c(string) string.toStdString()
BudgetManager::BudgetManager() : Manager(){}

void BudgetManager::liste_budget(QStandardItemModel *model)
{
    query->prepare("SELECT s.nom, SUM(c.coutAnnuel), SUM(iv.estimationCout)"
                   " FROM item it"
                   " INNER JOIN site s ON it.id_SITE=s.id"
                   " LEFT JOIN charge c ON c.id=it.id"
                   " LEFT JOIN investissement iv ON iv.id=it.id"
                   " GROUP BY it.id_SITE");
    std::cout<<q2c(sqlErreur(query,"liste_budget", "BudgetManager"));
    int i(0);
    while (query->next()) {
        model->setItem(i,0,new QStandardItem(query->value(0).toString()));
        QString ff;
        model->setItem(i,1,new QStandardItem(ff.setNum(query->value(1).toDouble(),'f',2)));
        model->setItem(i,2,new QStandardItem(query->value(2).toString()));
        model->setItem(i,3,new QStandardItem(QString::number(query->value(1).toInt()+query->value(2).toInt())));
        i++;
    }
    query->prepare("SELECT nom"
                   " FROM site"
                   " WHERE id NOT IN (select id_SITE from item)");
    std::cout<<q2c(sqlErreur(query,"liste_budget>SansBudget", "BudgetManager"));
    while (query->next()) {
        model->setItem(i,0,new QStandardItem(query->value(0).toString()));
        QString ff;
        model->setItem(i,1,new QStandardItem(QString::number(0)));
        model->setItem(i,2,new QStandardItem(QString::number(0)));
        model->setItem(i,3,new QStandardItem(QString::number(0)));
        i++;
    }
}
void BudgetManager::liste_detail_budgetInv(int IdSite, QStandardItemModel *model)
{
    query->prepare("SELECT i.id, inv.estimationCout, t.libelle, b.commentaire "
                   "FROM item i "
                   "INNER JOIN budget b ON i.id= b.id "
                   "INNER JOIN investissement inv ON b.id= inv.id "
                   "INNER JOIN type t ON inv.id_TYPE= t.id "
                   "INNER JOIN site s ON i.id_SITE= s.id "
                   "WHERE b.id_TYPEBUDGET = 1 "
                   "AND s.id= :site");
    query->bindValue(":site", IdSite);
    std::cout<<q2c(sqlErreur(query,"liste_detail_budgetInv", "BudgetManager"));
    int i(0);
    while (query->next()) {
        model->setItem(i,0,new QStandardItem(query->value(0).toString()));
        model->setItem(i,1,new QStandardItem(query->value(1).toString()));
        model->setItem(i,2,new QStandardItem(query->value(2).toString()));
        model->setItem(i,3,new QStandardItem(query->value(3).toString()));
        i++;
    }

}
void BudgetManager::liste_detail_budgetFF(int site, QStandardItemModel *model)
{
    query->prepare("SELECT i.id, coutAnnuel, f.libelle, n.libelle, b.commentaire,f.coefMulti "
                   "FROM item i "
                   "INNER JOIN budget b ON i.id= b.id "
                   "INNER JOIN charge c ON b.id= c.id "
                   "INNER JOIN frequence f ON f.id= c.id_FREQUENCE "
                   "INNER JOIN nature n ON n.id = c.id_NATURE "
                   "INNER JOIN site s ON i.id_SITE= s.id "
                   "WHERE b.id_TYPEBUDGET = 0 "
                   "AND s.id= :site");
    query->bindValue(":site", site);
    std::cout<<q2c(sqlErreur(query,"liste_detail_budgetFF", "BudgetManager"));
    int i(0);
    while (query->next()) {
        model->setItem(i,0,new QStandardItem(query->value(0).toString()));
        model->setItem(i,1,new QStandardItem(query->value(1).toString()));
        model->setItem(i,2,new QStandardItem(query->value(2).toString()));
        model->setItem(i,3,new QStandardItem(query->value(3).toString()));
        model->setItem(i,4,new QStandardItem(query->value(4).toString()));
        i++;
    }

}
void BudgetManager::ajouterItem(QString nom, int site, QString commentaire, int IdTypeItem){

    Manager::ajouterItem(nom,site);

    query->prepare("INSERT INTO budget "
                   "VALUES(@id_ITEM, :typeItem, :commentaire)");
    query->bindValue(":commentaire", commentaire);
    query->bindValue(":typeItem", IdTypeItem);
    std::cout<<q2c(sqlErreur(query,"ajouterItem", "BudgetManager"));
}
double BudgetManager::coutMensuel(double coutAnnuel, int idItem){

    //recupération de l'id ancienne frequence
    query->prepare("select id_FREQUENCE from charge where id = :idItem");
    query->bindValue(":idItem", idItem);
    std::cout<<q2c(sqlErreur(query,"coutMensuel>idOldFrequence", "BudgetManager"));
    int oldFrequence = 1;
    if(query->next()){
        oldFrequence = query->value(0).toInt();
    }else{
        std::cout<<"Pas d'id frequence trouvé";
    }

    //recupération du coefMult de l'ancienne frequence
    query->prepare("select coefMulti from frequence where id = :frequence");
    query->bindValue(":frequence", oldFrequence);
    std::cout<<q2c(sqlErreur(query,"coutMensuel>coefOldFrequence", "BudgetManager"));
    double oldCoef = 1;
    if(query->next()){
        oldCoef = query->value(0).toDouble();
    }else{
        std::cout<<"Pas de coef frequence trouvé";
    }

    return coutAnnuel/oldCoef;


}
double BudgetManager::coutAnnuel(double cout, int frequence){

    query->prepare("select coefMulti from frequence where id = :frequence");
    query->bindValue(":frequence", frequence);
    std::cout<<q2c(sqlErreur(query,"calculAnnuel", "BudgetManager"));

    if(query->next()){
        return (cout*query->value(0).toDouble());
    }

}
void BudgetManager::modifierItem(int id,QString nom, int site, QString commentaire){

    Manager::modifierItem(id,nom,site);

    query->prepare("UPDATE budget SET commentaire=:commentaire WHERE id=:id");
    query->bindValue(":commentaire", commentaire);
    query->bindValue(":id", id);
    std::cout<<q2c(sqlErreur(query,"modifierItem", "BudgetManager"));
}
