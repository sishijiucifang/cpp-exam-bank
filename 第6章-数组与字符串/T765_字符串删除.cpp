/*
 * 来源：C++题库 题号765
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第67题
 *
 * 题目：下面函数strdelstr从字符串s中删除所有字符串t，
 */

第67题 （0.1分）        题号:765        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：下面函数strdelstr从字符串s中删除所有字符串t，
      并返回删除t后的新的字符串s。如s指向"abcdbcd",
      t指向"bc"，则执行该函数后，s指向的字符串变成
      "add"，完成该函数的编写，可以使用<string.h>
      中的函数。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void grading();

char * strdelstr(char *s, char *t)
{
/*********Program*********/






/*********  End  *********/

}

void main()
{
        char s[30] = "abcdefabcdef";
        char t[4] = "bc";
        cout<<strdelstr(s,t)<<endl;
// [评分函数已省略]
}

//以下忽略阅读
void grading()
{
        int m,i,j,k=1;
        char s[30];
        char t[4];
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                k=(k==1)?2:1;
                for(j=0;j<20;j++)
                {
                        infile>>m;
                        s[j] = m%26+'a';
                }
                s[j]=0;
                outfile<<s;
                strncpy(t,s+11,k);
                t[k]=0;
                outfile<<strdelstr(s,t)<<endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
char *p = s;
	while(p)
	{
		p = strstr(p,t);
		if(p)
		{
			strcpy(p,p+strlen(t));
		}
	}
	return s;
   ─────────────────────────── */
