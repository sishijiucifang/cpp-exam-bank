/*
 * 来源：C++题库 题号522
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第40题
 *
 * 题目：设计函数char capitalize(char);将小写英文字符变为对应的大写字符
 */

第40题 （0.1分）        题号:522        难度:中        第1章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：设计函数char capitalize(char);将小写英文字符变为对应的大写字符。

-------------------------------------------------------------------------------
  注意：
  1.部分源程序给出如下。请勿改动主函数main和其它函数中的任何内容，仅在*program*
  和*end*所标记的区域内完成题干要求的函数功能。
  2.//标记开始与//标记结束内的程序可以忽略阅读。
------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
void wwjt();

/********Program********/



/********  End  ********/

int main()
{
        int i=0;
        char cp[30];
        cout<<"请输入包含小写字母的句子："<<endl;
        cin.getline(cp,30);
        while(cp[i]!='\0')
                cout<<capitalize(cp[i++]);
        cout<<endl;
        //忽略阅读
    wwjt();
        //忽略阅读结束
        return 0;
}

//忽略阅读
void wwjt()
{
        char ins[250];
        int i=0;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        infile.getline (ins,250);
        while(ins[i]!='\0') 
        {
                outfile<<capitalize(ins[i]);
                i++;
        }
        infile.close();
        outfile.close();
}
//忽略阅读结束



/* ───────── 参考答案 ─────────
char capitalize(char ch)
{
	if(ch>='a'&&ch<='z')
		return ch-'a'+'A';
	else return ch;
}
   ─────────────────────────── */
