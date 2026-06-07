/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一段程序，从文件f1.txt中读入单词（每个单
      词长度不超过40个字母，单词之间以空格相间隔），
      在碰到单词"done"时结束，并将读入的单词个数
      （不包括"done"）存放在count变量中。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

------------------------------------------------*/

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int STR_LIM = 50;

int main()
{
    char word[STR_LIM];
    int count = 0;

    ifstream input;
    input.open("f1.txt", ios::in);

    /**********Program**********/




    /**********  End  **********/

    input.close();

    ofstream output;
    output.open("f2.txt", ios::out);

    output << "You entered a total of " << count << " words.\n";

    output.close();

    cout <<"Press the enter key to exit!" << endl;
    cin.ignore(cin.rdbuf()->in_avail() + 1);

    return 0;
}
