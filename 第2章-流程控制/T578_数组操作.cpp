/*
 * 第57题 (题号:578)  难度:中  第2章
 *
 * 【程序设计】
 * 题目：将数组S中所有小写字母改写成大写字母。
 */

#include<fstream>
#include<iostream>
#include <string>
using namespace std;
void wwjt(char []);

void fun(char s[])
{
/**********Program**********/



/**********  End  **********/
}

void main()
{
        char s[80] = "abdsaFDSAFdsafASFDSafghHFDHTjte";
        fun(s);
        wwjt(s);
}
void wwjt(char s[])
{
        fstream myfile;
        myfile.open("out.dat",ios::out);
        myfile<<s<<endl;
        myfile.close();
}
