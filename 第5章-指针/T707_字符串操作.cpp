/*
 * 来源：C++题库 题号707
 * 章节：第5章-指针
 * 难度：中
 * 题序：第161题
 *
 * 题目：从文件中读入n个字符串，将其中以字母A开头的字符串复制
 */

第161题 （0.1分）        题号:707        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：从文件中读入n个字符串，将其中以字母A开头的字符串复制
      到二维字符数组str1中。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
# include <iostream>
# include <fstream>
# include <string>
using namespace std;
# define n 5
# define M 20
void wwjt(int len);
char str1[n][M];
void main()
{
        int i;
        char str[n][M];
        ifstream infile("in.txt",ios::in);
        if(!infile.is_open())
        {
           cout<<"File Open Error!"<<endl;
           return;
        }
        for(i=0;i<n;i++) 
            infile>>str[i];
        infile.close();
        int j=0;
        /**********Program**********/




       /**********  End  **********/
       wwjt(j);
}
void wwjt(int len)
{
        ofstream outfile("out.txt",ios::out);
        if(!outfile.is_open())
        {
                cout<<"File Open Error"<<endl;
                return;
        }
        for(int i=0;i<len;i++)
                outfile<<str1[i]<<"\n";
        outfile.close();
}


/* ───────── 参考答案 ─────────
for(i=0;i<n;i++)
{
   if((strcmp(str[i],"A")>=0)&&(strcmp(str[i],"B")<0))
   { strcpy(str1[j],str[i]);
     j++;
   }
}
   ─────────────────────────── */
