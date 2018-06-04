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
void Manager::connexionBase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("GPBS");
    if(db.open())
    {
       connecter=true;
    }
}
bool Manager::etat_connexion()
{
    return connecter;
}
bool Manager::verif_user(QString nom, QString mdp)
{
    query->prepare("SELECT * FROM UTILISATEUR WHERE Nom=:nom AND mdp=:mdp");
    query->bindValue(":nom", nom);
    query->bindValue(":mdp", mdp);
    query->exec();
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
    query->exec();

    query->prepare("CALL recup_id_"+table+"(:nom, @id_"+table+");");
    query->bindValue(":nom", nom);
    query->exec();

    query->prepare("SELECT @id_"+table+";");
    query->exec();
    if(query->next())
    {
        return query->value(0).toInt();
    }else{
        return 0;
    }
}
QString Manager::recupNom(int id){
    query->prepare("SELECT nom FROM ITEM WHERE id=:id");
    query->bindValue(":id",id);
    query->exec();
    QString nom;
    while(query->next()){
     nom= query->value(0).toString();
    }
    return nom;
}
std::vector<QString> Manager::remplissageCombo(QString colonne, QString table){
    query->prepare("SELECT "+colonne+" FROM "+table);
    query->exec();
    std::vector<QString> v;
    while(query->next()){
        v.push_back(query->value(0).toString());
    }
    return v;
}
void Manager::ajouterItem(QString nom, int site)
{

    query->prepare("INSERT INTO ITEM(nom, id_SITE) VALUES (:nom, :site)");
    query->bindValue(":nom", nom);
    query->bindValue(":site", site);
    query->exec();

    query->prepare("SET @id_ITEM=0;");
    query->exec();

    query->prepare("CALL recup_id_item(:nom, :site, @id_ITEM);");
    query->bindValue(":nom", nom);
    query->bindValue(":site", site);
    query->exec();

}
void Manager::modifierItem(int id, QString nom, int site)
{
    query->prepare("UPDATE ITEM SET nom=:nom, id_SITE=:site WHERE id=:id");
    query->bindValue(":id", id);
    query->bindValue(":nom",nom);
    query->bindValue(":site", site);
    query->exec();
}
void Manager::supprimerItem(int id)
    {
        query->prepare("DELETE FROM ITEM WHERE id=:id");
        query->bindValue(":id", id);
        query->exec();
    }


