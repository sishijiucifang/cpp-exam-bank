/*
 * 来源：C++题库 题号694
 * 章节：第3章-函数
 * 难度：较难
 * 题序：第149题
 *
 * 题目：编写快速排序函数，实现对给定的数组vec从下标
 */

第149题 （0.1分）        题号:694        难度:较难        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写快速排序函数，实现对给定的数组vec从下标
      start到finish之间的元素进行排序。

说明：快速排序的思想是先以数组中的某个数为基准，将
      数组中所有小于该数的数放于数组左边，而所有大于
      该数的数放于数组右边，所选的某个数放于这两种数
      中间（程序中Partition函数的作用），然后对划分后
      的左半边数组和右半边数组用同样的方式处理。
--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------*/

#include <iostream>
#include <fstream>
#define SIZE 400

using namespace std;

int Partition(int vec[], int start, int finish) {
    int pivot = vec[start];
    int lh = start + 1;
    int rh = finish;
    while (true) {
        while (lh < rh && vec[rh] >= pivot) rh--;
        while (lh < rh && vec[lh] < pivot) lh++;
        if (lh == rh) break;
        int temp = vec[lh];
        vec[lh] = vec[rh];
        vec[rh] = temp;
    }
    if (vec[lh] >= pivot) return start;
    vec[start] = vec[lh];
    vec[lh] = pivot;
    return lh;
}

void Quicksort(int vec[], int start, int finish)
{
    if (start >= finish) return;
        /**********Program**********/
    

        /**********  End  **********/
}

int main(void)
{
        int arr[SIZE], index, count = 0;

        ifstream input;
        input.open("f1.txt", ios::in);

        for(index = 0; index < SIZE; index++)
                input >> arr[index];

        input.close();

        Quicksort(arr, 0, SIZE - 1);

        ofstream output;
        output.open("f2.txt", ios::out);

        for(index = 0; index < SIZE; index++)
                {
                        output << arr[index];
                        count++;
                        if(count == 30)
                        {
                                output << endl;
                                count = 0;
                        }
                        else
                                output <<"        ";
                }
                                

        output.close();

        cout <<"Press the enter key to exit!" << endl;
        cin.ignore(cin.rdbuf()->in_avail() + 1);

        return 0;
}



/* ───────── 参考答案 ─────────
int boundary = Partition(vec, start, finish);
    Quicksort(vec, start, boundary - 1);
    Quicksort(vec, boundary + 1, finish);
   ─────────────────────────── */
