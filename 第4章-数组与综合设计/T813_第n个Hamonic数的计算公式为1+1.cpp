/*
 * 来源：C++题库 题号813
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第203题
 *
 * 题目：第n个Hamonic数的计算公式为：1+1/2+…+1/n，请完成
 */

第203题 （0.1分）        题号:813        难度:中        第4章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------
题目：第n个Hamonic数的计算公式为：1+1/2+…+1/n，请完成
      函数double hamonic(n)，计算第n个Hamonic数。例如，
      hamonic(10)=2.92897，hamonic(10000)=9.78761。
---------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------*/

#include <iostream >
#include <fstream>
using namespace std;

double hamonic(int n) 
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main()
{
    cout << "hamonic(10)=" << hamonic(10) << endl;
    cout << "hamonic(10000)=" << hamonic(10000) << endl;
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
    for(int i = 10000; i < 10100; i++)
        outfile << hamonic(i) << endl;
    outfile.close();
}






/* 参考答案未提供 */
