#ifndef CONNEXION_H
#define CONNEXION_H

#include <QDialog>
#include <manager.h>
#include <QString>

namespace Ui {
class Connexion;
}

class Connexion : public QDialog
{
    Q_OBJECT

public:
    explicit Connexion(QWidget *parent = 0);
    ~Connexion();

private slots:
    void on_connexion_clicked();

    void on_quitter_clicked();

private:
    Ui::Connexion *ui;
    Manager *manager;
};

#endif // CONNEXION_H
