/*
 * 第35题 (题号:731)  难度:中  第6章
 *
 * 【程序设计】
 *
 * 题目：完成函数sortLine(char * line[], int n);的编写。
 *       其参数line是一个指向字符串的指针数组，n是指针
 *       数组元素的个数，该函数对这些字符串按降序排列。
 * 注：在比较了两个串的大小之后需要交换两个串时，只需
 *       交换line中指向两个字符串的指针，不必交换串本身。
 *
 * 注意：部分源程序给出如下。仅在标有"Program"和"End"的
 *       注释行之间补充代码，请勿改动其它内容。
 */

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void grading();

void sortLine(char * line[], int n)
{
/**********Program**********/



/**********  End  **********/
}

int main()
{
        char s[4][10]={"abc", "kjf", "bde", "poi"};
        char *line[4] = {s[0],s[1],s[2],s[3]};
        sortLine(line,4);
        for(int i=0;i<4;i++)
        {
                cout<<line[i]<<endl;
        }
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}
