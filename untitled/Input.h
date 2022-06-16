#ifndef INPUT_H
#define INPUT_H

#include <QDialog>
#include <QString>
#include <string>
#include <vector>
#include <cstdlib>
#include <QDateTime>
#include <ctime>
#include "File.h"
#include <QWidget>
#include <algorithm>

namespace Ui {
class Input;
}

class Input : public QDialog
{
    Q_OBJECT

public:
    explicit Input(QWidget *parent = 0);
    ~Input();

private:
    Ui::Input *ui;

public slots:
    void checkWord();
    void changeWord();

private:
    //单词英语列表
    std::vector<std::string> en_list;
    //单词汉语列表
    std::vector<std::string> cn_list;

    //设置3个单词并显示
    void setInput();
    void showAns();
};

#endif // INPUT_H
