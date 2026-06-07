/*
 * 来源：C++题库 题号809
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第200题
 *
 * 题目：实现计算两个正整数的最大公约数函数gcd和最小公倍数函数lcm
 */

第200题 （0.1分）        题号:809        难度:中        第4章
/*------------------------------------------------------
【程序设计】
--------------------------------------------------------

题目：实现计算两个正整数的最大公约数函数gcd和最小公倍数函数lcm。
--------------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

//计算a和b的最大公约数
int gcd(int a, int b)
{
/**********Program**********/
    
/**********  End  **********/
}

//计算a和b的最小公倍数
int lcm(int a, int b)
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main(int argc, char** argv)
{
    cout << "gcd(12, 3) = " << gcd(12, 3) << endl;
    cout << "lcm(12, 3) = " << lcm(12, 3) << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    fstream infile, outfile;
    infile.open("in.txt", ios::in);
    outfile.open("out.txt",ios::out);
    int a, b;
    while(!infile.eof())
    {
        infile >> a >> b;
        outfile << gcd(a, b) << " " << lcm(a, b) << endl;
    }
    infile.close();
    outfile.close();
}




/* 参考答案未提供 */
