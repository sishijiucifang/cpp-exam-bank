/*
 * 来源：C++题库 题号927
 * 章节：第5章-指针
 * 难度：中
 * 题序：第217题
 *
 * 题目：该程序要求实现一个递归函数，计算下面的表达式的值并返回：
 */

第217题 （0.1分）        题号:927        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：该程序要求实现一个递归函数，计算下面的表达式的值并返回：
      m(k) = 1 + 1/2 +1/3 +… + 1/k （k>=1）。
 
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void grading();

double m(int k)
{
/**********Program**********/



/**********  End  **********/
}

int main()
{   

        int k=100;
        double result;

        result = m(k);
        cout << result <<endl;

//以下忽略阅读
                grading();

        return 0;
}

//以下忽略阅读
void grading()
{        
                fstream infile, outfile;
        infile.open("in.txt", ios::in);
        outfile.open("out.txt", ios::out);
                int k;
        for (int i=0; i<10; i++){
                infile >> k;
                outfile << m(k) <<endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
double result = 0.0;
	if (k==1) result = 1;
	else result = 1.0/k + m(k-1);
	return result;
   ─────────────────────────── */
