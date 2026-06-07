/*
 * 四、（10分）
 * 请你编写一个递归函数 specialSequence(int n)，用于计算如下定义的特殊数列的第 n 项：
 * a(1) = 1
 * a(2) = 2
 * a(n) = 2*a(n - 1) + 3*a(n - 2) (当 n > 2 时)
 *
 * 输入样例1：
 * 1
 * 输出样例1：
 * 1
 *
 * 输入样例2：
 * 3
 * 输出样例2：
 * 7
 */

#include <stdio.h>

int specialSequence(int n) {
    /********Program********/
    if(n==1||n==2)
    {
        return n;
    }

    return 2*specialSequence(n-1)+3*specialSequence(n-2);
    /********End**********/
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", specialSequence(n));
    return 0;
}
