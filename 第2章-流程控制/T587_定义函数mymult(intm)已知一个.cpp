/*
 * 来源：C++题库 题号587
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第66题
 *
 * 题目：定义函数mymult(int m)，已知一个正整数m,求m的各位数字之积　f
 */

第66题 （0.1分）        题号:587        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 定义函数mymult(int m)，已知一个正整数m,求m的各位数字之积　f　。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
#include <stdio.h>

void wwjt();
int m,f=1,n;
/**********Program**********/




/**********  End  **********/
void main()
{
        cout<<"input m:"<<endl;
        cin>>m;
        mymult(m);
        cout<<"mymult("<<m<<")="<<f<<endl;

//忽略阅读
    wwjt();
//忽略阅读结束
}

//忽略阅读
void wwjt()
{        
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out); 
        infile>>m;
        f=1;
        mymult(m);
        outfile<<f<<endl;
        infile.close();
        outfile.close();
}
//忽略阅读结束



/* ───────── 参考答案 ─────────
----------------------
void  mymult(int m)
{
	while( m!=0)
	{n=m%10;f*=n;m=m/10;}
}
----------------------
   ─────────────────────────── */
