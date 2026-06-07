/*
 * 来源：C++题库 题号711
 * 章节：第13章-综合应用
 * 难度：中
 * 题序：第28题
 *
 * 题目：分别输入一个整数、一个浮点数、一个字符、一个
 */

第28题 （0.1分）        题号:711        难度:中        第13章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：分别输入一个整数、一个浮点数、一个字符、一个
      字符串，将它们写入一个新建的文件中(用换行符
      分隔)，并将它们从该文件中读出并显示。
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void wwjt();
int i;
float f;
char  ch;
char  str[40];
char filename[40];
void writefile(char filename[], int i,float f,char ch, char str[])
{
    /**********Program**********/




  /**********  End  **********/
 
}
void readfile(char filename[])
{
       
      /**********Program**********/




      /**********  End  **********/
}
void main()
{
  int i;
  float f;
  char  ch;
  char  str[40];
 cin>>filename;
  cin>>i;
  cin>>f;
  cin>>ch;
  cin>>str;
  writefile(filename,i,f,ch,str);
  readfile(filename);
  wwjt();
}
void wwjt()
{
        writefile("out.txt",2344,0.1234,'c',"Hello World");
        readfile("out.txt");
}



/* ───────── 参考答案 ─────────
ofstream outfile(filename,ios::out);
      if(outfile.is_open())
      {
         cout<<"Open File Error!"<<endl;
         return;  
       }
       outfile<<i<<" "<<f<<" "<<ch<<" "<<string<<" ";
       outfile.close();
ifstream infile(filename,ios::in);
       if(infile.is_open())
       {
          cout<<"Open File Error!"<<endl;
          return;  
       }
       infile>>i>>f>>ch>>string;
       cout<<i<<" "<<f<<" "<<ch<<" "<<string<<endl;
       infile.close();
   ─────────────────────────── */
