/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第5题 （10.0分）
  ------------------------------------------------------------
  题目：
  给定一个整数数组 arr（元素个数不超过20个），如果它是有效的山脉数组
  就返回 true，否则返回 false。
  如果 arr 满足下述条件，那么它是一个山脉数组：

  arr.length >= 3
  在 0 < i < arr.length - 1 条件下，存在 i 使得：
    (1) arr[0] < arr[1] < ... arr[i-1] < arr[i]
    (2) arr[i] > arr[i+1] > ... > arr[arr.length - 1]

  输入格式：
    一行，第一个数为数组元素的个数n，后面n个数分别为数组元素。
  输出格式：
    一行，该数组是否为山脉数组的结果，如果是则输出 true，否则 false。
  示例 1：
    输入：2 2 1
    输出：false
  示例 2：
    输入：3 3 5 5
    输出：false
  示例 3：
    输入：4 0 3 2 1
    输出：true
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
using namespace std;

bool validMountainArray(int num, int *arr)
{
    /********Program********/



    /********  End  ********/
}

int main()
{
    int n;
    cin >> n;
    int array[20];
    for (int i =0; i<n; i++)
    {
        cin >> array[i];
    }
    cout <<boolalpha << validMountainArray(n, array) << endl;
    return 0;
}
