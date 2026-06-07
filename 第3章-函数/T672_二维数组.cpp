/*
 * 来源：C++题库 题号672
 * 章节：第3章-函数
 * 难度：中
 * 题序：第134题
 *
 * 题目：函数mySum(int a[ ][ ], int m, int n)返回二维
 */

第134题 （0.1分）        题号:672        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数mySum(int a[ ][ ], int m, int n)返回二维
      整数数组a中所有元素的和，m、n分别为数组a的行
          数、列数。填写适当的代码，使得mySum()完成正确
          的功能。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;

int mySum(int a[2][3], int m, int n);
void gfkd();

void main()
{        int        a[2][3]={{1,2,3}, {4,5,6}};

        cout << mySum(a, 2, 3) << endl;

        // -------- main()函数此后部分可以不阅读 -----------
        gfkd();
}

int mySum(int a[2][3], int m, int n)
{
/*************** Program *****************/
        




/*************** End *****************/
}

void gfkd()
{        fstream myF;
        int        a[2][3];

        myF.open("in.dat",ios::in);
    myF.read((char *)a, sizeof(int)*2*3);
    myF.close();

    myF.open("out.dat",ios::out);
    myF << mySum(a, 2, 3);
    myF.close();
}



/* ───────── 参考答案 ─────────
int i, j, s=0;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			s = s + a[i][j];

	return s;
   ─────────────────────────── */
