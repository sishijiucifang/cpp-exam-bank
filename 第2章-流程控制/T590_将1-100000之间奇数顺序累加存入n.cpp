/*
 * 来源：C++题库 题号590
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第69题
 *
 * 题目：将1-100000之间奇数顺序累加存入n中，直到其和等
 */

第69题 （0.1分）        题号:590        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 将1-100000之间奇数顺序累加存入n中，直到其和等
       于或大于400000为止。请输出n的值、参与累加的奇数个数，
           以及参与运算的最大的那个奇数。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <fstream>
#include <iostream>

using namespace std;

void writeinfile(int sum, int odd, int count);

int main()
{
        int odd, sum = 0, count = 0;

/**********Program**********/

        
/**********  End  **********/
writeinfile(sum, odd, count);
 
 cout <<"Press the enter key to exit!" << endl;
 cin.ignore(cin.rdbuf()->in_avail() + 1);
  
 return 0;
}

void writeinfile(int sum, int odd, int count)
{
        ofstream myfile;
        myfile.open("f2.txt",ios::out);

        myfile<<sum<<endl;
        myfile<<count<<endl;
        myfile<<odd<<endl;

        myfile.close();
}



/* ───────── 参考答案 ─────────
----------------------
for(odd=1; odd <= 100000 && sum < 400000; odd+=2)
	{
		count += 1;
		sum += odd;
	}
odd-=2;
----------------------
   ─────────────────────────── */
