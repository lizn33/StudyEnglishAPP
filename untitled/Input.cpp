
#include "Input.h"
#include "ui_Input.h"

Input::Input(QWidget *parent) : QDialog(parent), ui(new Ui::Input)
{
    ui->setupUi(this);

    ui->l_ed_1->setPlaceholderText("请在此输入对应的英语单词");
    ui->l_ed_2->setPlaceholderText("请在此输入对应的英语单词");
    ui->l_ed_3->setPlaceholderText("请在此输入对应的英语单词");

    connect(ui->p_but_check, &QPushButton::clicked, this, &Input::checkWord);
    connect(ui->p_but_change, &QPushButton::clicked, this, &Input::changeWord);
    connect(ui->p_but_start, &QPushButton::clicked, this, &Input::changeWord);
}

void Input::setInput()
{
    int max = p_file->size();
    std::vector<int> pos_list;
    int pos = 0;

    //随机找3个序号放入pos_list中
    std::srand((int)std::time(0) + (int)QTime::currentTime().msec());

    en_list.clear();
    cn_list.clear();
    for(int i = 0; i < 3; i++)
    {
        pos = std::rand() % max;
        while(std::find(pos_list.begin(), pos_list.end(), pos) != pos_list.end())
        {
            pos = pos + 1 < max ? pos + 1 : 0;
        }
        pos_list.push_back(pos);
    }

    for(int i = 0; i < 3; i++)
    {
        en_list.push_back(p_file->getOneWord(pos_list[i]).en);
        cn_list.push_back(p_file->getOneWord(pos_list[i]).cn);
    }

    ui->t_bro_word_1->setText(QString::fromStdString(cn_list[0]));
    ui->t_bro_word_2->setText(QString::fromStdString(cn_list[1]));
    ui->t_bro_word_3->setText(QString::fromStdString(cn_list[2]));
}

void Input::showAns()
{
    ui->t_bro_ans_1->setText(QString::fromStdString(en_list[0]));
    ui->t_bro_ans_2->setText(QString::fromStdString(en_list[1]));
    ui->t_bro_ans_3->setText(QString::fromStdString(en_list[2]));
}

void Input::checkWord()
{
    std::vector<std::string> en_rep_list;
    en_rep_list.push_back(ui->l_ed_1->text().toStdString());
    en_rep_list.push_back(ui->l_ed_2->text().toStdString());
    en_rep_list.push_back(ui->l_ed_3->text().toStdString());

    //设置答案框颜色，正确为绿，错误为红
    if(en_rep_list[0] != en_list[0])
        ui->t_bro_ans_1->setStyleSheet("QTextBrowser{background-color: rgba(255, 0, 0, 180);}");
    else
        ui->t_bro_ans_1->setStyleSheet("QTextBrowser{background-color: rgba(0, 255, 0, 180);}");
    if(en_rep_list[1] != en_list[1])
        ui->t_bro_ans_2->setStyleSheet("QTextBrowser{background-color: rgba(255, 0, 0, 180);}");
    else
        ui->t_bro_ans_2->setStyleSheet("QTextBrowser{background-color: rgba(0, 255, 0, 180);}");
    if(en_rep_list[2] != en_list[2])
        ui->t_bro_ans_3->setStyleSheet("QTextBrowser{background-color: rgba(255, 0, 0, 180);}");
    else
        ui->t_bro_ans_3->setStyleSheet("QTextBrowser{background-color: rgba(0, 255, 0, 180);}");

    showAns();
}

void Input::changeWord()
{

    ui->l_ed_1->setText("");
    ui->l_ed_2->setText("");
    ui->l_ed_3->setText("");
    ui->t_bro_ans_1->setText("");
    ui->t_bro_ans_2->setText("");
    ui->t_bro_ans_3->setText("");
    ui->t_bro_ans_1->setStyleSheet("QTextBrowser{background-color: rgba(255, 255, 255, 100);}");
    ui->t_bro_ans_2->setStyleSheet("QTextBrowser{background-color: rgba(255, 255, 255, 100);}");
    ui->t_bro_ans_3->setStyleSheet("QTextBrowser{background-color: rgba(255, 255, 255, 100);}");

    setInput();
}

Input::~Input()
{
    delete ui;
}
