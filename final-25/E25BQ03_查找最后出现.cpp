/*
 * 三、（10分）
 * 编写函数 FindLast(int a[], int len, int n)，在整型数组 a 中查找数值 n 最后一次出现的下标（从0开始计数）。若未找到，返回-1。
 * 请补全函数：FindLast(int a[], int len, int n)。
 *
 * 输入格式：
 * 数组长度len、待查找元素n、a数组中所有元素
 * 输出格式：
 * 数组下标
 *
 * 输入样例1：
 * 3 3 1 2 3
 * 输出样例1：
 * 2
 * 输入样例2：
 * 5 6 2 5 6 2 6
 * 输出样例2：
 * 4
 */

#include <stdio.h>

int FindLast(int a[], int len, int n) {
    /********Program********/

    /********End**********/
}

int main() {
    int len, n;
    scanf("%d %d", &len, &n);
    int a[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", FindLast(a, len, n));
    return 0;
}
