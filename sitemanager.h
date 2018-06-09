#ifndef SITEMANAGER_H
#define SITEMANAGER_H

#include <QObject>
#include "manager.h"

class SiteManager: public Manager
{
public:
    SiteManager();
    void liste_site(QStandardItemModel *model);
    void listeMateriel(int id, QStandardItemModel *model);
    void ajouterSite(QString nom, QString adresse, QString cp, QString ville, QString siren, QString bic);
    void modifierSite(int id,QString nom, QString adresse, QString cp, QString ville, QString siren, QString nic);
};

#endif // SITEMANAGER_H
