/*
 * 来源：C++题库 题号822
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第96题
 *
 * 题目：upper(char *chArr)函数的功能是将字符数组chArr
 */

第96题 （0.1分）        题号:822        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：upper(char *chArr)函数的功能是将字符数组chArr
     中所有小写英文字母变成对应的大写字母。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;

void upper(char *chArr)
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main()
{
    char A[] = "jS72W45e65w3tdei4m017j6npj4Act";
    upper(A);
    cout << A << endl;
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
    char A[N] ={0};
    infile.open("in.txt", ios::in);
    outfile.open("out.txt",ios::out);
    while(infile.good()){
        infile >> A;                        
        upper(A);
        outfile << A << endl;
    }
    infile.close();
    outfile.close();
}




/* 参考答案未提供 */
