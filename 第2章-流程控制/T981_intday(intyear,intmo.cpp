/*
 * 来源：C++题库 题号981
 * 章节：第2章-流程控制
 * 难度：较易
 * 题序：第219题
 *
 * 题目：编写函数int day(int year, int month)，根据
 */

第219题 （0.1分）        题号:981        难度:较易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：编写函数int day(int year, int month)，根据
  给定的年份year(year>1990)和月份month(1<=month<=12)，
  计算并返回该月的天数。闰年是指该年份是4的整数倍但
  不是100的整数倍，或者该年份是400的整数倍。
  例如，day(2000, 2) = 29
        day(2100, 8) = 31
  
--------------------------------------------------
        注意：部分源程序给出如下。请勿改动主函数main和其它
        函数中的任何内容，不要修改或删除“program”和
        “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;
void grading();
int day(int year, int month);

/**********Program**********/


/**********  End  **********/


int main()
{
        cout << day(2000, 2) << endl;
        cout << day(2100, 8) << endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                int year, month;
                infile >> year >> month;
                year = 1990 + year % 1000;
                month = 1 + month % 12;
                outfile << day(year, month) << endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
int day(int year, int month)
{
	int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		days[2] = 29;
	return days[month];
}
   ─────────────────────────── */
