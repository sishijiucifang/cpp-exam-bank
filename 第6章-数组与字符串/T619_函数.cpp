/*
 * 第13题 (题号:619)  难度:中  第6章
 *
 * 【程序设计】
 *
 * 题目：请编写函数
 *            int strlen(char*s)
 *       统计字符串s的长度，返回字符串s的长度。
 *       (不允许调用标准库函数)
 *
 * 注意：部分源程序给出如下。请勿改动主函数main和其它
 *       函数中的任何内容，仅在函数的花括号中介于
 *       "**********Program**********"
 *       和
 *       "**********  End  **********"
 *       的部分填入所编写的若干语句。
 */

#include<iostream>
#include <fstream>
using namespace std;

int strlen(char *s)
{
/**********Program**********/
    int ans=0;
    while(*s!='\0')
    {
        ans++;
        s++;
    }

    return ans;
/**********  End  **********/
}

#define N 20

int main()
{

    ifstream inf("in.dat",ios::in);
    ofstream ouf("out.dat",ios::out);
    char str[N];
    inf>>str;
    ouf << strlen(str);
    inf.close();
    ouf.close();
    return 0;
}
