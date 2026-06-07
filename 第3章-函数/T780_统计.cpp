/*
 * 来源：C++题库 题号780
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第180题
 *
 * 题目：函数count_digit统计一个整数n中某个数字d出现的
 */

第180题 （0.1分）        题号:780        难度:较易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数count_digit统计一个整数n中某个数字d出现的
      次数并返回，例如12335中3出现的次数为2。实现
      该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
int count_digit(int n, int d);

/**********Program**********/


/**********  End  **********/

int main()
{
        int n,d;
        cout<<"整数n和数字d:";
        cin>>n>>d;
        cout<<n<<"中包含"<<count_digit(n,d)<<"个数字"<<d<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,d;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>n;
                        n=n*123;
                        d=i;
                        if(d==0 && j==0)
                                n=0;
                        outfile<<count_digit(n,d)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int count_digit(int n, int d)
{
	if(n==0)
	{
		if(d==0)
			return 1;
		return 0;
	}
	if(n<0)n=-n;
	int c=0;
	while(n!=0)
	{
		if(n%10==d)
			c++;
		n=n/10;
	}
	return c;
}
   ─────────────────────────── */
