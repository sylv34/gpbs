#ifndef AJOUTSITE_H
#define AJOUTSITE_H

#include <QDialog>

namespace Ui {
class AjoutSite;
}

class AjoutSite : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutSite(QWidget *parent = 0);
    ~AjoutSite();

private:
    Ui::AjoutSite *ui;
};

#endif // AJOUTSITE_H
