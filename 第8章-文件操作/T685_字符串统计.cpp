/*
 * 来源：C++题库 题号685
 * 章节：第8章-文件操作
 * 难度：较易
 * 题序：第25题
 *
 * 题目：写一个函数统计字符串中，大写字母和小写字母
 */

第25题 （0.1分）        题号:685        难度:较易        第8章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：写一个函数统计字符串中，大写字母和小写字母
      的个数,并分别保存在全局变量Supper和Low中。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

int Supper=0,Low=0;        

void GetSupperLow(char input[])
{
/**********Program**********/






/**********  End  **********/
}

void wwff();
int main()
{
        GetSupperLow("asas998234WERe***");

        cout<<Supper<<endl;
        cout<<Low<<endl;

//忽略阅读
  wwff();
//忽略阅读结束

        return 0;
}

//忽略阅读
void wwff()
{
   ifstream rf("in.txt",ios::in);
   char input[30];
   rf>>input;
   Supper=0,Low=0;        
   ofstream wf("out.txt",ios::out);   
   GetSupperLow(input);
   wf<<Supper<<' '<<Low;
   rf.close();
   wf.close();
}


/* ───────── 参考答案 ─────────
int i=0;
        while (input[i]!='\0')
        {
                if(input[i]<='Z' &&input[i] >='A')
                        Supper++;
                if (input[i]<='z' &&input[i] >='a')
                        Low++;
                i++;
        }
   ─────────────────────────── */
