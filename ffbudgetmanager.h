#ifndef FFBUDGETMANAGER_H
#define FFBUDGETMANAGER_H
#include "budgetmanager.h"

class FFBudgetManager : public BudgetManager
{
public:
    FFBudgetManager();
    double calculAnnuel(double cout, int frequence);
    double calculAnnuelMod(double coutAnnuel, int newFrequence, int idItem);
    void ajouterItem(QString nom, double coutAnnuel, int frequence, int nature, QString commentaire, int site);
    void modifierItem(int id, QString nom, double coutAnnuel, int frequence, int nature, QString commentaire, int site);
};

#endif // FFBUDGETMANAGER_H
