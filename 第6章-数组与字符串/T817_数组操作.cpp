/*
 * 来源：C++题库 题号817
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第91题
 *
 * 题目：函数closed_index的功能是在长度为 len 的浮点数数组 A 中
 */

第91题 （0.1分）        题号:817        难度:中        第6章
/*------------------------------------------------------
【程序设计】
--------------------------------------------------------

题目：函数closed_index的功能是在长度为 len 的浮点数数组 A 中
      寻找与均值的三分之一最接近元素的下标。
      说明：如果这样的元素不止一个，返回满足条件的最小下标。
      例如，main函数所给例子，计算结果为0。
      提示：计算一个数的绝对值可以使用math.h中定义的fabs函数。
--------------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------------*/

#include <iostream >
#include <fstream>
#include <math.h>
using namespace std;

int closed_index(double A[], int len) 
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main()
{
    double A[5]={22.138282, 90.645206, 96.364758, 31.923416, 78.432703};
    cout << closed_index(A,5) << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
#define N 1000
void grading()
{
    fstream  infile, outfile;
    double A[N] = {0};
    infile.open("in.txt", ios::in);
    for (int i=0; i<N; i++)
        infile >> A[i];
    infile.close();
    outfile.open("out.txt",ios::out);
    int d = closed_index(A, N);
    outfile << d;
    outfile.close();
}




/* 参考答案未提供 */
