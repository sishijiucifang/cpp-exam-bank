/*
 * 来源：C++题库 题号259
 * 章节：第4章-数组与综合设计
 * 难度：较易
 * 题序：第25题
 *
 * 题目：下面的函数aver计算数组a中所有正数的平均值并返
 */

第25题 （0.1分）        题号:259        难度:较易        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面的函数aver计算数组a中所有正数的平均值并返
      回。参数len是数组a中元素个数。完成该函数的编写。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

float aver(float a[], int len)
{
/**********Program**********/
        

        
        
/**********  End  **********/
}

int main()
{
        float a[6]={-1,3,6,0,-5,4}, res;
        res = aver(a,6);
        cout<<"a中正数的平均值是："<<res<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}

//以下忽略阅读
void grading()
{
        float a[100];
        int i;
        fstream infile, outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<20;i++)
                infile>>a[i];
        outfile<<aver(a,20)<<endl;
        for(i=0;i<25;i++)
                infile>>a[i];
        outfile<<aver(a,25)<<endl;
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
float res=0;
	int n=0;
	for(int j=0;j<len;j++)
	{
		if(a[j]>0)
		{
			n++;
			res+=a[j];
		}
	}
	res/=n;
	return res;
   ─────────────────────────── */
