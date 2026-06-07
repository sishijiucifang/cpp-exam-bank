/*
 * 来源：C++题库 题号624
 * 章节：第3章-函数
 * 难度：中
 * 题序：第92题
 *
 * 题目：编写一个函数
 */

第92题 （0.1分）        题号:624        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 编写一个函数
        int day_of_month(int year, int month)
        输入年(year)、月(month)，打印出该年份该月的天数。
       (若输入数据不合法，要求返回值为0) 

       公历闰年的计算方法为：
       i) 能被4整除且不能被100整除的为闰年； 
       或者
       ii) 能被400整除的是闰年。


--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数 main 
      和其它函数中的任何内容，仅在程序中介于
      "**********Program**********"
      和
      "**********  End  **********"
      的部分填入所编写的若干语句。

------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;


int day_of_month(int year, int month)
{
/**********Program**********/


/**********  End  **********/
}

int main()
{
    ifstream inf("in.txt",ios::in);
    ofstream ouf("out.txt",ios::out);
    int y, m;
    while(inf>>y && inf>> m)
       ouf << day_of_month(y,m) << endl;
    inf.close();
    ouf.close();
    return 0;    
}


/* ───────── 参考答案 ─────────
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
	return 31;
case 4:
case 6:
case 9:
case 11:
	return 30;
case 2:
	if(!(year%4)&&(year%100) || !(year%400))
		return 29;
	else
		return 28;
default:
	return 0;
}
   ─────────────────────────── */
