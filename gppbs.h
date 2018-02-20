#ifndef GPPBS_H
#define GPPBS_H

#include <QMainWindow>
#include "manager.h"

namespace Ui {
class GPPBS;
}

class GPPBS : public QMainWindow
{
    Q_OBJECT

public:
    explicit GPPBS(QWidget *parent = 0);
    ~GPPBS();

private slots:
    void on_gest_parc_clicked();

    void on_gest_site_clicked();

    void on_gest_budget_clicked();

private:
    Ui::GPPBS *ui;
    Manager *manager;
};

#endif // GPPBS_H
