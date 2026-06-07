/*
 * 来源：C++题库 题号798
 * 章节：第6章-数组与字符串
 * 难度：难
 * 题序：第82题
 *
 * 题目：下面函数strappstr在字符串s的每一个子字符串t后面
 */

第82题 （0.1分）        题号:798        难度:难        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：下面函数strappstr在字符串s的每一个子字符串t后面
插入一个子字符串x，并返回插入后的新的字符串s。如s指向
"abcdbcd",t指向"bc"，x指向"yz"，则执行该函数后，s指向
的字符串变成"abcyzdbcyzd"，完成该函数的编写，可以使用
<string.h>中的函数。

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

char * strappstr(char *s, char *t, char *x)
{
/*********Program*********/






/*********  End  *********/

}

void main()
{
        char s[30] = "abcdefabcdef";
        char t[4] = "bc";
        char x[4] = "yz";
        cout<<strappstr(s,t,x)<<endl;
// [评分函数已省略]
}

//以下忽略阅读
void grading()
{
        int  i;
        char s[100];
        char t[10];
        char x[10];
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
               
                infile>>s>>t>>x;


                outfile<<strappstr(s,t,x)<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
char dest[100]="";
	char temp[100]="";
	char *p,*q;
	int i;
	int k=strlen(t);
	int l=strlen(x);
	p=s;
	q=dest;
	while(*p!='\0')
	{
		for(i=0;i<k;i++)
	      temp[i]=p[i];
		temp[i]='\0';
		if(strcmp(temp,t)==0)
		{
            strcat(dest,t);
			strcat(dest,x);
			p=p+k;
			q=q+k+l;
		}
		else
		{
			*q=*p;
			q++;
			p++;
		}
	}
    strcpy(s,dest);
    return s;
   ─────────────────────────── */
