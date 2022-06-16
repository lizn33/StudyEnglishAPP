#include "Choice.h"
#include "ui_Choice.h"

Choice::Choice(QWidget *parent) : QDialog(parent), ui(new Ui::Choice)
{
    ui->setupUi(this);

    topic_num = 0;
    correct_choice = 0;
    started = false;
    score = 0;
    last_cor_en.clear();
    last_cor_cn.clear();

    ui->t_bro_back->setText("点击\"开始测试\"进行来一次英语选择测试吧，测试共20道题，\
                            每题5分，跳过不计分");
    ui->t_bro_last->setText("可以在此处查看上一题答案哟");

    connect(ui->p_but_star, &QPushButton::clicked, this, &Choice::starCho);
    connect(ui->p_but_next, &QPushButton::clicked, this, &Choice::skipCho);

    connect(ui->p_but_1, &QPushButton::clicked, this, &Choice::aCho);
    connect(ui->p_but_2, &QPushButton::clicked, this, &Choice::bCho);
    connect(ui->p_but_3, &QPushButton::clicked, this, &Choice::cCho);
    connect(ui->p_but_4, &QPushButton::clicked, this, &Choice::dCho);
}

void Choice::skipCho()
{
    if(!started) {return;}
    nextCho();
}

void Choice::nextCho()
{

    ++topic_num;

    if(!last_cor_en.empty())
    {
        std::string str = "上一题答案：\n";
        str += last_cor_en;
        str += "\n";
        str += last_cor_cn;
        ui->t_bro_last->setText(QString::fromStdString(str));
    }
    if(topic_num < topic_total)
    {
        //设置下方展示栏内容
        std::string str = "当前成绩：";
        str += std::to_string(score);
        str += "分  剩余题目数量：";
        str += std::to_string(topic_total - topic_num);
        ui->t_bro_back->setText(QString::fromStdString(str));

        setCho();
    }
    else
    {
    //最后一页
        //设置下方展示栏内容
        std::string str = "测试结束，本次成绩为：";
        str += std::to_string(score);
        str += "分  等级：";
        if(score > 80) str += "优秀  你真棒";
        else if(score > 70) str += "良好  很不错，加油";
        else if(score > 60) str += "合格  继续努力";
        else if(score > 40) str += "不合格  有待提高";
        else str += "不合格  有点差，不要放弃";
        str += "\n                   点击\"开始测试\"按钮重新测试";
        ui->t_bro_back->setText(QString::fromStdString(str));

        started = false;
    }
}

void Choice::starCho()
{

    if(started) {return;}

    started = true;
    score = 0;
    topic_num = 0;
    last_cor_en.clear();
    last_cor_cn.clear();

    nextCho();
}

void Choice::setCho()
{
    int max = p_file->size();
    std::vector<int> pos_list;
    int pos = 0;

    //随机找4个序号放入pos_list中
    std::srand((int)std::time(0) + (int)QTime::currentTime().msec());
    for(int i = 0; i < 4; i++)
    {
        pos = std::rand() % max;
        while(std::find(pos_list.begin(), pos_list.end(), pos) != pos_list.end())
        {
            pos = pos + 1 < max ? pos + 1 : 0;
        }
        pos_list.push_back(pos);
    }

    //选择正确选项
    correct_choice = std::rand() % 4;
    last_cor_en = p_file->getOneWord(pos_list[correct_choice]).en;
    last_cor_cn = p_file->getOneWord(pos_list[correct_choice]).cn;
    //显示题目和选项
    ui->t_bro_word->setText(QString::fromStdString(p_file->getOneWord(pos_list[correct_choice]).en));
    ui->t_bro_a->setText(QString::fromStdString(p_file->getOneWord(pos_list[0]).cn));
    ui->t_bro_b->setText(QString::fromStdString(p_file->getOneWord(pos_list[1]).cn));
    ui->t_bro_c->setText(QString::fromStdString(p_file->getOneWord(pos_list[2]).cn));
    ui->t_bro_d->setText(QString::fromStdString(p_file->getOneWord(pos_list[3]).cn));
}

void Choice::doCho(int sequence)
{
    if(!started) {return;}

    if(sequence == correct_choice)
        //加5分
        score += 5;
    nextCho();
}

Choice::~Choice()
{
    delete ui;
}
