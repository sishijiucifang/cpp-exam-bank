/*
 * 来源：C++题库 题号818
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第92题
 *
 * 题目：亮度调整是数字图像处理的基本操作之一
 */

第92题 （0.1分）        题号:818        难度:中        第6章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------
题目：亮度调整是数字图像处理的基本操作之一。由256种不同浓淡
      的灰色描绘的图像称为灰度图像，一般用整数0~255编码表示
      这256种灰色。对灰度图像进行亮度调整，最简单的方法即是
      在原有编码值上加上一个调整量（整数），例如：原有灰度为20，
      加上一个调整量50，灰度值变为20+50=70。如果这个整数是
      正数则是亮度增强，否则是亮度减弱。调整后的颜色值如果超
      出0~255的范围，若大于255则置为255，若小于0则置为0。
          
      编写函数enhancement，实现亮度值的调整，输入参数为要调
      整的亮度值color和调整量n，返回值为调整后的亮度值。
---------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
---------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

int enhancement(int color, int n)
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main()
{
    cout << enhancement(20,50) << endl;
    cout << enhancement(50,-30) << endl;
    cout << enhancement(250,10) << endl;
    cout << enhancement(40,-60) << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    int color, n;
    fstream infile,outfile;
    infile.open("in.txt",ios::in);
    outfile.open("out.txt",ios::out);
    for (int i=0;i<100;i++)
    {
        infile >> color >> n;
        outfile << enhancement(color,n)<<endl;
    }
    infile.close();
    outfile.close();
}




/* 参考答案未提供 */
