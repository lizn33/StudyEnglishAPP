#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "Input.h"
#include "Choice.h"
#include "Show.h"
#include "File.h"
#include "Search.h"

#include <QMainWindow>
#include <QStackedWidget>
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    //右侧功能控件列表
    QStackedWidget *features_stack;
    //左侧选项控件列表
    QListWidget *features_list;
};

#endif // MAINWINDOW_H
