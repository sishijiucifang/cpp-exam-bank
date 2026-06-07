/*
 * 来源：C++题库 题号595
 * 章节：第3章-函数
 * 难度：中
 * 题序：第74题
 *
 * 题目：已知三个数a，b，c，按由小到大的顺序存入a，b，
 */

第74题 （0.1分）        题号:595        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：已知三个数a，b，c，按由小到大的顺序存入a，b，
      c中并输出。
      三个数a，b，c的值从已有文件infile596.txt中读
      取。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/


#include<fstream.h>
#include<iostream.h>

#include <stdio.h>

void writeinfile(int a,int b,int c);

int main()
{
        int a,b,c,t;
        ifstream ifile;
       
        ifile.open ("infile596.txt",ios::in);
        if(! ifile )        
        {
                 cout<<"文件打开失败";
                 return 1;
         }

        ifile>>a>>b>>c;
        
        ifile.close();
        /**********Program**********/





        /**********  End  **********/

        writeinfile(a,b,c);
        return 0;
        
}

void writeinfile(int a,int b,int c)
{
      fstream myfile;
      myfile.open("f.txt",ios::out);
      myfile<<a<<","<<b<<","<<c<<endl;
      myfile.close();
}



/* ───────── 参考答案 ─────────
if(a>b){t=a;a=b;b=t;}
if(a>c){t=a;a=c;c=t;}
if(b>c){t=b;b=c;c=t;}
   ─────────────────────────── */
