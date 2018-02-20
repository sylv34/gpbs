#ifndef AJOUTDEVICE_H
#define AJOUTDEVICE_H

#include <QDialog>
#include "manager.h"

namespace Ui {
class AjoutDevice;
}

class AjoutDevice : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutDevice(QWidget *parent = 0);
    ~AjoutDevice();

private slots:
    void on_ajouter_clicked();

    void on_quitter_clicked();

private:
    Ui::AjoutDevice *ui;
    Manager *manager;
};

#endif // AJOUTDEVICE_H
