/*
 * 来源：C++题库 题号665
 * 章节：第3章-函数
 * 难度：中
 * 题序：第128题
 *
 * 题目：编写一个函数：将一个N进制数转换成M进制数（N和M在2到10进制之间），
 */

第128题 （0.1分）        题号:665        难度:中        第3章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写一个函数：将一个N进制数转换成M进制数（N和M在2到10进制之间），
      N进制数和M进制数均以字符串方式存储。

-------------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

//将一个长度为len的N进制的数字字符串str转换M进制，
//转换后的M进制数存放在str中，其长度作为返回值返回。
int trans(char str[], int len, int N, int M)
{

/**********Program**********/











 
/**********  End  **********/

}

int wwjt();
void main(void)
{   

        char str[20]="10011101010100100";
        int N=2, M=10;
        int len=17, count;
        count = trans(str, len, N, M);
        for (int i=0; i<count; i++)
                cout << str[i];
        cout << endl;

//忽略阅读
    wwjt();
//忽略阅读结束
}

//以下忽略阅读
int wwjt()
{

        fstream infile, outfile;
        char str[200];
        int N, M;
        int len, count;

        infile.open("in.txt", ios::in);
        if (!infile) return -1;
        infile >> str >> N >> M;
        infile.close();

        len = 0;
        while (str[len]!='\0')
                len++;

        if (len!=0){
                count = trans(str, len, N, M);
                outfile.open("out.txt", ios::out);
                for (int i=0; i<count; i++)
                        outfile << str[i];
                outfile.close();
        }

        return 0;

}



/* 参考答案未提供 */
