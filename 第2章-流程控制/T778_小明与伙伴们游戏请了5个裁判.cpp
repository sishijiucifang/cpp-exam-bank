/*
 * 来源：C++题库 题号778
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第178题
 *
 * 题目：小明与伙伴们游戏，请了5个裁判
 */

第178题 （0.1分）        题号:778        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：小明与伙伴们游戏，请了5个裁判。对于每个孩子的
      表现，每个裁判给一个分数（最高分100，最低分0）。
      总评分的计算规则是：去掉一个最高分，去掉一个最
      低分，剩下分数的平均分作为总评分。请编写函数ave，
      实现总评分的计算。如：5个分数分别为99、96、93、
      80、94，则总评分为：94.3333
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
double ave(int a,int b,int c, int d, int e);

/**********Program**********/



/**********  End  **********/

int main()
{
        int i,a[5];
        cout<<"请输入5个整数:";
        for(i=0;i<5;i++)
        {
                cin>>a[i];
        }
        cout<<"总评分为："<<ave(a[0],a[1],a[2],a[3],a[4])<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int n,i,j,k,a[200];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<200;i++)
        {
                infile>>n;
                a[i] = n%50+51;
        }
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        k=i*10+j;
                        outfile<<(int)(ave(a[k],a[k+1],a[k+2],a[k+3],a[k+4])+0.5)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
double ave(int a,int b,int c, int d, int e)
{
	int s[5]={a,b,c,d,e},i;
	double sum=a+b+c+d+e,max=a,min=a;
	for(i=0;i<5;i++)
	{
		if(s[i]>max)
			max=s[i];
		if(s[i]<min)
			min=s[i];
	}
	sum-=max;
	sum-=min;
	sum/=3.0;
	return sum;
}
   ─────────────────────────── */
