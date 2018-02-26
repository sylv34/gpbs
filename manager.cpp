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

//------------CONNEXION ET AUTHENTIFICATION--------------

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
       query->prepare("SELECT * FROM ITEM");
       query->exec();
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

//------------GESTION DE PARC --------------

int Manager::getId(QString type, QString nom)
{
    query->prepare("SET @id_"+type+"=0;");
    query->exec();

    query->prepare("CALL recup_id_"+type+"(:nom, @id_"+type+");");
    query->bindValue(":nom", nom);
    query->exec();

    query->prepare("SELECT @id_"+type+";");
    query->exec();
    if(query->next())
    {
        return query->value(0).toInt();
    }
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
void Manager::modifierDevice(int id, QString nom, QString nomType, QString fabriquant, QString modele, QString numSerie, QString ip, QString nomUtilisation, QString precision, QString nomSite)
{
    getId("type",nomType);
    getId("utilisation", nomUtilisation);
    getId("site", nomSite);

    query->prepare("UPDATE ITEM SET nom=:nom, id_SITE=@id_SITE WHERE id=:id");
    query->bindValue(":id", id);
    query->bindValue(":nom",nom);
    query->exec();

    query->prepare("UPDATE MATERIEL SET id_TYPE=@id_TYPE, fabriquant=:fabriquant, modele=:modele, numserie=:num, ip=:ip, id_UTILISATION=@id_UTILISATION, precisionUtilisation=:precision WHERE id=:id;");
    query->bindValue(":fabriquant", fabriquant);
    query->bindValue(":modele", modele);
    query->bindValue(":num", numSerie);
    query->bindValue(":ip", ip);
    query->bindValue(":precision", precision);
    query->bindValue(":id", id);
    query->exec();
}

//------------GESTION BUDGET --------------

void Manager::liste_budget(QStandardItemModel *model)
{
    query->prepare("SELECT s.nom, SUM(c.coutAnnuel), SUM(iv.estimationCout)"
                   " FROM item it"
                   " INNER JOIN SITE s ON it.id_SITE=s.id"
                   " LEFT JOIN charge c ON c.id=it.id"
                   " LEFT JOIN INVESTISSEMENT iv ON iv.id=it.id"
                   " GROUP BY it.id_SITE");
    query->exec();
    int i(0);
    while (query->next()) {
        model->setItem(i,0,new QStandardItem(query->value(0).toString()));
        QString ff;
        model->setItem(i,1,new QStandardItem(ff.setNum(query->value(1).toDouble(),'f',2)));
        model->setItem(i,2,new QStandardItem(query->value(2).toString()));
        model->setItem(i,3,new QStandardItem(QString::number(query->value(1).toInt()+query->value(2).toInt())));
        i++;
    }
}
void Manager::liste_detail_budgetFF(QString site, QStandardItemModel *model)
{
    query->prepare("SELECT i.id, coutAnnuel, f.libelle, n.libelle, b.commentaire,f.coefMulti "
                   "FROM item i "
                   "INNER JOIN budget b ON i.id= b.id "
                   "INNER JOIN charge c ON b.id= c.id "
                   "INNER JOIN frequence f ON f.id= c.id_FREQUENCE "
                   "INNER JOIN nature n ON n.id = c.id_NATURE "
                   "INNER JOIN site s ON i.id_SITE= s.id "
                   "WHERE b.id_TYPEBUDGET = 0 "
                   "AND s.nom= :site");
    query->bindValue(":site", site);
    query->exec();

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
void Manager::liste_detail_budgetInv(QString site, QStandardItemModel *model)
{
    query->prepare("SELECT i.id, inv.estimationCout, t.libelle, b.commentaire "
                   "FROM item i "
                   "INNER JOIN budget b ON i.id= b.id "
                   "INNER JOIN investissement inv ON b.id= inv.id "
                   "INNER JOIN type t ON inv.id_TYPE= t.id "
                   "INNER JOIN site s ON i.id_SITE= s.id "
                   "WHERE b.id_TYPEBUDGET = 1 "
                   "AND s.nom= :site");
    query->bindValue(":site", site);
    query->exec();

    int i(0);
    while (query->next()) {
        model->setItem(i,0,new QStandardItem(query->value(0).toString()));
        model->setItem(i,1,new QStandardItem(query->value(1).toString()));
        model->setItem(i,2,new QStandardItem(query->value(2).toString()));
        model->setItem(i,3,new QStandardItem(query->value(3).toString()));
        i++;
    }

}
void Manager::ajoutCharge(QString nom, double coutAnnuel, QString frequence, QString nature, QString commentaire, QString nomSite)
{
    getId("site",nomSite);
    getId("frequence", frequence);
    getId("nature", nature);

    query->prepare("INSERT INTO ITEM(nom, id_SITE) VALUES (:nom, @id_site)");
    query->bindValue(":nom", nom);
    query->exec();

    query->prepare("SET @id_ITEM=0;");
    query->exec();

    query->prepare("CALL recup_id_item(:nom, @id_SITE, @id_ITEM);");
    query->bindValue(":nom", nom);
    query->exec();


    query->prepare("INSERT INTO budget "
                   "VALUES(@id_ITEM, 0, :commentaire)");
    query->bindValue(":commentaire", commentaire);
    query->exec();

    query->prepare("INSERT INTO CHARGE values(@id_ITEM, @id_NATURE, @id_FREQUENCE, :coutAnnuel)");
    query->bindValue(":coutAnnuel",coutAnnuel);
    query->exec();

}
void Manager::modifCharge(int id, QString nom, double coutAnnuel, QString frequence, QString nature, QString commentaire)
{
    getId("frequence",frequence);
    getId("nature", nature);

    query->prepare("UPDATE ITEM SET nom=:nom WHERE id=:id");
    query->bindValue(":id", id);
    query->bindValue(":nom",nom);
    query->exec();

    query->prepare("UPDATE BUDGET SET commentaire=:commentaire WHERE id=:id");
    query->bindValue(":commentaire", commentaire);
    query->bindValue(":id", id);
    query->exec();

    query->prepare("UPDATE CHARGE SET id_nature=@id_NATURE, id_frequence=@id_FREQUENCE, coutAnnuel=:coutAnnuel "
                   "WHERE id=:id");
    query->bindValue(":coutAnnuel",coutAnnuel);
    query->bindValue(":id", id);
    query->exec();
}
void Manager::ajouterInv(QString nomSite, QString nom, QString commentaire, int coutEstime, int idType){
    getId("site",nomSite);

    query->prepare("INSERT INTO ITEM(nom, id_SITE) VALUES (:nom, @id_site)");
    query->bindValue(":nom", nom);
    query->exec();

    query->prepare("SET @id_ITEM=0;");
    query->exec();

    query->prepare("CALL recup_id_item(:nom, @id_SITE, @id_ITEM);");
    query->bindValue(":nom", nom);
    query->exec();


    query->prepare("INSERT INTO budget "
                   "VALUES(@id_ITEM, 1, :commentaire)");
    query->bindValue(":commentaire", commentaire);
    query->exec();

    query->prepare("INSERT INTO INVESTISSEMENT values(@id_ITEM, :coutEstime, :idType)");
    query->bindValue(":coutEstime",coutEstime);
    query->bindValue(":idType", idType);
    query->exec();
    std::cout<<q2c(query->lastError().text());

}
void Manager::modifInv(int id,QString nom,int estimationCout,int type, QString commentaire){

    query->prepare("UPDATE ITEM SET nom=:nom WHERE id=:id");
    query->bindValue(":id", id);
    query->bindValue(":nom",nom);
    query->exec();

    query->prepare("UPDATE BUDGET SET commentaire=:commentaire WHERE id=:id");
    query->bindValue(":commentaire", commentaire);
    query->bindValue(":id", id);
    query->exec();

    query->prepare("UPDATE INVESTISSEMENT SET estimationCout=:cout, id_TYPE=:type"
                   " WHERE id=:id");
    query->bindValue(":cout", estimationCout);
    query->bindValue(":type", type);
    query->bindValue(":id", id);
    query->exec();
}

//------------ AUTRE --------------

void Manager::supprimerItem(int id)
    {
        query->prepare("DELETE FROM ITEM WHERE id=:id");
        query->bindValue(":id", id);
        query->exec();
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
