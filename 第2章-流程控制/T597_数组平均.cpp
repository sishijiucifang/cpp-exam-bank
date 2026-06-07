/*
 * 来源：C++题库 题号597
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第76题
 *
 * 题目：从文件中读入6个数到数组中,计算其中正数的平均值aver.
 */

第76题 （0.1分）        题号:597        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 从文件中读入6个数到数组中,计算其中正数的平均值aver.

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<fstream>
#include<iostream>
using namespace std;

#include <stdio.h>

void writeinfile(float aver);

void main()
{
        float a[6],aver;
        int n=0,j;
        fstream myfile;
        myfile.open("in.txt",ios::in);
        for(int i=0;i<6;i++)
                myfile>>a[i];
        myfile.close();
/**********Program**********/




/**********  End  **********/
        writeinfile(aver);
}

void writeinfile(float aver)
{
        fstream myfile;
        myfile.open("f.txt",ios::out);
        myfile<<aver<<endl;
        myfile.close();
}



/* ───────── 参考答案 ─────────
----------------------
	aver=0;
	for(j=0;j<6;j++)
	{
		if(a[j]>0)
		{
			n++;
			aver+=a[j];
		}
	}
	aver/=n;
----------------------
   ─────────────────────────── */
