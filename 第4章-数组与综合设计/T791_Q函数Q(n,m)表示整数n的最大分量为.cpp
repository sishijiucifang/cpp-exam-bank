/*
 * 来源：C++题库 题号791
 * 章节：第4章-数组与综合设计
 * 难度：较易
 * 题序：第190题
 *
 * 题目：Q函数Q(n,m)表示整数n的最大分量为m的划分数
 */

第190题 （0.1分）        题号:791        难度:较易        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：Q函数Q(n,m)表示整数n的最大分量为m的划分数。
      例如7的最大分量为7的划分数为15。函数Q(n)的定
      义如下：
               / 1                      m=1 或 n=1 
      Q(n,m) = | Q(n,n)                 n<m
               | 1+Q(n,n-1)             n=m
               \ Q(n,m-1)+Q(n-m,m)      n>m>1 

      函数接口为：int Q(int n, int m);
      其中n、m为正整数，返回值为整数n的最大分量为m的
      划分数。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
int Q(int n, int m);

/**********Program**********/



/**********  End  **********/

int main()
{
        int n,m;
        cin>>n>>m;
        cout<<"Q("<<n<<","<<m<<")="<<Q(n,m)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,m,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>n>>m;
                        n=n%40+10;
                        m=m%n+5;
                        k=Q(n,m);
                        outfile<<k<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int Q(int n, int m)
{
	if(n==1 || m==1)
		return 1;
	if(n<m)
		return Q(n,n);
	if(n==m)
		return 1+Q(n,n-1);
	return Q(n,m-1)+Q(n-m,m);
}
   ─────────────────────────── */
