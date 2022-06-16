#ifndef SHOW_H
#define SHOW_H

#include "File.h"

#include <QDialog>
#include <QString>

namespace Ui {
class Show;
}

class Show : public QDialog
{
    Q_OBJECT

public:
    explicit Show(QWidget *parent = 0);
    ~Show();

private:
    Ui::Show *ui;

public slots:
    void choSet(int i);
};

#endif // SHOW_H
