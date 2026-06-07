/*
 * 来源：C++题库 题号820
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第94题
 *
 * 题目：编写递归函数void decToBin(ostream &out, unsigned long num)，
 */

第94题 （0.1分）        题号:820        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：编写递归函数void decToBin(ostream &out, unsigned long num)，
      实现十进制无符号整数到二进制数的转换。
      参数out为输出流，其使用方式与标准输出流cout一样，
      例如，语句out<<num表示向流out中输出num的值。
      参数num为一个无符号十进制数。

      递归提示：例如，如果要输出13的二进制数1101，可以考虑
      先递归输出13的前面的三个二进制数110，最后再输出结尾的1。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream> 
#include <fstream>
using namespace std;

void decToBin(ostream &out, unsigned long num)
{
/*********Program*********/
    
/*********  End  *********/
}

void grading();

int main ( )
{ 
    decToBin(cout, 0);
    cout << endl;
    decToBin(cout, 1);
    cout << endl;
    decToBin(cout, 4);
    cout << endl;
    decToBin(cout, 123456789);
    cout << endl;
    decToBin(cout, 876543210);
    cout << endl;

//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    fstream  infile, outfile;
    unsigned long A;
    int index = 1;
    infile.open("in.txt", ios::in);
    outfile.open("out.txt",ios::out);
    while(infile.good())
    {
        infile >> A;                        
        decToBin(outfile, A*index);
        outfile << endl;
        index++;
    }
    infile.close();
    outfile.close();
}




/* 参考答案未提供 */
