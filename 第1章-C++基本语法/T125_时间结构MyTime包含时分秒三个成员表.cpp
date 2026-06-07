/*
 * 来源：C++题库 题号125
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第11题
 *
 * 题目：时间结构MyTime包含时、分、秒三个成员，表示某
 */

第11题 （0.1分）        题号:125        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：时间结构MyTime包含时、分、秒三个成员，表示某
      个时间，采用24时制。函数addSec实现一个时间和
      秒数n的相加，结果为该时间n秒后的时间。例如：
      23:56:56+400=00:02:36。
      完成该函数的编写。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
void grading();
struct MyTime {
        int h,m,s;
};
//a -- 开始时间
//n -- 要加的秒数
//返回值 -- 时间a加n秒后的新时间
MyTime addSec(MyTime a, int n);

/**********Program**********/




/**********  End  **********/

int main()
{
        MyTime a,b;
        int n;
        cout<<"请输入一个时间(hh mm ss):";
        cin>>a.h>>a.m>>a.s;
        cout<<"请输入要加的秒数:";
        cin>>n;
        b = addSec(a,n);
        cout<<a.h<<":"<<a.m<<":"<<a.s<<" + "<<n<<"秒 = ";
        cout<<b.h<<":"<<b.m<<":"<<b.s<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        MyTime a,b;
        int i, j, n;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>a.h>>a.m>>a.s>>n;
                        a.h=a.h%24;
                        a.m=a.m%60;
                        a.s=a.s%60;
                        b=addSec(a,n);
                        outfile<<b.h<<b.m<<b.s<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
MyTime addSec(MyTime a, int n)
{
	a.s+=n;
	if (a.s>=60)
	{
		a.m+=a.s/60;
		a.s=a.s%60;
	}
	if(a.m>=60)
	{
		a.h+=a.m/60;
		a.m=a.m%60;
	}
	if(a.h>=24)
		a.h=a.h%24;
	return a;
}
   ─────────────────────────── */
