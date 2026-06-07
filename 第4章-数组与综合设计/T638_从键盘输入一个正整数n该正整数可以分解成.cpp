/*
 * 来源：C++题库 题号638
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第104题
 *
 * 题目：从键盘输入一个正整数n，该正整数可以分解成两个正整数k1
 */

第104题 （0.1分）        题号:638        难度:中        第4章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：从键盘输入一个正整数n，该正整数可以分解成两个正整数k1
      和k2之和（允许k1和k2相等）。请编写一个函数求使两个正
      整数的乘积最大的分解方案，并返回乘积max。
-------------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

-------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void wwjt();

int decompose(int n)
{

/**********Program**********/





/**********  End  **********/
    return max;
}

int main()
{
        int n;
        do{
                cout<<"\nPlease input a positive number:";
                cin >> n;
        }while(n<=0);
    cout<<"\n The product is: "<<decompose(n);
        
        wwjt();
        return 0;
}

void wwjt()
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        myfile<<decompose(67)<<endl;
        myfile<<decompose(6975)<<endl;
        myfile.close();        
}



/* ───────── 参考答案 ─────────
----------------------
    int i,max;
    max = 1*(n-1);
    for(i=2;i<n;i++)
	if(i*(n-i)>max) 
	{
	    max = i*(n-i);
	}

----------------------
   ─────────────────────────── */
