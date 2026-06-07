/*
 * 来源：C++题库 题号214
 * 章节：第3章-函数
 * 难度：易
 * 题序：第15题
 *
 * 题目：完成函数sofd，该函数计算一个数的各位数字之和
 */

第15题 （0.1分）        题号:214        难度:易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数sofd，该函数计算一个数的各位数字之和
      并返回，如sofd(252)返回9。
说明：sofd函数编写时只需考虑n大于等于0的情况，不用
      处理负整数的情况。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

int sofd(int n)
{
        /**********Program**********/

        
        /**********  End  **********/
}

int main()
{
        cout<<"sofd(252) = "<<sofd(252)<<endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
void grading()
{
        int n, i;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile>>n;
                outfile<<sofd(n)<<endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
int m,s = 0;
	while(n!=0)
	{
		m=n%10;
		s+=m;
		n=n/10;
	}
	return s;
   ─────────────────────────── */
