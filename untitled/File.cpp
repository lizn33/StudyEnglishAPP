#include "File.h"

File* p_file = new File();

File::word::word(const word &w)
{
    en = w.en;
    cn = w.cn;
}

int File::size()
{
    return word_list.size();
}

void File::readWord(std::string file_name)
{
    //打开文件夹
    std::fstream file(file_name);
    if(!file.is_open())
    {
        file.open(file_name, std::ios::in|std::ios::out|std::ios::trunc);
        file<<"apple 苹果\nbanana 香蕉\norange 橘子\npear 梨子";
        file.seekg(0, std::ios::beg);
    }

    //读取至word_list
    word_list.clear();
    std::string en;
    std::string cn;
    while(file >> en && file >> cn) {
        word_list.push_back(word(en, cn));
    }
}

File::word File::getOneWord(int pos)
{
    if(pos < (int)word_list.size() && pos > -1)
    {
        return word_list[pos];
    }
    else
    {
        return word();
    }
}

int File::findWord(std::string en)
{
    int size = word_list.size();
    for(int i = 0; i < size; i++)
    {
        if(word_list[i].en == en)
            return i;
    }
    return -1;
}

std::vector<File::word> File::getAllWord()
{
    return word_list;
}

File::File(){}
