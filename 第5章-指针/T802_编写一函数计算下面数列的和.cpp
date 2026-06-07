/*
 * 来源：C++题库 题号802
 * 章节：第5章-指针
 * 难度：中
 * 题序：第195题
 *
 * 题目：编写一函数，计算下面数列的和：
 */

第195题 （0.1分）        题号:802        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一函数，计算下面数列的和：
      m(k) = 1 + 1/2！ +1/3！ +… + 1/k！ （k>=1）。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------个--*/

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

        int k=8;
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
double sum=0;
	double jiecheng=1;
	int i;
	for(i=1;i<=k;i++)
	{
		jiecheng=jiecheng*i;
		sum=sum+1.0/jiecheng;
		
	}
    return sum;
   ─────────────────────────── */
