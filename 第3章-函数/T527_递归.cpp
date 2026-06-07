/*
 * 来源：C++题库 题号527
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第45题
 *
 * 题目：编写递归函数Acm(m,n)实现如下图所示的Acm函
 */

第45题 （0.1分）        题号:527        难度:较易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：编写递归函数Acm(m,n)实现如下图所示的Acm函
      数，其中m、n为正整数。例如：Acm(2,1)=5，
          Acm(3,2)=29。

         / n+1                  (m=0)
         |
Acm(m,n)=| Acm(m-1,1)           (n=0)
         |
         \ Acm(m-1,Acm(m,n-1))  (m>0,n>0)

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
        cout<<"Acm(2,1)="<<Acm(2,1)<<endl;
        cout<<"Acm(3,2)="<<Acm(3,2)<<endl;

// [评分函数已省略]
        return 0;
}

//以下忽略阅读
void grading()
{
        int m,n,i;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile>>m>>n;
                outfile<<Acm(m,n)<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int Acm(int m,int n)
{
	if(m==0) return n+1;
	if(n==0) return Acm(m-1,1);
	return Acm(m-1,Acm(m,n-1));
}
   ─────────────────────────── */
