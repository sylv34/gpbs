#ifndef GESTIONPLANNING_H
#define GESTIONPLANNING_H

#include <QDialog>

namespace Ui {
class GestionPlanning;
}

class GestionPlanning : public QDialog
{
    Q_OBJECT

public:
    explicit GestionPlanning(QWidget *parent = 0);
    ~GestionPlanning();

private:
    Ui::GestionPlanning *ui;
};

#endif // GESTIONPLANNING_H
