/*
 * 来源：C++题库 题号789
 * 章节：第3章-函数
 * 难度：易
 * 题序：第188题
 *
 * 题目：序列中的最大差值
 */

第188题 （0.1分）        题号:789        难度:易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：序列中的最大差值。给定一个由整数组成的序列A，
      序列A的长度为n（n>=2），求满足0<=x<=y<n的
      A[y]-A[x]的最大值。例如序列11,3,5,7,9,2,4,6,
      8,10，则在x=5，y=9时得到最大差值为8。
      下面的函数f实现这个功能，参数a为给定的序列，
      len为序列长度，返回值为序列的最大差值。实现该
      函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
int f(int a[], int len);

/**********Program**********/



/**********  End  **********/

int main()
{
        int a[10]={11,3,5,7,9,2,4,6,8,10};
        cout<<"序列a的最大差值为："<<f(a,10)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,m,k;
        int a[100],cha;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<5;j++)
                {
                        for(k=0;k<10+i+j;k++)
                        {
                                infile>>m;
                                a[k]=m%300;
                        }
                        cha=f(a,k);
                        outfile<<cha<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int f(int a[], int len)
{
	int i,j,cha=0;
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			if(a[j]-a[i]>cha)
				cha=a[j]-a[i];
		}
	}
	return cha;
}
   ─────────────────────────── */
