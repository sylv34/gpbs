#ifndef MODFF_H
#define MODFF_H

#include <QDialog>
#include "ffbudgetmanager.h"

namespace Ui {
class ModFF;
}

class ModFF : public QDialog
{
    Q_OBJECT

public:
    explicit ModFF(QWidget *parent = 0);
    explicit ModFF(int id,QString nom,double coutAnnuel,int frequence,int nature,QString commentaire,int IdSite,QWidget *parent);
    ~ModFF();

private slots:
    void on_modifier_clicked();

private:
    Ui::ModFF *ui;
    FFBudgetManager *manager;
    int site;
};

#endif // MODFF_H
