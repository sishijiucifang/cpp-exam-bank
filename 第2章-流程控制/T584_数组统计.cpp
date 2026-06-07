/*
 * 来源：C++题库 题号584
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第63题
 *
 * 题目：完成函数count的编写，该函数统计一维数组a中
 */

第63题 （0.1分）        题号:584        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 完成函数count的编写，该函数统计一维数组a中
       大于等于所有元素平均值的元素个数并返回它。
           参数n是数组a中元素的个数。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;

void grading();
int count(double a[], int n)
{
/**********Program**********/

        
/**********  End  **********/

}
int main()
{
        int c;
        double a[10] = {34,54,75,86,53,45,34,45,34,45};
        c=count(a,10);
        cout<<"数组中大于等于所有元素平均值的元素个数为："<<c<<endl;
        grading();
        return 0;
}
void grading()
{
        double a[20];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (int i=0;i<10;i++)
        {
                for (int j=0;j<20;j++)
                {
                        infile>>a[j];
                }
                int c = count(a,20);
                outfile<<c<<endl;
        }
        infile.close();
        outfile.close();
}


/* ───────── 参考答案 ─────────
double m=0; 
	int i;
	for(i=0;i<n;i++)
		m+=a[i]; 
	m=m/n;
	int c=0;
	for(i=0;i<n;i++) 
		if(a[i]>=m) c++;
	return c;
   ─────────────────────────── */
