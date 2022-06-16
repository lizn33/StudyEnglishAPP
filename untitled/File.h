#ifndef FILE_H
#define FILE_H

#include <fstream>
#include <string>
#include <vector>

class File
{
public:
    //包含单词 汉语 和 英语 的结构体 word
    struct word
    {
        std::string en;
        std::string cn;

        //构造函数
        word(){}
        word(std::string eng, std::string chn):en(eng), cn(chn){}
        word(const word &w);
        bool operator <(word b){return en < b.en;}
        word& operator =(word w){en = w.en; cn = w.cn; return *this;}
        bool operator ==(word w){return en == w.en && cn == w.cn;}
    };

public:
    File();

    //返回读取到单词集的数组长度
    int size();
    //从名为file_name的文件中读取单词
    void readWord(std::string file_name);
    //获取单词集中第pos个单词
    word getOneWord(int pos);
    //查询单词位置
    int findWord(std::string en);
    //获取单词集
    std::vector<word> getAllWord();

private:
    //单词集
    std::vector<word> word_list;
};

//实例化一个File对象，供程序使用
extern File *p_file;

#endif // FILE_H
