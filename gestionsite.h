#ifndef GESTIONSITE_H
#define GESTIONSITE_H

#include <QDialog>

namespace Ui {
class GestionSite;
}

class GestionSite : public QDialog
{
    Q_OBJECT

public:
    explicit GestionSite(QWidget *parent = 0);
    ~GestionSite();

private:
    Ui::GestionSite *ui;
};

#endif // GESTIONSITE_H
