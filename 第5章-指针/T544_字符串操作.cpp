/*
 * 第54题 (题号:544)  难度:较难  第5章
 *
 * 【程序设计】
 * 题目：编写函数 char *itoa(int n, char *string);
 *       将整数n转换为十进制表示的字符串。
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
        int num;
        char st[20];
        cin>>num;
        cout<<"输出数字串：\""<<itoa(num,st)<<"\""<<endl;
        //忽略阅读
        wwjt();
        //忽略阅读结束
        return ;
}

//忽略阅读
void wwjt()
{
        int m,j;
        char s[20];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(j=0;j<10;j++)
        {
                infile>>m;
                outfile<<itoa(m,s)<<endl;
        }
        infile.close();
        outfile.close();
}
