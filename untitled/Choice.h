#ifndef CHOICE_H
#define CHOICE_H

#include <QDialog>
#include <QString>
#include <algorithm>
#include <QDateTime>
#include <ctime>
#include <cstdlib>
#include "File.h"

namespace Ui {
    class Choice;
}

class Choice : public QDialog
{
    Q_OBJECT

public:
    explicit Choice(QWidget *parent = 0);
    ~Choice();

private:
    Ui::Choice *ui;

public slots:
    //开始测试
    void starCho();
    //跳过题目
    void skipCho();

    //a、b、c、d对应按钮的执行
    void aCho(){doCho(0);}
    void bCho(){doCho(1);}
    void cCho(){doCho(2);}
    void dCho(){doCho(3);}

private:
    //题目总数
    const int topic_total = 20;
    //已完成题目数，包含当前展示题目
    int topic_num;
    //当前题目正确选项[0,4)
    int correct_choice;
    //测试是否开始
    bool started;
    //目前得分
    int score;
    //上一题正确答案
    std::string last_cor_en;
    std::string last_cor_cn;

    //设置题目和4个待选项
    void setCho();
    //做出选择，sequence代表选择的序号
    void doCho(int sequence);
    //下一个选择题
    void nextCho();
};

#endif // CHOICE_H
