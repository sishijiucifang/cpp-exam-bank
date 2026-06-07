/*
 * 来源：C++题库 题号654
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第120题
 *
 * 题目：编写一个函数trans，将传入此函数的直角坐标值
 */

第120题 （0.1分）        题号:654        难度:中        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 编写一个函数trans，将传入此函数的直角坐标值
       转换为极坐标值（求极坐标的公式如图所示），并
       返回主调函数中，要求两值均以指针参数带回。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------*/

#include <iostream.h>
#include <math.h>
#include <fstream.h>
void grading();

//开平方根函数：sqrt；arctan函数：atan
//double sqrt(double)返回参数值的开平方根结果；
//double atan(double)返回参数值的反正切结果。
void trans (float *c,float *q)
{
        /**********Program**********/






        
        /**********  End  **********/
}

void main()
{
        float x=1.2, y=9.34;
        
        cout << "直角坐标： ( " << x << " , "<< y << " )"<< endl;
        trans(&x, &y);
        cout << "转换后的极坐标：( " << x << " , "<< y << " )"<< endl;

//忽略阅读开始
        grading();
//忽略阅读结束
}

//以下忽略阅读
void grading()
{
        
        float x, y;
        float c, q;
        int k;
        fstream infile, outfile;
        
        infile.open("in.txt", ios::in);
        outfile.open("out.txt",ios::out);
        for(k=0;k<10;k++){
                infile >> x >> y; //输入文件infile读入数据中没有x值为0的情况
                c = x;
                q = y;
                trans(&c, &q);
                outfile << "( " << c << " , "<< q << " )"<< endl;
        }
        infile.close();
        outfile.close();
}


/* ───────── 参考答案 ─────────
float x, y;
	x = *c;
	y = *q;
	*c = (float)sqrt(x*x + y*y);
	*q = (float)atan(y/x);
   ─────────────────────────── */
