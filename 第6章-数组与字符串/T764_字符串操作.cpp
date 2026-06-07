/*
 * 来源：C++题库 题号764
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第66题
 *
 * 题目：下面程序是类MyString的定义和使用，实现该类，
 */

第66题 （0.1分）        题号:764        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：下面程序是类MyString的定义和使用，实现该类，
      其中构造函数MyString(char *s)使用参数对str进
      行初始化，函数toLow将字符串中的所有大写字符
      变成对应的小写字母，toHigh则将字符串中所有小
      写字母变成大写字母，其它字符保持不变。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
#include<string.h>
void grading();

class MyString {
public:
        MyString(char *s);
        ~MyString();
        void toLow();
        void toHigh();
        const char* getStr();
private:
        char *str;
};

MyString::~MyString()
{
        delete []str;
}
const char* MyString::getStr() {
        return str;
}

/*********Program*********/






/*********  End  *********/
void main()
{
        MyString str("abcDEFghiJKL");
        cout<<str.getStr()<<endl;
        str.toLow();
        cout<<str.getStr()<<endl;
        str.toHigh();
        cout<<str.getStr()<<endl;
// [评分函数已省略]
}

//以下忽略阅读
void grading()
{
        int m,n,i,j;
        char s[20];
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<5;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>m;
                        s[j] = m%26+'A';
                }
                s[j]=0;
                MyString str(s);
                outfile<<str.getStr();
                str.toLow();
                outfile<<str.getStr()<<endl;
                for(j=0;j<10;j++)
                {
                        infile>>m;
                        s[j] = m%26+'a';
                }
                s[j]=0;
                MyString str1(s);
                outfile<<str.getStr();
                str1.toHigh();
                outfile<<str1.getStr()<<endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
MyString::MyString(char *s)
{
	str = new char[strlen(s)+1];
	strcpy(str,s);
}
void MyString::toLow()
{
	char *p=str;
	while(*p)
	{
		if(*p>='A' && *p<='Z')
			*p = *p + 'a'-'A';
		p++;
	}
}
void MyString::toHigh()
{
	char *p=str;
	while(*p)
	{
		if(*p>='a' && *p<='z')
			*p = *p - 'a'+'A';
		p++;
	}
}
   ─────────────────────────── */
