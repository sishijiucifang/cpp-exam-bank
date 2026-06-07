/*
 * 来源：C++题库 题号640
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第106题
 *
 * 题目：下面的函数ave求三个数的平均值并返回，完成该
 */

第106题 （0.1分）        题号:640        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面的函数ave求三个数的平均值并返回，完成该
      函数的编写。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<fstream>
#include<iostream>
using namespace std;
void grading();

float ave(int a, int b, int c)
{
        /**********Program**********/
        

        
        /**********  End  **********/
}

int main()
{
        cout<<"3,6,8的平均值是："<<ave(3,6,8)<<endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
void grading()
{
        int a,b,c,i;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile>>a>>b>>c;
                outfile<<(int)(ave(a,b,c)*100)<<endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
//注意结果需要是浮点数，防止整除效果的发生：
	float m = (a+b+c)/3.0;
	return m;
   ─────────────────────────── */
