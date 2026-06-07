/*
 * 来源：C++题库 题号919
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第98题
 *
 * 题目：该程序要求实现函数int mid(int a[], int len)，其功能为：
 */

第98题 （0.1分）        题号:919        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：该程序要求实现函数int mid(int a[], int len)，其功能为：
求数组中离平均数最近的那个数。具体来说，该函数计算数组a中所有数的平均值，
并返回数组中离该平均值最近的那个数，完成该函数的编写。  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
int mid(int a[], int len);
void grading();

int main()
{
grading();
        return 0;
}

int mid(int a[], int len)
{
/**********Program**********/

/**********  End  **********/
}

//以下忽略阅读
void grading()
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
