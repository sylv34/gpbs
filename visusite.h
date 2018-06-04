#ifndef VISUSITE_H
#define VISUSITE_H

#include <QDialog>
#include "sitemanager.h"
#include "budgetmanager.h"

namespace Ui {
class VisuSite;
}

class VisuSite : public QDialog
{
    Q_OBJECT

public:
    explicit VisuSite(int idSite, QString nom, QString adresse, QString cp, QString ville, QString siren, QString bic, QWidget *parent = 0);
    ~VisuSite();

private:
    Ui::VisuSite *ui;
    SiteManager *managerSite;
    BudgetManager *managerBudget;
    QStandardItemModel *modelMateriel;
    QStandardItemModel *modelFF;
    QStandardItemModel *modelInv;
    int site;
};

#endif // VISUSITE_H
