/*
 * 来源：C++题库 题号819
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第93题
 *
 * 题目：请完成函数double phi(double z)，该函数计算并返回给定z时，
 */

第93题 （0.1分）        题号:819        难度:中        第6章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------
题目：请完成函数double phi(double z)，该函数计算并返回给定z时，
      z+z^3/3+z^5/(3*5)+…+z^1001/(3*5*7*…*1001)的值。
      公式中“z^3”表示z的三次方。例如， phi(0.3)=0.309164，
      phi(2.1)=10.9617。
      提示：如果直接求算式中各项的分子和分母，其值将会很快溢出。
---------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------*/

#include <iostream >
#include <fstream>
using namespace std;

double phi(double z) 
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main(int argc, char** argv)
{
    cout << "phi(0.3)=" << phi(0.3) << endl;
    cout << "phi(2.1)=" << phi(2.1) << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    fstream outfile;
    outfile.open("out.txt",ios::out);
    double index = 0.1;
    while(index <= 4.0)
    {
        outfile << phi(index) << endl;
        index += 0.1;
    }
    outfile.close();
}






/* 参考答案未提供 */
