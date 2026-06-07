/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：文件"file.txt"中存放了若干字符。函数int
      tongji(int &n)是统计文件"file.txt"中数字和字
      母的个数。将字母个数存入到n中，数字的个数作为
      函数值返回。请实现该函数。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

// 文件"file.txt"中存放了一个字符串。
// 函数int tongji(int &n)是统计该字符串中数字和字母的个数。
// 将字母个数存入到n中，数字的个数作为函数值返回。请实现该函数。

int tongji(int &n)
{
/**********Program**********/



/**********  End  **********/
}

void main(void)
{

        int letterCount=0, digitCount=0;

        digitCount = tongji(letterCount);

        if(digitCount != -1){
                cout << "字符串中字母个数为：" << letterCount;
                cout << "; 数字个数为：" << digitCount << "。" << endl;

                fstream outfile;
                outfile.open("out.txt", ios::out);
                outfile <<  "字符串中字母个数为：" << letterCount;
                outfile << "; 数字个数为：" << digitCount << "。" << endl;
                outfile.close();
        }
}
