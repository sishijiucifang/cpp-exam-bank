/*
 * 第52题 (题号:541)  难度:中  第3章
 *
 * 【程序设计】
 * 题目：编写函数int atoi(char s[])，将字符串s转化为整型数返回。
 *       注意负数处理方法。
 *
 * 提示：用指针处理字符串非常方便。使用符号位来处理负数。
 */

#include<iostream>
#include<fstream>
#include <cstdlib>
#include <cmath>
using namespace std;
void wwjt();

/*******Program*******/



/*******  End  *******/

void main()
{
        char num[20];
        cin.getline(num,19);
        cout<<atoi(num)<<'\n';

   //忽略阅读
    wwjt();
   //忽略阅读结束
   return ;
}

//忽略阅读
void wwjt()
{
        int j;
        char m[20];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(j=0;j<10;j++)
        {
                infile>>m;
                outfile<<atoi(m)<<endl;
        }
        infile.close();
        outfile.close();
}
