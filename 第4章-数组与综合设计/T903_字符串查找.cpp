/*
 * 来源：C++题库 题号903
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第206题
 *
 * 题目：函数find_last的功能是在给定的字符串chArr中查找字符ch，
 */

第206题 （0.1分）        题号:903        难度:中        第4章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------
题目：函数find_last的功能是在给定的字符串chArr中查找字符ch，
      如果包含字符ch，则返回该字符在chArr中最后一次出现的下标，
      否则，返回-1。需要注意下标是从0开始。
--------------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

int find_last(char *chArr, char ch)
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

#define N 1000
int main(int argc, char** argv)
{
    cout << find_last("asdfasdefgrhsaaad", 'f') << endl;
    cout << find_last("asdfasdefgrhsaaad", 'k') << endl;
    cout << find_last("asdfasdefgrhsaaad", 'a') << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读grading();
void grading()
{
    fstream  infile, outfile;
    char A[N] ={0}, ch;
    infile.open("in.txt", ios::in);
    outfile.open("out.txt",ios::out);
    for(int i = 0; i < 100; i++)
    {
        infile >> A >> ch;                        
        int d=find_last(A, ch);
        outfile << d << endl;
    }
    infile.close();
    outfile.close();        
}




/* 参考答案未提供 */
