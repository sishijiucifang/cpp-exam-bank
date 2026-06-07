/*
 * 来源：C++题库 题号159
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第13题
 *
 * 题目：编写函数，void num_count(int a[N], int &, int &)
 */

第13题 （0.1分）        题号:159        难度:中        第4章
/*------------------------------------------------
【程序设计】
------------------------------------------------------

题目：编写函数，void num_count(int a[N], int &, int &)
      在长度为 N 的一维数组中分别统计正数和负数的个数。
      其中，正、负数的数目分别返回在第二个和第三个参数中。 

------------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------------*/


#include <iostream>
#include <fstream>
using namespace std;
int grading();

#define N 10

void num_count(int a[N], int & c1, int & c2)
{
        c1 = c2 =0;
        /**********Program**********/
        

                
        /**********  End  **********/
}

int main()
{
        int a[N]= {10, -2, 230, -98, 0, 21, -2, -333, 1, -1};
        int o, p;

        num_count(a, o, p);
        cout << o << endl;
        cout << p << endl;

//忽略阅读
        grading();
//忽略阅读结束

        return 0;

}

//以下忽略阅读
int grading()
{
        fstream infile("in.txt",ios::in);
        fstream outfile("out.txt",ios::out);
        int a[N];
        int o, p;

        for (int i=0; i<4; i++){
                for (int j=0;j<N;j++)
                        infile >> a[j];
                num_count(a, o, p);
                outfile << o << " " << p << endl;
        }

        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
for (int i=0;i<N;i++)
		if (a[i]>0) 
			c1++;
		else if (a[i]<0)
			c2++;
   ─────────────────────────── */
