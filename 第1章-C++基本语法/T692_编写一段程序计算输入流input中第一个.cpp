/*
 * 来源：C++题库 题号692
 * 章节：第1章-C++基本语法
 * 难度：较易
 * 题序：第147题
 *
 * 题目：编写一段程序，计算输入流input中第一个$之前的
 */

第147题 （0.1分）        题号:692        难度:较易        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一段程序，计算输入流input中第一个$之前的
      字符数目，存入count变量。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{

        char ch;
        int count = 0;

        ifstream input;
        input.open("f1.txt", ios::in);

        /**********Program**********/




    
        /**********  End  **********/

        input.close();

        ofstream output;
        output.open("f2.txt", ios::out);

        output << count << " characters read\n";

        output.close();

        cout <<"Press the enter key to exit!" << endl;
        cin.ignore(cin.rdbuf()->in_avail() + 1);

        return 0;
}



/* ───────── 参考答案 ─────────
while (input.get(ch) && ch != '$')
        count++;
   ─────────────────────────── */
