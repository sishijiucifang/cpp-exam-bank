/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第1题 （10.0分）
  ------------------------------------------------------------
  题目：利用大西洋中脊可计算海洋某处的海底深度，公式如下：

  w = D - C * X^2 / u

  其中，w为某处的海底深度，D为大西洋中脊的深度（单位为km），
  C为给定的常量，X为该处与大西洋中脊的水平距离，u为海底减薄速率
  （单位为km/Myr）。假设D和u已知，D=2.5km、u=50km/Myr。

  请补全完成函数seaDepth(double C, double X)，根据输入的C和X，
  计算并返回某点海底深度w。

  输入格式：
    输入在一行中给出C和X。
  输出格式：
    该处的海底深度w。
  输入样例：
    0.11 1200
  输出样例：
    -4.204
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double seaDepth(double C, double X)
{
    double D = 2.5;
    double u = 50.0;
    /********Program********/


    /********  End  ********/
}

int main()
{
    double C, X;
    cin >> C >> X;
    cout << fixed << setprecision(3) << seaDepth(C, X) << endl;
    return 0;
}
