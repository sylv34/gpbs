#ifndef MANAGER_H
#define MANAGER_H

#include <QtCore>
#include <QtGui>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItemModel>
#include <QtWidgets>
#include <QString>
#include <QSqlError>

class Manager
{
public:
    Manager();
    bool etat_connexion();
    void connexionBase();
    bool verif_user(QString nom, QString mdp);

    void recupID(QString nomSite, QString nomType, QString nomUtilisation);
    int getId(QString table,QString nom);
    void ajouterItem(QString nom,int site);
    void modifierItem(int id, QString nom, int nomSite);
    std::vector<QString> remplissageCombo(QString table,QString colonne);
    void liste_detail_budgetInv(QString site, QStandardItemModel *model);
    QString recupNom(int id);
    void supprimerItem(int id);
    void ajouterInv(QString nomSite, QString nom, QString commentaire, int coutEstime, int idType);
    void modifInv(int id,QString nom,int estimationCout,int type, QString commentaire);

protected:
    bool connecter=false;
    QSqlQuery *query;
};

#endif // MANAGER_H
