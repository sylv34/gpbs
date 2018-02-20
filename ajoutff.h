#ifndef AJOUTFF_H
#define AJOUTFF_H

#include <QDialog>
#include "manager.h"

namespace Ui {
class AjoutFF;
}

class AjoutFF : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutFF(QWidget *parent = 0);
    explicit AjoutFF(QString site, QWidget *parent = 0);
    ~AjoutFF();

private slots:
    void on_pushButton_clicked();

    void on_retour_clicked();

private:
    Ui::AjoutFF *ui;
    Manager *manager;
    QString site;
};

#endif // AJOUTFF_H
