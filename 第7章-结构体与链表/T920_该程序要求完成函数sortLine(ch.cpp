/*
 * 第99题 (题号:920)  难度:中  第7章
 *
 * 【程序设计】
 *
 * 题目：该程序要求完成函数sortLine(char * line[], int n)，其中，
 * 参数line是一个指向字符串的指针数组，n是指针数组元素的个数，
 * 该函数功能为：将字符串按降序排列。
 * 提示：在比较了两个串的大小之后，若需要交换两个字符串，
 * 只需交换line中指向两个字符串的指针，不必交换字符串本身。
 *
 * 注意：部分源程序给出如下。请勿改动主函数main和其它
 *       函数中的任何内容，不要修改或删除"program"和
 *       "End"两行注释，仅在其中填入所编写的代码。
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
