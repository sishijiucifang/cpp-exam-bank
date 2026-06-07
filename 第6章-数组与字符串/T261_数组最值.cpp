/*
 * 来源：C++题库 题号261
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第8题
 *
 * 题目：下面的函数swap先将数组a中最大的数和a[0]交换，
 */

第8题 （0.1分）        题号:261        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面的函数swap先将数组a中最大的数和a[0]交换，
      然后再将其中次大的数和a[1]交换，参数len（>2）
          是a中数组元素的个数。完成该函数的编写。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
          函数中的任何内容，仅在函数的花括号中填入所编
          写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

void grading();

void swap(int a[], int len)
{
/**********Program**********/

                
/**********  End  **********/
}

int main()
{
        int a[7]={1,2,3,4,5,6,7},i;
        swap(a,7);
        for(i=0;i<7;i++)
                cout<<a[i]<<" ";
        cout<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}

void grading()
{
        int i;
        int a[40];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<8;i++)
                infile>>a[i];
        swap(a,8);
        for (i=0;i<8;i++)
                outfile<<a[i];
        outfile<<endl;
        for (i=0;i<9;i++)
                infile>>a[i];
        swap(a,9);
        for (i=0;i<9;i++)
                outfile<<a[i];
        outfile<<endl;
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int max,i,t,m;
	max=a[0];
	for(i=1;i<len;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
			m=i;
		}
	}
	t=a[0];
	a[0]=a[m];
	a[m]=t;

	max=a[1];
	for(i=2;i<len;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
			m=i;
		}
	}
	t=a[1];
	a[1]=a[m];
	a[m]=t;
   ─────────────────────────── */
