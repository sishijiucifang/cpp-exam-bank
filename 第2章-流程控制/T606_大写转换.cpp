/*
 * 第83题 (题号:606)  难度:中  第2章
 *
 * 【程序设计】
 * 题目：将所给字符数组中的所有小写字母改写成大写字母，
 *       并利用所给输出函数输出到文件。
 */

#include<fstream>
#include<iostream>
#include <string>
using namespace std;

void output(char s[]);
void input(char s[]);

void fun(char s[])
{
        int i;
/**********Program**********/



  /**********  End  **********/
}

int main()
{
        char s[80];

                input(s);
        fun(s);
        output(s);

                cout << s << endl;

                cout <<"Press the enter key to exit!" << endl;
            cin.ignore(cin.rdbuf()->in_avail() + 1);

                return 0;
}

void input(char s[])
{
        ifstream infile("f1.txt", ios::in);
        infile >> s;
        infile.close();
}

void output(char s[])
{
        ofstream myfile;
        myfile.open("f2.txt",ios::out);
        myfile<<s<<endl;
        myfile.close();
}
