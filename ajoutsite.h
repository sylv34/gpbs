#ifndef AJOUTSITE_H
#define AJOUTSITE_H

#include <QDialog>
#include "sitemanager.h"

namespace Ui {
class AjoutSite;
}

class AjoutSite : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutSite(QWidget *parent = 0);
    ~AjoutSite();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AjoutSite *ui;
    SiteManager *manager;
};

#endif // AJOUTSITE_H
