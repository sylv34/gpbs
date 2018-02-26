#ifndef MATERIELMANAGER_H
#define MATERIELMANAGER_H
#include "manager.h"
#include <QtCore>
#include <QtGui>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QStandardItemModel>
#include <QtWidgets>
#include <QString>
#include <QSqlError>


class MaterielManager : public Manager
{
public:
    MaterielManager();
    void liste_device(QStandardItemModel *model);
    void ajouterItem(QString nom, int type, QString fabriquant, QString modele, QString numSerie, QString ip, int utilisation, QString precision, int site);
    void modifier(int id, QString nom, QString nomUtilisation, QString nomType, QString fabriquant, QString modele, QString num, QString ip, QString precision, QString nomSite);
};

#endif // MATERIELMANAGER_H
