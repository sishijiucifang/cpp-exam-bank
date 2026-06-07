/*
 * 来源：C++题库 题号644
 * 章节：第5章-指针
 * 难度：较难
 * 题序：第110题
 *
 * 题目：下面程序中的函数void conv(char *s);将字符串s中
 */

第110题 （0.1分）        题号:644        难度:较难        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面程序中的函数void conv(char *s);将字符串s中
的所有字符逆序存放，例如s中为”abc”时，调用该函数后
s中的字符串变为”cba”，完成该函数。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
void conv(char *s);

int main()
{
        char s[200];
        int i;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile>>s;
                conv(s);
                outfile<<s<<endl;
        }
        infile.close();
        outfile.close();
        return 0;
}


void conv(char *s)
{
/**********Program**********/
        
/**********  End  **********/
}


/* ───────── 参考答案 ─────────
int len = strlen(s), j;
	for (j=0;j<len/2;j++)
	{
		char c = s[j];
		s[j] = s[len-1-j];
		s[len-1-j] = c;
	}
   ─────────────────────────── */
