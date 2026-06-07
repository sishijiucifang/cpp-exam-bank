/*
 * 来源：C++题库 题号669
 * 章节：第6章-数组与字符串
 * 难度：较易
 * 题序：第20题
 *
 * 题目：函数myStrLen(char *a)返回字符串a的长度
 */

第20题 （0.1分）        题号:669        难度:较易        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数myStrLen(char *a)返回字符串a的长度。填写
      适当的代码，使得myStrLen()完成正确的功能。
          
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;

int myStrLen(char *str);
int grading();

int main()
{
        char str[]="Hello, this is a C++ program!";
        cout << myStrLen(str) << endl;
        
        //忽略阅读
        grading();
        //忽略阅读结束
        
        return 0;
}

int myStrLen(char *str)
{
        /*************** Program *****************/
        
        
        
        /*************** End *****************/
}

//以下忽略阅读
int grading()
{
    char str[1000];
        
    fstream inf,outf;
    inf.open("in.txt",ios::in);
    outf.open("out.txt",ios::out);
        
    for(int k=0;k<10;k++)
    {
        inf>>str;
        outf<<myStrLen(str)<<endl;
    }
        
    inf.close();
    outf.close();
    return 0;
        
}



/* ───────── 参考答案 ─────────
int i=0;
	while(str[i])
		i++;
	return i;
   ─────────────────────────── */
