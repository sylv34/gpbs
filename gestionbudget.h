#ifndef GESTIONBUDGET_H
#define GESTIONBUDGET_H

#include <QDialog>
#include <QStandardItemModel>
#include "manager.h"

namespace Ui {
class GestionBudget;
}

class GestionBudget : public QDialog
{
    Q_OBJECT

public:
    explicit GestionBudget(QWidget *parent = 0);
    ~GestionBudget();
    void afficherListe();

private slots:
    void on_detail_clicked();

    void on_retour_clicked();

private:
    Ui::GestionBudget *ui;
    QStandardItemModel *model;
    Manager *manager;
    int *totFF;
    int *totInv;
};

#endif // GESTIONBUDGET_H
