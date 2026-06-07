/*
 * 来源：C++题库 题号668
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第131题
 *
 * 题目：函数mySum(int a[], int c)返回整数数组a中所有
 */

第131题 （0.1分）        题号:668        难度:较易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数mySum(int a[], int c)返回整数数组a中所有
      元素的和，c为数组元素的个数。填写适当的代码，
      使得mySum()完成正确的功能。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;
int grading();

int mySum (int a[], int c)
{
        /*************** Program *****************/
        



        
        /*************** End *****************/
}

int main()
{
        int a[]={3,4,5,2,1,7,9,6,10};
        
        cout << mySum(a,9) << endl;
        
//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
    int a[10];
    fstream myF;
        
    myF.open("in.dat",ios::in);
    myF.read((char*)a, 10*sizeof(int));
    myF.close();
        
    myF.open("out.dat",ios::out);
    myF << mySum(a, 10);
    myF.close();

    return 0;
}



/* ───────── 参考答案 ─────────
int s=0, i;
	
	for (i=0; i<c; i++)
		s+=a[i];
	return s;
   ─────────────────────────── */
