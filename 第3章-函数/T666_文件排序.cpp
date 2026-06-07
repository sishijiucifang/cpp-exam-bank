/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：文本文件"in.txt"中有一组整数，要求排序后输出到
      另一个文件"out.txt"中（整数以空格相间隔）。

-------------------------------------------------------

注意：部分源程序给出如下。

------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

//选择排序：对具有n个元素的数组array进行排序。
void select_sort(int array[], int n)
{
        int i, j, k, hold;
        for (i = 0; i < n-1; i++)
        {
                hold = i;
                for (j = i+1; j < n; j++)
                        if (array[j] < array[hold])
                                hold = j;
                if (hold != i)
                {
                        k = array[hold];
                        array[hold] = array[i];
                        array[i] = k;
                }
        }
}

int main(void)
{
/**********Program**********/




/**********  End  **********/
}
