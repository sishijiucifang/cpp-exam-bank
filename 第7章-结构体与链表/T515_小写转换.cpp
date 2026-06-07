/*
 * 来源：C++题库 题号515
 * 章节：第7章-结构体与链表
 * 难度：较易
 * 题序：第9题
 *
 * 题目：编写函数fun，将字符串s中所有小写字母改写成
 */

第9题 （0.1分）        题号:515        难度:较易        第7章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数fun，将字符串s中所有小写字母改写成
      大写字母，其它字符保持不变。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

void fun(char s[])
{
    /**********Program**********/


                
    /**********  End  **********/        
}

int grading();
int main()
{
        char t[20]="abcJHG674";

        fun(t);
        cout<<t<<endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        int i;
        char s[800];

        ifstream ifile;
        ofstream ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);

        for (i=0;i<5;i++)
        {
                ifile>>s;
                fun(s);
                ofile<<s<<endl;
        }

        ifile.close();
        ofile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
for (int i=0; i<strlen(s); i++)
		if (s[i]>='a' && s[i]<='z')
			s[i]=s[i]-'a'+'A';
   ─────────────────────────── */
