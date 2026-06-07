/*
 * 来源：C++题库 题号254
 * 章节：第1章-C++基本语法
 * 难度：较易
 * 题序：第21题
 *
 * 题目：时间结构MyTime包含时、分、秒三个成员，可以表
 */

第21题 （0.1分）        题号:254        难度:较易        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：时间结构MyTime包含时、分、秒三个成员，可以表
      示某个时间（采用24时制），如12:12:12表示12点
      12分12秒，也可以表示一个时间段，如12:12:12表
      示12个小时12分钟12秒。函数addTime实现一个时间
      和一个时间段相加，结果为相加后的新时间。例如：
      23:56:56+2:12:12=02:09:08。
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
//n -- 要加的时间段
//返回值 -- 时间a加时间段n后的新时间
MyTime addTime(MyTime a, MyTime n);

/**********Program**********/



/**********  End  **********/

int main()
{
        MyTime a,n,b;
        cout<<"请输入一个时间(hh mm ss):";
        cin>>a.h>>a.m>>a.s;
        cout<<"请输入要加的时间段:";
        cin>>n.h>>n.m>>n.s;
        b = addTime(a,n);
        cout<<a.h<<":"<<a.m<<":"<<a.s<<" + ";
        cout<<n.h<<":"<<n.m<<":"<<n.s<<" = ";
        cout<<b.h<<":"<<b.m<<":"<<b.s<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        MyTime a,n,b;
        int i, j;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>a.h>>a.m>>a.s;
                        infile>>n.h>>n.m>>n.s;
                        a.h=a.h%24;
                        a.m=a.m%60;
                        a.s=a.s%60;
                        n.h=n.h%24;
                        n.m=n.m%60;
                        n.s=n.s%60;
                        b=addTime(a,n);
                        outfile<<b.h<<b.m<<b.s<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
MyTime addTime(MyTime a, MyTime n)
{
	a.s+=n.s;
	if (a.s>=60)
	{
		a.m+=a.s/60;
		a.s=a.s%60;
	}
	a.m+=n.m;
	if(a.m>=60)
	{
		a.h+=a.m/60;
		a.m=a.m%60;
	}
	a.h+=n.h;
	if(a.h>=24)
		a.h=a.h%24;
	return a;
}
   ─────────────────────────── */
