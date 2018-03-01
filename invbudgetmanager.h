#ifndef INVBUDGETMANAGER_H
#define INVBUDGETMANAGER_H
#include "budgetmanager.h"

class InvBudgetManager : public BudgetManager
{
public:
    InvBudgetManager();
    void ajouterItem(QString nom, QString commentaire, int coutEstime, int idType, int IdSite);
    void modifierItem(int id,QString nom,int estimationCout,int type, QString commentaire, int IdSite);
};

#endif // INVBUDGETMANAGER_H
