/*
 * 来源：C++题库 题号626
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第94题
 *
 * 题目：下面的函数count统计m和n（m和n都是3位数）之间（包含m
 */

第94题 （0.1分）        题号:626        难度:较易        第3章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：下面的函数count统计m和n（m和n都是3位数）之间（包含m
      和n本身）有多少个数其各位数字之和是5，并将统计结果
      返回。

-------------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
-------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

int count (int m, int n)
{
/**********Program**********/




                 
/**********  End  **********/
}

int main()
{
        cout<<"189到289之间有"<<count(189,289)<<"个"<<endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        fstream infile, outfile;
        int a,b;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        infile>>a>>b;
        outfile<<count(a,b)<<endl;
        infile>>a>>b;
        outfile<<count(a,b)<<endl;
        infile.close();        
        outfile.close();        
        return 0;
}



/* ───────── 参考答案 ─────────
int i,num=0;;

	for(i=m;i<=n;i++)
		if((i%10+i/10%10+i/100)==5)
		{
			num++;
		}
	return num;
   ─────────────────────────── */
