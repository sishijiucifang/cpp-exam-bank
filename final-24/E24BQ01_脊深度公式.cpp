/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第1题 （10.0分）
  ------------------------------------------------------------
  题目：
  利用大西洋某点的深度及其与脊的距离可计算脊的深度，公式如下：

  D = w + C * X^2 / u

  其中，D为大西洋中脊的深度，w为某处的海底深度（单位为km），
  C为给定的常数，X为该处与大西洋中脊的水平距离，u为海底减薄速率
  （单位为km/Myr）。假设C已知（程序中定义为常量）。
  请补全完成函数ridgeDepth(double w, double X, double u)，根据输入的
  w、X和u，计算并返回脊的深度D。

  输入格式：
    输入在一行中给出w、X、u。
  输出格式：
    该处的脊深度D。
  输入样例：
    -4 1200 50
  输出样例：
    -4.000
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <math.h>
#include <iomanip>
#define C 0.11
using namespace std;

double ridgeDepth(double w, double X, double u)
{
    /********Program********/


    /********  End  ********/
}

int main()
{
    double w, X, u;
    cin >> w >> X >> u;
    cout << fixed << setprecision(3) << ridgeDepth(w, X, u) << endl;
    return 0;
}
