/*
 * 来源：C++题库 题号585
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第64题
 *
 * 题目：判断一个数是否是素数（要求程序中设置一个参
 */

第64题 （0.1分）        题号:585        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 判断一个数是否是素数（要求程序中设置一个参
       数flag,flag为1代表是素数，为0代表不是）

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;

#include <math.h>

void writeinfile(int n)
{
fstream myfile;
myfile.open("out.dat",ios::out);
myfile<<n<<endl;
myfile.close();
}

void readfromfile(int *a)
{
  fstream myfile;
  myfile.open("in.dat",ios::in);
  myfile>>*a;
}

void main()
{
  int m,n,flag=1;
  readfromfile(&m);
/**********Program**********/

  

/**********  End  **********/
writeinfile(flag);
}



/* ───────── 参考答案 ─────────
for(n=2;n<=m/2&&flag;n++)
     if(m%n==0)
		 flag=0;
  cout<<flag<<endl;
   ─────────────────────────── */
