/*
 * 来源：C++题库 题号734
 * 章节：第7章-结构体与链表
 * 难度：较难
 * 题序：第37题
 *
 * 题目：完成函数days，计算某个日期在这一年中是第几天
 */

第37题 （0.1分）        题号:734        难度:较难        第7章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：完成函数days，计算某个日期在这一年中是第几天。如
      1989年1月8是这一年的第8天。闰年判断条件：年份是4
      的倍数且不是100的倍数，或者年份是400的倍数。
  
--------------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它函数中
      的任何内容，仅在函数的花括号中填入所编写的若干语句。
-------------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;
int grading();

struct date{
        int year;
        int month;
        int day;
};

int days(struct date day)
{
        /**********Program**********/
        







        /**********  End  **********/ 
}

int main()
{
        struct date one = {2000,3,4};
        int index = days(one);
        cout<<"2000-3-4是2000年第"<<index<<"天"<<endl;
        
        //忽略阅读
        grading();
        //忽略阅读结束
        
        return 0;
}

//以下忽略阅读
int grading()
{
        struct date one;
        int index;
        ifstream infile("in.txt", ios::in);
        ofstream outfile("out.txt", ios::out);

        for (int i=0; i<8; i++){
                infile>>one.year>>one.month>>one.day;
                index = days(one);
                outfile<<index<<endl;
        }

        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
int num=day.day;
	static int day_tab[2][13]=
	{{0,31,28,31,30,31,30,31,31,30,31,30,31,},
	{0,31,29,31,30,31,30,31,31,30,31,30,31,},};
	int i,lp;
	
	lp=(day.year%4==0 && day.year%100!=0 || day.year%400==0);
	for(i=1;i<day.month;i++) 
		num +=day_tab[lp][i];
	return num;
   ─────────────────────────── */
