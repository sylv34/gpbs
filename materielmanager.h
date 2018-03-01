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
    void modifierItem(int id, QString nom, int type, QString fabriquant, QString modele, QString numSerie, QString ip, int utilisation, QString precision, int site);
};

#endif // MATERIELMANAGER_H
