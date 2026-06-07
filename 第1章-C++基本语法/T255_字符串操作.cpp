/*
 * 第22题 (题号:255)  难度:中  第1章
 *
 * 【程序设计】
 *
 * 题目：函数strsort对n个字符串按字母序排序（首字母相
 *       同则顺序比较下一个字母）。
 *
 * 提示：可以使用strcmp函数。
 *       int strcmp(const char *s1, const char *s2);
 *       若s1和s2相同则返回0，若s1大于s2则返回大于0的值，
 *       若s1小于s2 则返回小于0的值。
 *
 * str -- 指针数组，每个指针指向一个字符串
 * n -- 数组str的长度
 * 功能 -- 对指针数组所指向的字符串排序，使str[0]指向
 *         的字符串最小，str[1]指向的字符串次之...
 *         str[n-1]指向的字符串最大
 *
 * 注意：部分源程序给出如下。请勿改动主函数main和其它
 *       函数中的任何内容，不要修改或删除"Program"和
 *       "End"两行注释，仅在其中填入所编写的代码。
 */

#include <iostream>
#include <fstream>
using namespace std;
#include<string.h>

void grading();
void strsort(char * str[],int n)
{
/**********Program**********/
        for(int i=0;i<n;++i)
        {
                for(int j=i+1;j<n;++j)
                {
                        if(strcmp(str[i],str[j])>0)
                        {
                                char* tmp=str[i];
                                str[i]=str[j];
                                str[j]=tmp;
                        }
                }
        }



/**********  End  **********/
}
int main()
{
        int i;
        char *str[5]={"Accd","bsx","akde","bsxc","abcd"};
        strsort(str,5);
        for(i=0;i<5;i++)
                cout<<str[i]<<'\t';
        cout<<endl;
        grading();
}
