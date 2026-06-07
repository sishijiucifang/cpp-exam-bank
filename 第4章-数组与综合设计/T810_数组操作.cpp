/*
 * 来源：C++题库 题号810
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第201题
 *
 * 题目：rev_num (int A[], int len) 函数的功能是计算数组 A
 */

第201题 （0.1分）        题号:810        难度:中        第4章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------
题目： rev_num (int A[], int len) 函数的功能是计算数组 A
      的“逆序数”，其中 len 是数组的长度。设 a 是 A 中的元素，
      则 a 的“逆序数”定义为 A 中出现在 a 之后（索引值大于a的
      索引值的所有元素）比 a 大的元素数目；而 A 的逆序数则是 A 
      中所有元素逆序数之和。例如，对main函数所给例子，结果为1。
---------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------*/

#include <iostream >
#include <fstream>
using namespace std;

int rev_num (int A[], int len) 
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main()
{
    int A[5] = {20, 17, 15, 17, -4};
    cout << rev_num(A, 5) << endl;
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
    int A[N] = {0};
    infile.open("in.txt", ios::in);
    for (int i=0; i<N; i++)
        infile >> A[i];
    infile.close();
    outfile.open("out.txt",ios::out);
    int d = rev_num(A, N);
    outfile << d;
    outfile.close();
}




/* 参考答案未提供 */
