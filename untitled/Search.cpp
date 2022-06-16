#include "Search.h"
#include "ui_Search.h"

Search::Search(QWidget *parent) : QDialog(parent), ui(new Ui::Search)
{
    ui->setupUi(this);

    ui->l_ed->setPlaceholderText("请输入您要在单词集中查询的英语单词");

    connect(ui->p_but, &QPushButton::clicked, this, &Search::searchWord);
}

void Search::searchWord()
{
    std::string en = ui->l_ed->text().toStdString();
    int pos = p_file->findWord(en);
    if(pos < 0)
    {
        ui->t_bro->setText("未查询到该单词，可能是输入错误或单词集中不存在该单词");
    }
    else
    {
        ui->t_bro->setText(QString::fromStdString(p_file->getOneWord(pos).cn));
    }
}

Search::~Search()
{
    delete ui;
}
