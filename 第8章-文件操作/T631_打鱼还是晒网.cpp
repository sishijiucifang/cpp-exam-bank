/*
 * 来源：C++题库 题号631
 * 章节：第8章-文件操作
 * 难度：较难
 * 题序：第17题
 *
 * 题目：打鱼还是晒网
 */

第17题 （0.1分）        题号:631        难度:较难        第8章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：打鱼还是晒网
中国有句俗语叫"三天打鱼两天晒网"。某人从1990年1月1日起开始
"三天打鱼两天晒网"，问这个人在以后的某一天中是"打鱼"还是"晒网"。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
-------------------------------------------------------*/
#include<iostream>
#include <fstream>
using namespace std;

void input(struct date &day);
void output(int i);


int days(struct date day);
struct date{
        int year;
        int month;
        int day;
};

int main()
{
        struct date today,term;
        int yearday,year,day;

        input(today);
        term.month=12; /*设置变量的初始值：月*/
        term.day=31; /*设置变量的初始值：日*/
        yearday=0;

/**********Program**********/



   
 /**********  End  **********/ 

        day=yearday%5; /*求余数*/
        if(day>0 && day<4) 
        {
                cout<<"他在打鱼。"<<endl; /*打印结果*/
                output(1);
        }
        else 
        {
                cout<<"他在晒网。"<<endl;
                output(0);
        }
        return 0;
}

int days(struct date day)
{
        static int day_tab[2][13]=
        {{0,31,28,31,30,31,30,31,31,30,31,30,31,}, /*平均每月的天数*/
        {0,31,29,31,30,31,30,31,31,30,31,30,31,},};
        int i,lp;

        lp=(day.year%4==0 && day.year%100!=0 || day.year%400==0);        /*判定year为闰年还是平年，lp=0为平年，非0为闰年*/
        for(i=1;i<day.month;i++) /*计算本年中自1月1日起的天数*/
                day.day+=day_tab[lp][i];
        return day.day;
}

void input(struct date &day)
{
        ifstream infile("f1.dat", ios::in|ios::binary);
        infile.read((char*)(&day), sizeof(day));
        infile.close();
}


void output(int i)
{
        ofstream myfile;
        myfile.open("f2.txt",ios::out);
        myfile<<i;
        myfile.close();
}


/* ───────── 参考答案 ─────────
----------------------
 	for(year=1990;year<today.year; year++)
	{
		term.year=year;
		yearday+=days(term); 
	}
	yearday+=days(today); 
----------------------
   ─────────────────────────── */
