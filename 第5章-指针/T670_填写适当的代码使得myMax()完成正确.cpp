/*
 * 来源：C++题库 题号670
 * 章节：第5章-指针
 * 难度：中
 * 题序：第132题
 *
 * 题目：填写适当的代码，使得myMax()完成正确的功能
 */

第132题 （0.1分）        题号:670        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：填写适当的代码，使得myMax()完成正确的功能。
      函数myMax(int a[ ], int c)返回整数数组a中
      最大值所在的下标值(如果有多个相同的最大值，
      则返回最前面一次最大值的下标值)，c为数组元
      素的个数。
 
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;

int myMax(int a[], int c);
int grading();

int main()
{
        int a[]={0,12,10,12,3,-1,8,9,7,10};
        cout << myMax(a, 10) << endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

int myMax(int a[ ], int c)
{
        
        /*************** Program *****************/
        




                        
        /*************** End *****************/
}

//以下忽略阅读
int grading()
{
        int a[1000];
        int len=10;
    fstream inf,outf;

    inf.open("in.txt",ios::in);
    outf.open("out.txt",ios::out);

        for (int i=0;i<10;i++)
        {
                for (int j=0;j<len;j++)
                        inf>>a[j];
                outf<<myMax(a,len)<<endl;
        }

    inf.close();
    outf.close();
        return 0;
}



/* ───────── 参考答案 ─────────
int i=0, m=a[0];
	for (i=1; i<c; i++)
		if (m<a[i])	m=a[i];
	for (i=0; i<c; i++)
		if (m==a[i])  break;

	return i;
   ─────────────────────────── */
