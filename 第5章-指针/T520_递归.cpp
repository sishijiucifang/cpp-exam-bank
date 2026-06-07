/*
 * 来源：C++题库 题号520
 * 章节：第5章-指针
 * 难度：较易
 * 题序：第38题
 *
 * 题目：编写递归函数fun(n)实现如下图所示的fun函数，
 */

第38题 （0.1分）        题号:520        难度:较易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：编写递归函数fun(n)实现如下图所示的fun函数，
      其中n为正整数。例如：fun(6)=9，fun(8)=19。

            /  n                      (n<=3)
   fun(n) = | 
            \  fun(n-1)+fun(n-3)      (n>3)
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
void grading();

/*********Program*********/



/*********  End  *********/

int main()
{
        cout<<"fun(6)="<<fun(6)<<endl;
        cout<<"fun(8)="<<fun(8)<<endl;

// [评分函数已省略]
        return 0;
}

//以下忽略阅读
void grading()
{
        int n,i,j;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<8;i++)
        {
                for (j=0;j<4;j++)
                {
                        infile>>n;
                        outfile<<fun(n);
        }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int fun(unsigned int n)
{
	if(n<=3)
		return n;
	return fun(n-1)+fun(n-3);
}
   ─────────────────────────── */
