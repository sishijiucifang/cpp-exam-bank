/*
 * 来源：C++题库 题号811
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第202题
 *
 * 题目：反色是数字图像处理中的基本操作之一
 */

第202题 （0.1分）        题号:811        难度:中        第4章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：反色是数字图像处理中的基本操作之一。对于只有黑白两种颜色的图像，用0表示黑色，
      1表示白色，反色即是将黑色变为白色、白色变为黑色；而对于怀旧的老照片，则是
      由256种不同浓淡的灰色描绘的，一般用整数0~255编码表示这256种灰色，反色即是将某种
      灰色变为它的补色，例如：12代表的灰色，它的补色则是255-12=243代表的灰色。
      请编写函数int antiColor(int type，int color)：根据type的值计算color的反色值，
      type为0表示黑白两色图像，type为1表示256灰度图像，type为其他值时函数返回-1。

-------------------------------------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
-------------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

int antiColor(int type, int color)
{
/********Program********/
    
/********  End  ********/
}

void grading();

int main()
{
    cout << antiColor(0, 1) << endl;
    cout << antiColor(0, 0) << endl;
    cout << antiColor(1, 12) << endl;
    cout << antiColor(3, 12) << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    fstream infile,outfile;
    infile.open("in.txt",ios::in);
    outfile.open("out.txt",ios::out);
    int type, color;
    while(!infile.eof())
    {                
        infile >> type >> color;
        outfile << antiColor(type, color) << endl;
    }
}




/* 参考答案未提供 */
