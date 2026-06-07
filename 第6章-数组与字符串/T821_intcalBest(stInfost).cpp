/*
 * 来源：C++题库 题号821
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第95题
 *
 * 题目：完成函数int calBest(stInfo st)，该函数返回某一男生各门功课中的
 */

第95题 （0.1分）        题号:821        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数int calBest(stInfo st)，该函数返回某一男生各门功课中的
     最高分，若是女生则返回整数-1。学生的信息用结构体类型
     stInfo {char  name[100]; bool male; int math, eng, prg; }
     描述，其中name表示学生的姓名，male为true表示男生，false表示
     女生，math, eng, prg分别表示高数、英语、程序设计的成绩。  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace  std;

struct stInfo
{        
    char name[100]; 
    bool male; 
    int math, eng;
    int prg;
};

/**********Program**********/

/**********  End  **********/

void grading();

int main()
{        
    stInfo st[] = {{"张三", true, 80,90,79}};
        
    cout << calBest(st[0]) << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{        
    fstream infile,outfile;
    stInfo st;

    infile.open("in.dat",ios::in|ios::binary);
    outfile.open("out.txt",ios::out);
    for (int i=0;i<100;i++)
    {
        infile.read((char*)&st, sizeof(st));
        outfile<<calBest(st)<<endl;
    }
    infile.close();
    outfile.close();
}




/* 参考答案未提供 */
