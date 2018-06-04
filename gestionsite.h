#ifndef GESTIONSITE_H
#define GESTIONSITE_H

#include <QDialog>
#include "sitemanager.h"
#include "visusite.h"

namespace Ui {
class GestionSite;
}

class GestionSite : public QDialog
{
    Q_OBJECT

public:
    explicit GestionSite(QWidget *parent = 0);
    void afficherListe();
    ~GestionSite();

private slots:
    void on_detail_clicked();

    void on_ajouter_clicked();

private:
    Ui::GestionSite *ui;
    SiteManager *manager;
    QStandardItemModel *model;
};

#endif // GESTIONSITE_H
