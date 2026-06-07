/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第3题 （10.0分）
  ------------------------------------------------------------
  题目：
  函数rNAvg(int a[], int len, int n)能够对于给定的整型正数数组a，
  计算最后n个元素的平均值并返回；若n为0或大于数组a的元素个数len，
  则返回-1.0；
  补全函数rNAvg(int a[], int len, int n)。

  输入格式：
    a数组长度、待查找元素n、a数组的所有元素。
  输出格式：
    双精度浮点型平均数。
  输入样例：
    3 3 1 2 3
  输出样例：
    2.000
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include<iomanip>

using namespace std;

double rNAvg(int a[], int len, int n)
{
    /********Program********/



    /********  End  ********/
}

int main()
{
    int len, i, n;
    cin >> len >> n;
    int* a = new int[len];
    for (i = 0; i < len; ++i)
    {
        cin >> a[i];
    }
    cout << fixed << setprecision(3) << rNAvg(a, len, n) << endl;
    return 0;
}
