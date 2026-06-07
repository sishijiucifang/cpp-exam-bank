/*
 * 第192题 (题号:793)  难度:中  第5章
 *
 * 【程序设计】
 *
 * 题目：下面的函数f对参数p指向的字符串进行原地逆转，
 *       例如：如果p指向的字符串是"abc def"，则逆转后
 *       p指向的字符串变为"fed cba"。实现该函数。
 *
 * 注意：部分源程序给出如下。请勿改动主函数main和其它
 *       函数中的任何内容，不要修改或删除"program"和
 *       "End"两行注释，仅在其中填入所编写的代码。
 */

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
void grading();
void f(char *p);

/**********Program**********/



/**********  End  **********/

int main()
{
        char str[100];
        cout<<"请输入一行字符：";
        cin.getline(str,99);
        f(str);
        cout<<"逆转的字符串为："<<str<<endl;
        grading();
        return 0;
}
