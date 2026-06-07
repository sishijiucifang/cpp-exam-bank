/*
 * 来源：C++题库 题号691
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第26题
 *
 * 题目：完成函数MulMatrices的编写，该函数实现矩阵乘法，
 */

第26题 （0.1分）        题号:691        难度:中        第6章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------

题目：完成函数MulMatrices的编写，该函数实现矩阵乘法，
      将矩阵a和b相乘，结果存入矩阵c中。
  
----------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

// 函数MulMatrices将矩阵a和b相乘，结果存入矩阵c。
void MulMatrices( int a[3][3], int b[3][3], long c[3][3] )
{
/**********Program**********/




        
        
/**********  End  **********/
}

int main () 
{
        int  a[3][3] = {1,1,1,
                        2,2,2,
                        3,3,3};
        int  b[3][3] = {4,4,4,
                        5,5,5,
                        6,6,6};
        long c[3][3]={0};
        int line, col;
        MulMatrices(a, b, c);
        cout<<"c = "<<endl;
        for (line=0;line<3;line++)
        {
                for (col=0;col<3;col++)
                        cout<<c[line][col]<<"\t";
                cout<<endl;
        }

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        int line, col;
        int a[3][3], b[3][3];
        long c[3][3]={0};
        ifstream infile;
        ofstream outfile;
        infile.open("in.txt", ios::in);
        outfile.open("out.txt", ios::out);
        for(line = 0; line < 3; line++)
                for(col = 0; col < 3; col++)
                        infile >> a[line][col];
        for(line = 0; line < 3; line++)
                for(col = 0; col < 3; col++)
                        infile >> b[line][col];
        for(line = 0; line < 3; line++)
                for(col = 0; col < 3; col++)
                        c[line][col] = 0;
        MulMatrices(a, b, c);
        for(line = 0; line < 3; line++)
        {
                for(col = 0; col < 3; col++)
                        outfile << c[line][col] << " ";
                outfile<<endl;
        }
        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
for ( int i = 0; i < 3; i++ )
	{
		for ( int j = 0; j < 3; j++ )
		{
			for ( int k = 0; k < 3; k++ )
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
   ─────────────────────────── */
