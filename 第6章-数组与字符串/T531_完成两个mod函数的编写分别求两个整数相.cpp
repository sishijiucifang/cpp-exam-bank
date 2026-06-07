/*
 * 来源：C++题库 题号531
 * 章节：第6章-数组与字符串
 * 难度：较易
 * 题序：第10题
 *
 * 题目：完成两个mod函数的编写，分别求两个整数相除的余
 */

第10题 （0.1分）        题号:531        难度:较易        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成两个mod函数的编写，分别求两个整数相除的余
      数和两个实数相除的余数。两个实数求余定义为实
      数四舍五入取整后相除的余数。例如mod(5,3)结果
      为2，mod(8.6, 2.3)结果为1。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
void grading();

/*********Program*********/



/*********  End  *********/

int main()
{
        cout<<"mod(8,3)="<<mod(8,3)<<endl;
        cout<<"mod(8.2,3.6)="<<mod(8.2,3.6)<<endl;
        cout<<"mod(-8.2,-2.6)="<<mod(-8.2,-2.6)<<endl;

//忽略阅读
    grading();
//忽略阅读结束
        return 0;
}

//忽略阅读
void grading()
{
        int m,n,i;
        double x,y;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<4;i++)
        {
                infile>>m>>n;
                outfile<<mod(m,n);
                infile>>m>>n;
                outfile<<mod(m,n)<<endl;
        }
        for (i=0;i<4;i++)
        {
                infile>>x>>y;
                outfile<<mod(x,y);
                infile>>x>>y;
                outfile<<mod(x,y)<<endl;
        }
        infile.close();
        outfile.close();
}
//忽略阅读结束


/* ───────── 参考答案 ─────────
int mod(int n,int m)
{
	return n%m;
}
int round(double x)
{					
	if(x>=0)  
		return int(x+0.5);
	else 
		return int(x-0.5);
}
int mod(double x,double y)
{
	return round(x)%round(y);
}
   ─────────────────────────── */
