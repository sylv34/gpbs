#ifndef MODIFSITE_H
#define MODIFSITE_H

#include <QDialog>
#include "sitemanager.h"

namespace Ui {
class ModifSite;
}

class ModifSite : public QDialog
{
    Q_OBJECT

public:
    explicit ModifSite(QWidget *parent = 0);
    explicit ModifSite(int id,QString nom,QString siren, QString nic, QString adresse, QString ville, QString CP, QWidget *parent);
    ~ModifSite();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ModifSite *ui;
    SiteManager *manager;
};

#endif // MODIFSITE_H
