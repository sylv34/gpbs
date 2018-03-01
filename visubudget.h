#ifndef VISUBUDGET_H
#define VISUBUDGET_H

#include <QDialog>
#include <QStandardItemModel>
#include "budgetmanager.h"

namespace Ui {
class VisuBudget;
}

class VisuBudget : public QDialog
{
    Q_OBJECT

public:
    explicit VisuBudget(QWidget *parent = 0);
    explicit VisuBudget(int IdSite,QWidget *parent=0);
    ~VisuBudget();
    void afficherFF();
    void afficherInv();

private slots:

    /*Frais de Fonctionnement*/
    void on_ajouterFF_clicked();
    void on_modifierFF_clicked();
    void on_supprimerFF_clicked();

    /*Investissements*/
    void on_ajouterInv_clicked();
    /*void on_modifierInv_clicked();
    void on_supprimerInv_clicked();*/


    void on_modifierInv_clicked();

    void on_supprimerInv_clicked();

protected:
    Ui::VisuBudget *ui;
    QStandardItemModel *modelFF;
    QStandardItemModel *modelInv;
    BudgetManager *manager;
    int site;
};

#endif // VISUBUDGET_H
