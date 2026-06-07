/*
 * 来源：C++题库 题号724
 * 章节：第6章-数组与字符串
 * 难度：较难
 * 题序：第33题
 *
 * 题目：一个长度不超过255的字符串前后各有若干个无用
 */

第33题 （0.1分）        题号:724        难度:较难        第6章
//自建题库第174题   题号:724
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：一个长度不超过255的字符串前后各有若干个无用
      的空格，编写函数stringBlank，将该字符串前后
      的无用空格去除。
      说明：允许字符串之间出现空格。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

void stringBlank(char *str)
{
        /**********Program**********/        








        /**********  End  **********/
        
}

int  main()
{
        char  string[256],  *pStr;
        pStr = string;

        /* 从键盘获取一个字符串，字符串中可含空格，以回车表示结束；*/
        gets(string); 

        stringBlank(pStr);
        cout<<"The string after process is :\n";           
        cout<<string<<endl;  

        void wwjt();
        wwjt();
        return 0;
}

void wwjt()
{
        char s[256];
        fstream infile174,myfile;
        infile174.open("in174.txt",ios::in);
        infile174.getline(s,255,'\n');
        infile174.close();

        myfile.open("out174.txt",ios::out);

        stringBlank(s);
        myfile << s << endl;

        myfile.close();

}



/* ───────── 参考答案 ─────────
char *p = str;

	while ( *p == ' ' ) 
           p++;
	strcpy(str, p);
	p = str + strlen(str) - 1 ;
	while ( *p == ' ' ) 
           p--;
	*(p+1) =  '\0';
   ─────────────────────────── */
