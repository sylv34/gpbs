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
    void liste_device(QStandardItemModel *model);
    void liste_budget(QStandardItemModel *model);
    void recupID(QString nomSite, QString nomType, QString nomUtilisation);
    int getId(QString type, QString nom);
    QString ajouterDevice(QString nom, QString nomType, QString fabriquant, QString modele, QString numSerie, QString ip, QString nomUtilisation, QString precision, QString nomSite);
    void modifierDevice(int id, QString nom, QString nomUtilisation, QString nomType, QString fabriquant, QString modele, QString num, QString ip, QString precision, QString nomSite);
    void supprimerDevice(int id);
    std::vector<QString> remplissageCombo(QString table,QString colonne);
    void liste_detail_budgetFF(QString site, QStandardItemModel *model);
    void liste_detail_budgetInv(QString site, QStandardItemModel *model);
    void ajoutCharge(QString nom, double coutAnnuel, QString frequence, QString nature, QString commentaire,QString nomSite);
    void modifCharge(int id, QString nom, double coutAnnuel, QString frequence, QString nature, QString commentaire);
    QString recupNom(int id);
    void supprimerFF(int id);
    void ajouterInv(QString nomSite, QString nom, QString commentaire, int coutEstime, int idType);

private:
    bool connecter=false;
    QSqlQuery *query;
};

#endif // MANAGER_H
