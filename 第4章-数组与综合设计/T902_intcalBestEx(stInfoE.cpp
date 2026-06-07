/*
 * 来源：C++题库 题号902
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第205题
 *
 * 题目：完成函数int calBestEx(stInfoEx st)，该函数返回某个
 */

第205题 （0.1分）        题号:902        难度:中        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：完成函数int calBestEx(stInfoEx st)，该函数返回某个
     男生各门功课中的最高分，若是女生则返回整数-1。学生的信息
     用结构体类型
     stInfoEx {char  name[100]; bool male; stArts s1; stSci s2; }
     描述，其中name表示学生的姓名，male为true表示男生，false表示
     女生，stArts, stSci分别表示各门文科、理科课程的成绩，文科成
     绩有music、lan，理科成绩有math, eng, prg。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace  std;

struct stArts
{        
    int music;
    int lan;
};

struct stSci
{        
    int math, eng;
    int prg;
};

struct stInfoEx
{        
    char name[100]; 
    bool male; 
    stArts s1;
    stSci s2;
};

/*********Program*********/

/*********  End  *********/

void grading();

int main()
{        
    stInfoEx st1[] = {{ "张三", true, {70,80},{90,91,90} }};
        
    cout << calBestEx(st1[0]) << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{        
    fstream infile,outfile;
    stInfoEx st;

    infile.open("in.dat",ios::in|ios::binary);
    outfile.open("out.txt",ios::out);
    for (int i=0;i<100;i++)
    {
        infile.read((char*)&st,sizeof(st));
        outfile<<calBestEx(st)<<endl;
    }
    infile.close();
    outfile.close();
}



/* 参考答案未提供 */
