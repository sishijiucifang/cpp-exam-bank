/*
 * 来源：C++题库 题号642
 * 章节：第5章-指针
 * 难度：较易
 * 题序：第108题
 *
 * 题目：求数组中离平均数最近的那个数
 */

第108题 （0.1分）        题号:642        难度:较易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：求数组中离平均数最近的那个数。函数int mid(int a[], int len);
计算数组a中所有数的平均值，并返回数组中离该平均值最近的那个数，
编写该函数。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
int mid(int a[], int len);

int main()
{
        int a[20],i,j;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (j=0;j<10;j++)
        {
                for (i=0;i<10;i++)
                        infile>>a[i];
                outfile<<mid(a,10)<<endl;
        }
        infile.close();
        outfile.close();
        return 0;
}

int mid(int a[], int len)
{
/**********Program**********/
        
/**********  End  **********/
}




/* ───────── 参考答案 ─────────
float m=0;
	int i;
	for (i=0;i<len;i++)
		m+=a[i];
	m = m/len;
	float cha = a[0]>m?a[0]-m:m-a[0];
	int num = a[0];
	for (i=1;i<len;i++)
	{
		float s = a[i]>m?a[i]-m:m-a[i];
		if (s<cha)
		{
			cha = s;
			num = a[i];
		}
	}
	return num;
   ─────────────────────────── */
