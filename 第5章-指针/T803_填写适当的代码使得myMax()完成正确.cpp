/*
 * 来源：C++题库 题号803
 * 章节：第5章-指针
 * 难度：中
 * 题序：第196题
 *
 * 题目：填写适当的代码，使得myMax()完成正确的功能
 */

第196题 （0.1分）        题号:803        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：填写适当的代码，使得myMax()完成正确的功能。
      函数myMax(char a[ ])返回字符数组a中最大值
      所在的下标值(如果有多个相同的最大值，则返
      回最前面一次最大值的下标值)。
 
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;

int myMax(char * a);
int grading();

int main()
{
        char a[]="abcdedcba";
        cout << myMax(a) << endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

int myMax(char * a)
{
        
        /*************** Program *****************/
        




                        
        /*************** End *****************/
}

//以下忽略阅读
int grading()
{
        char a[1000];
        fstream inf,outf;

    inf.open("in.txt",ios::in);
    outf.open("out.txt",ios::out);

        for (int i=0;i<10;i++)
        {
                
                inf>>a;
                outf<<myMax(a)<<endl;
        }

    inf.close();
    outf.close();
        return 0;
}



/* ───────── 参考答案 ─────────
int i=0;
		int index=0;
		char max=a[0];
		while(a[i]!='\0')
		{
			if(a[i]>max)
			{
				max=a[i];
				index=i;
			}
			i++;
		}
        return index;
   ─────────────────────────── */
