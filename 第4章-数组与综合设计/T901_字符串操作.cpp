/*
 * 来源：C++题库 题号901
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第204题
 *
 * 题目：编写递归函数void convert(ostream &out, unsigned long num)，
 */

第204题 （0.1分）        题号:901        难度:中        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：编写递归函数void convert(ostream &out, unsigned long num)，
      实现将无符号整数num的各位数字之间插入字符'-'输出。
      例如，如果num为1234，则输出为1-2-3-4。
      说明：参数out为输出流，其使用方式与标准输出流cout一样，
      例如，语句out<<num表示向流out中输出num的值。
         
      递归提示：要实现1234按要求输出，可以考虑先把123按要求输出，
      最后再输出字符'-'和4。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream> 
#include <fstream>
using namespace std;

void convert(ostream &out, unsigned long x)
{ 
/*********Program*********/
    
/*********  End  *********/
}

void grading();

int main ( )
{ 
    convert(cout, 1234567890);
    cout << endl;
    convert(cout, 876543210);
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
    while (infile.good())
    {
        infile >> A;                        
        convert(outfile, A*index);
        outfile << endl;
        index++;
    }
    infile.close();
    outfile.close();
}




/* 参考答案未提供 */
