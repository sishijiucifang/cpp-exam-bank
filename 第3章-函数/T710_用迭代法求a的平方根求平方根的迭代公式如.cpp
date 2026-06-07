/*
 * 来源：C++题库 题号710
 * 章节：第3章-函数
 * 难度：中
 * 题序：第163题
 *
 * 题目：用迭代法求a的平方根，求平方根的迭代公式如下
 */

第163题 （0.1分）        题号:710        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：用迭代法求a的平方根，求平方根的迭代公式如下
      所示：
          x(0)=1;
          x(n+1)=1/2(x(n)+a/x(n))  (n>=0)
      要求前后两次求出的x的差的绝对值小于0.00005.。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
void wwjt();
double squareRoot(int i)
{       
        double x=1.0;
        double y=1/2.0*(x+i/x);
        /**********Program**********/




        /**********  End  **********/
        return y;
}
void main()
{
        int a;
        cout<<"输入一个正整数:\n";
        cin>>a;
        double y=squareRoot(a);
        cout<<"结果是："<<y<<endl;
        wwjt();
}
void wwjt()
{
   ofstream outfile("out.txt",ios::out);
   if(!outfile.is_open())
   {
      cout<<"File Open Error"<<endl;
      return;
   }
   outfile<<squareRoot(2)<<endl;
   outfile<<squareRoot(3)<<endl;
   outfile<<squareRoot(4)<<endl;
   outfile<<squareRoot(5)<<endl;
   outfile.close();
  
}


/* ───────── 参考答案 ─────────
while(fabs(y-x)>1.0e-5)
{
    x=y;
    y=1/2.0*(x+a/x);
}
   ─────────────────────────── */
