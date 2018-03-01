#include "materielmanager.h"


MaterielManager::MaterielManager() : Manager(){}

void MaterielManager::liste_device(QStandardItemModel *model)
{
    query->prepare("SELECT m.id, i.nom, t.libelle, m.fabriquant, m.modele, m.numSerie, m.ip, u.libelle, precisionUtilisation, s.nom, s.ville"
                  " FROM materiel m"
                  " INNER JOIN ITEM i ON i.id=m.id"
                  " INNER JOIN TYPE t ON m.id_TYPE=t.id"
                  " INNER JOIN SITE s ON i.id_SITE= s.id"
                  " INNER JOIN UTILISATION u ON m.id_UTILISATION=u.id"
                  " ORDER BY id_TYPE");
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
        model->setItem(i,9,new QStandardItem(query->value(9).toString()));
        model->setItem(i,10,new QStandardItem(query->value(10).toString()));
        i++;
    }
}
void MaterielManager::ajouterItem(QString nom, int type, QString fabriquant, QString modele, QString numSerie, QString ip, int utilisation, QString precision, int site){

    Manager::ajouterItem(nom,site);


    query->prepare("INSERT INTO materiel"
                   " VALUES(@id_ITEM, :type, :fabriquant, :modele, :numserie, :ip, :utilisation, :precision)");
    query->bindValue(":type", type);
    query->bindValue(":fabriquant", fabriquant);
    query->bindValue(":modele", modele);
    query->bindValue(":numserie", numSerie);
    query->bindValue(":ip", ip);
    query->bindValue(":utilisation", utilisation);
    query->bindValue(":precision", precision);
    query->exec();
}
void MaterielManager::modifierItem(int id, QString nom, int type, QString fabriquant, QString modele, QString numSerie, QString ip, int utilisation, QString precision, int site)
{

    Manager::modifierItem(id,nom,site);

    query->prepare("UPDATE MATERIEL SET id_TYPE=:type, fabriquant=:fabriquant, modele=:modele, numserie=:num, ip=:ip, id_UTILISATION=:utilisation, precisionUtilisation=:precision WHERE id=:id;");
    query->bindValue(":fabriquant", fabriquant);
    query->bindValue(":modele", modele);
    query->bindValue(":num", numSerie);
    query->bindValue(":ip", ip);
    query->bindValue(":precision", precision);
    query->bindValue(":utilisation", utilisation);
    query->bindValue(":type", type);
    query->bindValue(":id", id);
    query->exec();
}
