/*
 * 来源：C++题库 题号980
 * 章节：第1章-C++基本语法
 * 难度：较易
 * 题序：第218题
 *
 * 题目：给定三维空间中任意两点的坐标，请编写程序
 */

第218题 （0.1分）        题号:980        难度:较易        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：给定三维空间中任意两点的坐标，请编写程序
  double distance(double x1, double y1, double z1, 
  double x2, double y2, double z2)，返回两点之间的
  距离，其中x1, y1, z1分别为第1个点的x, y, z坐标，
  x2, y2, z2分别为第2个点的x, y, z坐标。计算距离
  公式为d=((x2-x1)^2 + (y2-y1)^2 + (z2-z1)^2)^(0.5)。
  例如：distance(1, 2, 3, 4, 5, 6) = 5.19615
  
--------------------------------------------------
        注意：部分源程序给出如下。请勿改动主函数main和其它
        函数中的任何内容，不要修改或删除“program”和
        “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
void grading();

double distance(double x1, double y1, double z1, 
  double x2, double y2, double z2)
{
/**********Program**********/


/**********  End  **********/
}

int main()
{
        cout << distance(1, 2, 3, 4, 5, 6) << endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                double values[6];
                for (j = 0; j < 6; j++)
                {
                        infile>>k;
                        values[j] = (k % 100) * 4 - 100;
                }
                outfile << distance(values[0], values[1], values[2], 
                                            values[3], values[4], values[5]) << endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
double dx = x2 - x1;
	double dy = y2 - y1;
	double dz = z2 - z1;
	return sqrt(dx * dx + dy * dy + dz * dz);
   ─────────────────────────── */
