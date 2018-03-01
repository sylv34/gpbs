#ifndef MODINV_H
#define MODINV_H

#include <QDialog>
#include "invbudgetmanager.h"

namespace Ui {
class ModInv;
}

class ModInv : public QDialog
{
    Q_OBJECT

public:
    explicit ModInv(QWidget *parent = 0);
    explicit ModInv(int id,QString nom,int estimationCout,int type, QString commentaire, int IdSite,QWidget *parent=0);
    ~ModInv();

private slots:
    void on_retour_clicked();

    void on_modifier_clicked();

private:
    Ui::ModInv *ui;
    InvBudgetManager *manager;
    int site;
};

#endif // MODINV_H
