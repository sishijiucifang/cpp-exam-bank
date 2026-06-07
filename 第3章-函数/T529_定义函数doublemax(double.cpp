/*
 * 来源：C++题库 题号529
 * 章节：第3章-函数
 * 难度：中
 * 题序：第47题
 *
 * 题目：定义函数double max(double a,double b,double c)实现求三个实数中的最大值
 */

第47题 （0.1分）        题号:529        难度:中        第3章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：定义函数double max(double a,double b,double c)实现求三个实数中的最大值。
        
--------------------------------------------------------------------------------
注意：
1.部分源程序给出如下。请勿改动主函数main和其它函数中的任何内容，仅在*program*
  和*end*所标记的区域内完成题干要求的函数功能。
2.//忽略阅读与//忽略阅读结束内的程序可以忽略阅读。
------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
void wwjt();

/*********Program*********/




/*********  End  *********/

void main()
{
        cout<<max(3.2,7.4,4.5)<<endl;
        //忽略阅读
    wwjt();
        //忽略阅读结束
}

//忽略阅读
void wwjt()
{
        double m,n,l;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (int i=0;i<2;i++)
        {
                infile>>m;
                infile>>n;
                infile>>l;
                outfile<<max(m,n,l)<<endl;
        }
        infile.close();
        outfile.close();
}
//忽略阅读结束



/* ───────── 参考答案 ─────────
double max(double a,double b,double c)
{
	if(a>b&&a>c) return a;
	if(b>a&&b>c) return b;
	return c;
}
   ─────────────────────────── */
