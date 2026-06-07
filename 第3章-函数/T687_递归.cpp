/*
 * 来源：C++题库 题号687
 * 章节：第3章-函数
 * 难度：中
 * 题序：第143题
 *
 * 题目：编写一个递归函数，计算下面的级数：
 */

第143题 （0.1分）        题号:687        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个递归函数，计算下面的级数：
      m(k) = 1 + 1/2 +1/3 +… + 1/k （k>=1）。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

double m(int k)
{
/**********Program**********/





/**********  End  **********/
}

int main(void)
{   

        int k=100;
        double result;

        result = m(k);
        cout << result <<endl;

//以下忽略阅读
        fstream infile, outfile;
        infile.open("in.txt", ios::in);
        outfile.open("out.txt", ios::out);
        for (int i=0; i<10; i++){
                infile >> k;
                outfile << m(k) <<endl;
        }
        infile.close();
        outfile.close();

        return 0;
}



/* ───────── 参考答案 ─────────
double result = 0.0;
	if (k==1) result = 1;
	else result = 1.0/k + m(k-1);
	return result;
   ─────────────────────────── */
