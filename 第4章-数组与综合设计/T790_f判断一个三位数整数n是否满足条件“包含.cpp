/*
 * 来源：C++题库 题号790
 * 章节：第4章-数组与综合设计
 * 难度：较易
 * 题序：第189题
 *
 * 题目：函数f判断一个三位数整数n是否满足条件“包含两
 */

第189题 （0.1分）        题号:790        难度:较易        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数f判断一个三位数整数n是否满足条件“包含两
      个相同数字的三位数”，例如200、444都满足条件，
      123、33不满足条件。整数n满足条件时函数f返回1，
      否则返回0。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
int f(int n);

/**********Program**********/


/**********  End  **********/

int main()
{
        int n;
        cout<<"请输入整数n:";
        cin>>n;
        if(f(n))
                cout<<n<<"满足条件"<<endl;
        else
                cout<<n<<"不满足条件"<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<30;j++)
                {
                        infile>>n;
                        n=n%900+100;
                        outfile<<f(n);
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int f(int n)
{
	int a=n%10;
	n=n/10;
	int b=n%10;
	int c=n/10;
	if(a==b || a==c || b==c)
		return 1;
	return 0;
}
   ─────────────────────────── */
