/*
 * 第29题 (题号:713)  难度:较难  第6章
 *
 * 【程序设计】
 *
 * 题目：函数char *dels(char *s, char *c);去掉字符串s
 *       中的子字符串c，并将新得到的字符串返回，完成
 *       该函数(不考虑去掉子字符串c后形成的新的子字
 *       符串c)。例如s为"abcabcd"，c为"bc"，则调
 *       用该函数后，s为"aad"。
 *
 * 注意：部分源程序给出如下。请勿改动主函数main和其它
 *       函数中的任何内容，仅在函数的花括号中填入所编
 *       写的若干语句。
 */

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

char * delsub(char *str, char *sub)
{
    char *psrc = str, *pdest = str, *psub, *p;

   if((str == NULL) || (sub == NULL))
       return str;

   /**********Program**********/
    while(*psrc!='\0')
    {
        if(strncmp(psrc,sub,strlen(sub))==0)
        {
            psrc+=strlen(sub);
        }
        else
        {
            *pdest=*psrc;
            psrc++;
            pdest++;
        }
    }
    *pdest='\0';
    return str;
  /**********  End  **********/

   return str;
}

int main()
{
char  str[] = "abcdefghiabc";
char  sub[] = "abc";
cout<<"first str = "<<str<<endl;
cout<<"sub      str = "<<sub<<endl;
char * str1;
void writeinfile(char *str2);
str1=delsub(str,sub);

cout<<"after del = "<<str1<<endl;
writeinfile(str1);
return 0;
}
void writeinfile(char *str2)
{
fstream myfile;
myfile.open("f.txt",ios::out);
myfile<<str2<<endl;
myfile.close();
}
