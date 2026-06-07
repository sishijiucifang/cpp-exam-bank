/*
 * 来源：C++题库 题号2
 * 章节：第6章-数组与字符串
 * 难度：较难
 * 题序：第2题
 *
 * 题目：函数dateDiff计算两个日期之间的时间差（天数）
 */

第2题 （0.1分）        题号:2        难度:较难        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数dateDiff计算两个日期之间的时间差（天数）
      并返回，如果参数传入的日期是非法日期，如1999
      13 23则返回0，如果en比beg早，也返回0。如beg
      的值为1999 1 1，en为1999 2 2，则返回32。
      完成该函数的编写。
提示：是闰年的条件是4的倍数但不是100的倍数，或者是
      400的倍数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
struct Date{
        int year,month,day;
};
int dateDiff(Date beg,Date en);//beg：开始日期；en结束日期

/**********Program**********/


/**********  End  **********/

int main()
{
        int days;
        Date b,e;
        cout<<"请输入起始日期（yyyy mm dd）:";
        cin>>b.year>>b.month>>b.day;
        cout<<"请输入结束日期（yyyy mm dd）:";
        cin>>e.year>>e.month>>e.day;
        days = dateDiff(b,e);
        cout<<"相差"<<days<<"天"<<endl;
        grading();
        cout<<endl;
}

//以下忽略阅读
void grading()
{
        int i, j, days;
        Date b,e;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>b.year>>b.month>>b.day;
                        infile>>e.year>>e.month>>e.day;
                        b.year=2000+b.year%99;
                        b.month=b.month%12+1;
                        b.day=b.day%30+1;
                        e.year=2000+e.year%100;
                        e.month=e.month%12+1;
                        e.day=e.day%30+1;
                        days = dateDiff(b,e);
                        outfile<<days<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
bool leap(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
		return true;
	return false;
}
bool valid(Date b)
{
	int d[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	if(b.month<1 || b.month>12)
		return false;
	if(b.day<=0 || b.day>d[b.month])
		return false;
	if(b.day==29 && b.month==2)
		if (!leap(b.year))
			return false;
	return true;
}
void inc(Date &c)
{
	int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (c.day<d[c.month] || c.day==28 && c.month==2 && leap(c.year))
	{
		c.day++;
		return;
	}
	c.day=1;
	if(c.month<12)
	{
		c.month++;
		return;
	}
	c.month=1;
	c.year++;
}
int dateDiff(Date beg,Date en)
{
	if (!valid(beg) || !valid(en))
		return 0;
	if(beg.year*10000+beg.month*100+beg.day>en.year*10000+en.month*100+en.day)
		return 0;
	int days=0;
	while(!(beg.year==en.year && beg.month==en.month && beg.day==en.day))
	{
		inc(beg);
		days++;
	}
	return days;
}
   ─────────────────────────── */
