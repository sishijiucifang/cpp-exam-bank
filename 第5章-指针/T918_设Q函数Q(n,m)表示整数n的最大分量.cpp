/*
 * 来源：C++题库 题号918
 * 章节：第5章-指针
 * 难度：中
 * 题序：第212题
 *
 * 题目：设Q函数Q(n,m)表示整数n的最大分量为m的划分数
 */

第212题 （0.1分）        题号:918        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：设Q函数Q(n,m)表示整数n的最大分量为m的划分数。其定义如下：
               / 1                      m=1 或 n=1 
      Q(n,m) = | Q(n,n)                 n<m
               | 1+Q(n,n-1)             n=m
               \ Q(n,m-1)+Q(n-m,m)      n>m>1 
      函数接口为：int Q(int n, int m)，其中n、m为正整数，
返回值为整数n的最大分量为m的划分数。  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
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
        int n=5,m=4;
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
             infile>>n>>m;
             n=n%40+10;
             m=m%n+5;
             k=Q(n,m);
             outfile<<k<<endl;  
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
