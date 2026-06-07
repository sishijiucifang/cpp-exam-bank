/*
 * 来源：C++题库 题号521
 * 章节：第3章-函数
 * 难度：中
 * 题序：第39题
 *
 * 题目：设计函数，将小写英文字符变为对应的大写字符
 */

第39题 （0.1分）        题号:521        难度:中        第3章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：设计函数，将小写英文字符变为对应的大写字符。

------------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

char capitalize(char ch)
{
/**********Program**********/





/**********  End  **********/        
}

int main()
{
        int k,i=0;
        char s[30];
        fstream infile,myfile;
        infile.open("in.dat",ios::in);
        outfile.open("out.dat",ios::out);
        infile>>s;
        while(s[i]!='\0')
                {
                        s[i]=capitalize(s[i]);
                        i++;
                }
        outfile<<s<<endl;
        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
if(ch>='a'&&ch<='z') return ch-'a'+'A';
        else return ch;
   ─────────────────────────── */
