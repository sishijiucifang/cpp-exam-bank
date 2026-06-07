/*
 * 来源：C++题库 题号265
 * 章节：第3章-函数
 * 难度：中
 * 题序：第28题
 *
 * 题目：完成函数cal,该函数计算数组a中的所有数据的
 */

第28题 （0.1分）        题号:265        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 完成函数cal,该函数计算数组a中的所有数据的
       最大值及最小值以及它们的差，并存入到全局变
       量max、min、ca中。例如数组a中包含8，43，7，
       18，2，56，37，123，25，26则max=123，min=2，
       ca=121。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

int max, min, ca;

void cal(int a[], int size)
{
        /**********Program**********/




        
        /**********  End  **********/
}

int main()
{
        int a[100] = {8,43,7,18,2,56,37,123,25,26};
        cal(a,10);
        cout<<"max="<<max<<endl;
        cout<<"min="<<min<<endl;
        cout<<"ca="<<ca<<endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        fstream infile,outfile;
        int a[100], i;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<20;i++)
        {
                infile>>a[i];
        }
        cal(a,20);
        outfile<<max<<" "<<min<<" "<<ca<<endl;
        for(i=0;i<15;i++)
        {
                infile>>a[i];
        }
        cal(a,15);
        outfile<<max<<" "<<min<<" "<<ca<<endl;
        infile.close();
        outfile.close();
        return 0;
}




/* ───────── 参考答案 ─────────
int i;
	max=min=a[0];
	for(i=0; i<size; i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	ca=max-min;
   ─────────────────────────── */
