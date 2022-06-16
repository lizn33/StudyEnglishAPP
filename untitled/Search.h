#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include <string>
#include <Qstring>
#include "File.h"

namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = 0);
    ~Search();

private:
    Ui::Search *ui;

public slots:
    void searchWord();
};

#endif // SEARCH_H
