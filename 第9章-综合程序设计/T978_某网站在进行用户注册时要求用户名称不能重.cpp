/*------------------------------------------------------
【程序设计】
--------------------------------------------------------

题目：某网站在进行用户注册时要求用户名称不能重复，已有
      用户名以行为单位保存在一个文本文件中，即文件的每
      一行是一个用户名称，并且用户名中没有空格、制表符
      等分隔字符。请为该网站完成检查用户是否存在的函数
      bool checkUserName(char *fileName, char *userName)，
      参数fileName是保存网站已有用户名的文件名称，userName
      是新注册的用户名，该函数返回一个布尔类型，即如果
      新注册用户名在网站中已经存在则返回false，否则返回true。

提示：用C++的流方式读取文件，可以使用流对象的eof方法判断
      是否读取到文件结束，用C的文件指针方式读取文件，
      可以使用feof函数判断是否读取到文件结束。比较两个
      字符串可以使用库函数int strcmp(char *s1, char *s2)，
      该函数比较字符串s1和s2的字典序，若s1<s2，则返回-1；
      若s1==s2，则返回0；若s1>s2，则返回1。
      样例测试中"administrator"已经存在，"cppfans"不存在。
--------------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int grading();

bool checkUserName(char *fileName, char *userName)
{
/**********Program**********/
    ifstream file(fileName);

    char nm[20];

    while(file>>nm)
    {
        if(strcmp(nm,userName)==0)
        {
            return false;
        }
    }
    return true;

/**********  End  **********/
}

int main()
{
    cout << "administrator在网站中" << (checkUserName("UserNames.txt", "administrator")?"不":"已经") << "存在"<< endl;
    cout << "cppfans在网站中" << (checkUserName("UserNames.txt", "cppfans")?"不":"已经") << "存在"<< endl;
//忽略阅读
    grading();
    system("pause");
//忽略阅读结束
    return 0;
}

//以下忽略阅读
int grading()
{
    ifstream infile;
    ofstream outfile;
    infile.open("in.dat", ios::in | ios::binary);
    outfile.open("out.txt", ios::out);
    char userName[20];
    char *fileName = "UserNames.txt";
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            infile.read(userName, sizeof(userName));
            outfile << checkUserName(fileName, userName);
        }
        outfile << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
