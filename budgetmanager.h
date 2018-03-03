#ifndef BUDGETMANAGER_H
#define BUDGETMANAGER_H
#include "manager.h"

class BudgetManager : public Manager
{
public:
    BudgetManager();
    void liste_budget(QStandardItemModel *model);
    void liste_detail_budgetInv(int IdSite, QStandardItemModel *model);
    void liste_detail_budgetFF(int site, QStandardItemModel *model);
    void ajouterItem(QString nom, int site, QString commentaire, int IdTypeItem);
    void modifierItem(int id,QString nom, int site, QString commentaire);
};

#endif // BUDGETMANAGER_H
