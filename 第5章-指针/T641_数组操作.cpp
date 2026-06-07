/*
 * 来源：C++题库 题号641
 * 章节：第5章-指针
 * 难度：易
 * 题序：第107题
 *
 * 题目：完成函数ave的编写，该函数计算数组a中所有数
 */

第107题 （0.1分）        题号:641        难度:易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：完成函数ave的编写，该函数计算数组a中所有数
        的平均值并返回，参数len是数组a中元素的个数。
    
--------------------------------------------------
  注意：部分源程序给出如下。请勿改动主函数main和其
        它函数中的任何内容，仅在函数的花括号中填入
                所编写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
void grading();

float ave(int a[], int len)
{
/**********Program**********/
        



        
        
/**********  End  **********/
}

int main()
{
        int b[5] = {1,4,6,8,5};
        cout<<"数组b的平均值为："<<ave(b,5)<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
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
                outfile<<ave(a,10)<<endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
float m=0;
	for (int i=0;i<len;i++)
		m+=a[i];
	return m/len;
   ─────────────────────────── */
