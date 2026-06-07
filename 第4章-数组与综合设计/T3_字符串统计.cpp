/*
 * 第1题 (题号:3)  难度:中  第4章
 *
 * 【程序设计】
 * 题目：函数count统计字符串str中的英文字符的个数，并
 *       出现最多的英文字符和出现次数存放到全局变量c和
 *       num中，区分大小写。例如字符串"abcafaAAghk"
 *       出现最多的是'a'，出现次数是3。如果有多个字符
 *       出现次数一样多，c中随便记录其中一个即可
 *       完成该函数的编写。
 *
 * 注意：请勿改动主函数main和其它函数中的任何内容。
 */

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
void grading();
char c;
int num;
void count(char *str);

/**********Program**********/
void count(char* str)
{
        int cnt[128] = {0};
        num = 0;
        c = 'a';

        while (*str != '\0') {
                if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) {
                        cnt[(int)*str]++;
                }
                str++;
        }

        for (int i = 0; i < 128; i++) {
                if (cnt[i] > num) {
                        num = cnt[i];
                        c = (char)i;
                }
        }
}


/**********  End  **********/

int main()
{
        char s[1000];
        cout<<"请输入一个字符串:";
        cin>>s;
        count(s);
        cout<<s<<"中最多的英文字符是："<<c<<"，个数："<<num<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i, j, n;
        char s[2000],t[2000];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(j=0;j<1500;j++)
        {
                infile>>n;
                s[j]=n%('z'-'A')+'A';
        }
        s[1500]=0;
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        strcpy(t,s+i*10+j*10);
                        t[500]=0;
                        count(t);
                        outfile<<num<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}
