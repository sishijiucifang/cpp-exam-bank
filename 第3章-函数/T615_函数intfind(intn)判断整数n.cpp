/*
 * 来源：C++题库 题号615
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第87题
 *
 * 题目：请编写函数int find(int n)，判断整数n是否满足
 */

第87题 （0.1分）        题号:615        难度:较易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：请编写函数int find(int n)，判断整数n是否满足
      下面的条件：n加上100后是一个完全平方数，n再
      加上168又是一个完全平方数。若满足条件，函数
      返回整数n；否则返回0。
说明：如果一个整数n是另一个整数的平方，则称整数n是
      完全平方数。例如81是9的平方，则81是完全平方数。
          
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include<fstream>
#include <cmath>
using namespace std;
int grading();

int find(int n)
{ 
        /**********Program**********/
        






        /**********  End  **********/
}

int main()
{
        int i,z;
        for (i=1;i<1000;i++)  
        {
                z=find(i);
                if (z!=0)
                        cout << z <<endl;        
        }

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        int d;
        fstream infile, outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);

        for (int i=0;i<8;i++)  
        {
                infile >> d;
                outfile << find(d) << endl;        
        }
        
        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
int x,y, result;
	result=0;

	x=sqrt(n+100); /*x为n加上100后开方后的结果*/
	y=sqrt(n+268); /*y为n再加上168后开方后的结果*/
	if(x*x==n+100 && y*y==n+268)
		result = n;

	return result;
   ─────────────────────────── */
