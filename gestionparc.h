#ifndef GESTIONPARC_H
#define GESTIONPARC_H

#include <QDialog>
#include <QStandardItemModel>
#include "MaterielManager.h"

namespace Ui {
class GestionParc;
}

class GestionParc : public QDialog
{
    Q_OBJECT

public:
    explicit GestionParc(QWidget *parent = 0);
    ~GestionParc();
    void afficherListe();

private slots:
    void on_ajouter_clicked();

    void on_modifier_clicked();

    void on_retour_clicked();

    void on_supprimer_clicked();

private:
    Ui::GestionParc *ui;
    QStandardItemModel *model;
    MaterielManager *manager;
};

#endif // GESTIONPARC_H
