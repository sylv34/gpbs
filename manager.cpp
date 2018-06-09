#include "manager.h"
#include "QMessageBox"
#include "gestionparc.h"
#include <QDebug>
#include <iostream>

#define q2c(string) string.toStdString()

Manager::Manager()
{
    query =  new QSqlQuery;

}
QString Manager::sqlErreur(QSqlQuery *query, QString methode, QString classe){
    return (!query->exec())? classe+"::"+methode+" "+query->lastError().text() :"";
}
void Manager::connexionBase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.30.1");
    db.setUserName("user");
    db.setPassword("root");
    db.setDatabaseName("gpbs");
    if(db.open())
    {
       connecter=true;

    }else{
        std::cout << "Une erreur s'est produite à la connexion :" << std::endl << q2c(query->lastError().text()) << std::endl;
    }
}
bool Manager::etat_connexion()
{
    return connecter;
}
bool Manager::verif_user(QString nom, QString mdp)
{
    query->prepare("SELECT * FROM utilisateur WHERE Nom=:nom AND mdp=:mdp");
    query->bindValue(":nom", nom);
    query->bindValue(":mdp", mdp);
    std::cout<<q2c(sqlErreur(query,"verif_user", "Manager"));
    if(query->next())
    {
        return true;
    }else{
        return false;
    }
}
int Manager::getId(QString table,QString nom)
{
    query->prepare("SET @id_"+table+"=0;");
    std::cout<<q2c(sqlErreur(query,"getId>SET id", "Manager"));

    query->prepare("CALL recup_id_"+table+"(:nom, @id_"+table+");");
    query->bindValue(":nom", nom);
    std::cout<<q2c(sqlErreur(query,"getId>Call", "Manager"));

    query->prepare("SELECT @id_"+table+";");
    std::cout<<q2c(sqlErreur(query,"getId>select", "Manager"));
    if(query->next())
    {
        return query->value(0).toInt();
    }else{
        return 0;
    }
}
QString Manager::recupNom(int id){
    query->prepare("SELECT nom FROM item WHERE id=:id");
    query->bindValue(":id",id);
    std::cout<<q2c(sqlErreur(query,"recupNom", "Manager"));
    QString nom;
    while(query->next()){
     nom= query->value(0).toString();
    }
    return nom;
}
std::vector<QString> Manager::remplissageCombo(QString colonne, QString table){
    query->prepare("SELECT "+colonne+" FROM "+table);
    std::cout<<q2c(sqlErreur(query,"remplissageCombo", "Manager"));
    std::vector<QString> v;
    while(query->next()){
        v.push_back(query->value(0).toString());
    }
    return v;
}
void Manager::ajouterItem(QString nom, int site)
{

    query->prepare("INSERT INTO item(nom, id_SITE) VALUES (:nom, :site)");
    query->bindValue(":nom", nom);
    query->bindValue(":site", site);
    std::cout<<q2c(sqlErreur(query,"ajouterItem>insert", "Manager"));

    query->prepare("SET @id_ITEM=0;");
    std::cout<<q2c(sqlErreur(query,"ajouterItem>set id", "Manager"));

    query->prepare("CALL recup_id_item(:nom, :site, @id_ITEM);");
    query->bindValue(":nom", nom);
    query->bindValue(":site", site);
    std::cout<<q2c(sqlErreur(query,"ajouterItem > recupid", "Manager"));

}
void Manager::modifierItem(int id, QString nom, int site)
{
    query->prepare("UPDATE item SET nom=:nom, id_SITE=:site WHERE id=:id");
    query->bindValue(":id", id);
    query->bindValue(":nom",nom);
    query->bindValue(":site", site);
    std::cout<<q2c(sqlErreur(query,"modifierItem", "Manager"));
}
void Manager::supprimerItem(int id)
    {
        query->prepare("DELETE FROM item WHERE id=:id");
        query->bindValue(":id", id);
        std::cout<<q2c(sqlErreur(query,"supprimerItem", "Manager"));
    }


