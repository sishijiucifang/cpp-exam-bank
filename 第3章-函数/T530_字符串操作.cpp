/*
 * 来源：C++题库 题号530
 * 章节：第3章-函数
 * 难度：中
 * 题序：第48题
 *
 * 题目：编写函数IfDigitChar(ch)，判断字符ch是否为数字字
 */

第48题 （0.1分）        题号:530        难度:中        第3章
/*-----------------------------------------------------
【程序设计】
-------------------------------------------------------

题目：编写函数IfDigitChar(ch)，判断字符ch是否为数字字
      符，是则返回1，否则返回0。
  
---------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它函数
      中的任何内容，仅在*Program*和*End*所标记的区域内
      完成题干要求的函数功能。
------------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
int grading();

int IfDigitChar(char ch);

/*********Program*********/





/*********  End  *********/

int main()
{
        char ch;
        cout<<"请输入一个字符："<<endl;
        cin>>ch;
        if(IfDigitChar(ch)) 
                cout<<ch<<" is a digit char"<<endl;
        else 
                cout<<ch<<" is not a digit char"<<endl;
        
        //忽略阅读
        grading();
        //忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        char m;
        int i,j;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        
        for (i=0;i<4;i++)
        {
                for (j=0;j<6;j++)
                {
                        infile>>m;
                        outfile<<IfDigitChar(m);
                }
                outfile<<endl;
        }

        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
int IfDigitChar(char ch)
{
	if(ch>='0'&&ch<='9')
		return 1;
	else
		return 0;
}
   ─────────────────────────── */
