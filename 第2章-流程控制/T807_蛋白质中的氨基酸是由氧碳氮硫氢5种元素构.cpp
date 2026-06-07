/*
 * 来源：C++题库 题号807
 * 章节：第2章-流程控制
 * 难度：较易
 * 题序：第198题
 *
 * 题目：蛋白质中的氨基酸是由氧、碳、氮、硫、氢5种元素构成，
 */

第198题 （0.1分）        题号:807        难度:较易        第2章
/*------------------------------------------------------
【程序设计】
--------------------------------------------------------

题目：蛋白质中的氨基酸是由氧、碳、氮、硫、氢5种元素构成，
    这些元素的相对原子量如下表示：
    ------------------------
    元素         相对原子量
    ------------------------
    氧（O）      15.9994
    碳（C）      12.011
    氮（N）      14.0067
    硫（S）      32.066
    氢（H）      1.0079
    ------------------------
    请完成一个计算某氨基酸的平均原子量的函数，该函数原型是：
    double averageAtomicWeight(int O, int C, int N, int S, int H);
    即输入的5个参数O、C、N、S、H分别表示该氨基酸中氧、碳、氮、硫、
    氢的原子数量，函数返回平均相对原子量的值。
    
    例如，甘氨酸（O2C2NH5）中含2个氧原子、2个碳原子、1个氮原子、
    0个硫原子、5个氢原子，所以甘氨酸的平均相对原子量为7.5067，
    类似地，蛋氨酸（O2C5NSH11）的平均相对原子量为7.46067。
--------------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

double averageAtomicWeight(int O, int C, int N, int S, int H)
{
/**********Program**********/
    
/**********  End  **********/
}

int grading();

int main()
{   
    cout << "甘氨酸（O2C2NH5）的平均相对原子量是:" << averageAtomicWeight(2, 2, 1, 0, 5) << endl;
    cout << "蛋氨酸（O2C5NSH11）的平均相对原子量是:" << averageAtomicWeight(2, 5, 1, 1, 11) << endl;
        
//忽略阅读
    grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
    ifstream infile;
    ofstream outfile;
    infile.open("in.txt", ios::in);
    outfile.open("out.txt", ios::out);
    int O, C, N, S, H;
    while (!infile.eof())
    {
        infile >> O >> C >> N >> S >> H;
        outfile << averageAtomicWeight(O, C, N, S, H) << endl;
    }
    infile.close();
    outfile.close();
    return 0;
}




/* 参考答案未提供 */
