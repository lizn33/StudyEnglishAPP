#include "Show.h"
#include "ui_Show.h"

Show::Show(QWidget *parent) : QDialog(parent), ui(new Ui::Show)
{
    ui->setupUi(this);

    p_file->readWord("Base");
    int size = p_file->size();
    std::string word_list;
    for(int i = 0; i < size; i++)
    {
        word_list += p_file->getOneWord(i).en;
        int gap = 30 - p_file->getOneWord(i).en.size();
        for(int j = 0; j < gap; j++) word_list.push_back(' ');
        word_list += p_file->getOneWord(i).cn + "\n";
    }
    ui->t_bro_con->setText(QString::fromStdString(word_list));

    connect(ui->c_box_cho, SIGNAL(currentIndexChanged(int)), this, SLOT(choSet(int)));
}

Show::~Show()
{
    delete ui;
}

void Show::choSet(int i)
{
    switch(i)
    {
    case 0:
    {
        p_file->readWord("Base");
    }break;
    case 1:
    {
        p_file->readWord("Primary");
    }break;
    case 2:
    {
        p_file->readWord("Middle");
    }break;
    default:break;
    }
    int size = p_file->size();
    std::string word_list;
    for(int i = 0; i < size; i++)
    {
        word_list += p_file->getOneWord(i).en;
        int gap = 30 - p_file->getOneWord(i).en.size();
        for(int j = 0; j < gap; j++) word_list.push_back(' ');
        word_list += p_file->getOneWord(i).cn + "\n";
    }
    ui->t_bro_con->setText(QString::fromStdString(word_list));
}

