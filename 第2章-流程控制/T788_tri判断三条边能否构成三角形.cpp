/*
 * 来源：C++题库 题号788
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第187题
 *
 * 题目：函数tri判断三条边能否构成三角形
 */

第187题 （0.1分）        题号:788        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数tri判断三条边能否构成三角形。三条边的长度
      都是非负整数。若能构成则返回1，否则返回0。例
      如3、4、5能构成三角形，但0、1、2不能构成三角
      形。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
int tri(int a,int b,int c);

/**********Program**********/



/**********  End  **********/

int main()
{
        int a,b,c;
        cout<<"请输入三角形的三条边（整数）:";
        cin>>a>>b>>c;
        if(tri(a,b,c))
                cout<<"能构成三角形"<<endl;
        else
                cout<<"不能构成三角形"<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int n,i,j,a[200];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<200;i++)
        {
                infile>>n;
                a[i] = n%101;
        }
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        if(tri(a[i*10+j],a[i*10+j+1],a[i*10+j+3]))
                                outfile<<"YES";
                        else
                                outfile<<"NO";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int tri(int a,int b,int c)
{
	if(a<=0 || b<=0 ||c<=0)
		return 0;
	if(a+b>c && a+c>b && b+c>a)
		return 1;
	return 0;
}
   ─────────────────────────── */
