#ifndef MODFF_H
#define MODFF_H

#include <QDialog>
#include "manager.h"

namespace Ui {
class ModFF;
}

class ModFF : public QDialog
{
    Q_OBJECT

public:
    explicit ModFF(QWidget *parent = 0);
    explicit ModFF(QString id,QString nom,QString coutAnnuel,QString frequence,QString nature,QString commentaire,QWidget *parent);
    ~ModFF();

private slots:
    void on_modifier_clicked();

private:
    Ui::ModFF *ui;
    Manager *manager;
};

#endif // MODFF_H
