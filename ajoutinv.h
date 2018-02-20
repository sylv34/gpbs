#ifndef AJOUTINV_H
#define AJOUTINV_H

#include <QDialog>
#include "manager.h"

namespace Ui {
class AjoutInv;
}

class AjoutInv : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutInv(QWidget *parent = 0);
    explicit AjoutInv(QString nomSite, QWidget *parent=0);
    ~AjoutInv();

private slots:
    void on_ajouter_clicked();

private:
    Ui::AjoutInv *ui;
    Manager *manager;
    QString site;
};

#endif // AJOUTINV_H
