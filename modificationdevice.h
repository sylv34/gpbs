#ifndef MODIFICATIONDEVICE_H
#define MODIFICATIONDEVICE_H

#include <QDialog>
#include "materielmanager.h"
#include "gestionparc.h"

namespace Ui {
class ModificationDevice;
}

class ModificationDevice : public  QDialog
{
    Q_OBJECT

public:
    explicit ModificationDevice(QWidget *parent = 0);
    explicit ModificationDevice(QString id, QString nom, QString nomType, QString fabriquant, QString modele, QString numSerie, QString ip, QString nomUtilisation, QString precision, QString nomSite, QWidget *parent);
    ~ModificationDevice();

private slots:
    void on_modifier_clicked();

    void on_quitter_clicked();

private:
    Ui::ModificationDevice *ui;
    MaterielManager *manager;
};

#endif // MODIFICATIONDEVICE_H
