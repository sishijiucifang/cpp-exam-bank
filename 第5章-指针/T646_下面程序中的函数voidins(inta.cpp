/*
 * 来源：C++题库 题号646
 * 章节：第5章-指针
 * 难度：中
 * 题序：第112题
 *
 * 题目：下面程序中的函数void ins(int a[], int len，int n);
 */

第112题 （0.1分）        题号:646        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面程序中的函数void ins(int a[], int len，int n);
将n插入到一个包含len个从小到大排好序的整数数组a中，插入
后保证数组的有序性。完成该函数的编写。例如：
        a)        调用ins(a, 0，3)后，数组a中为3
        b)        调用ins(a, 1，2)后，数组a中为2，3
        c)        调用ins(a, 2，6)后，数组a中为2，3，6
        
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
void ins(int a[], int len, int n);

int main()
{
        int a[20],i,j,k,num;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<2;i++)
        {
                for (j=0;j<10;j++)
                {
                        infile>>num;
                        ins(a, j, num);
                        for (k=0;k<=j;k++)
                                outfile<<a[k]<<" ";
                        outfile<<endl;
                }
        }
        infile.close();
        outfile.close();
        return 0;
}


void ins(int a[], int len, int n)
{
/**********Program**********/
        
/**********  End  **********/
}


/* ───────── 参考答案 ─────────
int i;
	for (i=len;i>0;i--)
	{
		if (i>0 && a[i-1]>n)
			a[i] = a[i-1];
		else
			break;
	}
	a[i] = n;
   ─────────────────────────── */
