/*
 * 来源：C++题库 题号262
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第27题
 *
 * 题目：完成函数sofp的编写，该函数计算n以内（不包含n）
 */

第27题 （0.1分）        题号:262        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 完成函数sofp的编写，该函数计算n以内（不包含n）
       的所有素数之和并返回。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int sofp(int n);

int main()
{
        int  n, i, sum;

        cout<<"input n:";
        cin>>n;
        cout<<"n以内的素数和为："<<sofp(n)<<endl;

//忽略阅读开始     
        ifstream infile;
        ofstream outfile;
        infile.open("in.txt", ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<4;i++)
        {
                infile >> n;
                sum = sofp(n);
                outfile<<sum<<endl;
        }
        infile.close();
        outfile.close();
//忽略阅读结束

        return 0;
}


int sofp(int n)
{
        /**********Program**********/



        /**********  End  **********/
}
        
        



/* ───────── 参考答案 ─────────
int i, sum=0, k;
	for(i=2; i<n; i++)
	{
		bool prime=true;
		for(k=2; k<=i/2; k++)
			if(i%k==0)
			{
				prime = false;
				break;
			}
			if(prime)
				sum+=i;
	}
	return sum;
   ─────────────────────────── */
