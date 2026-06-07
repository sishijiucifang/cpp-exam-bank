/*
 * 四、（10分）
 * 编写自定义函数计算组合数 C(n, k)。组合数 C(n, k) 定义为从 n 个不同元素中取 k 个元素的组合数，递归公式为：
 * C(n, 0) = C(n, n) = 1
 * C(n, k) = C(n-1, k-1) + C(n-1, k) (当 0 < k < n)
 *
 * 输入样例1：
 * 2 1
 * 输出样例1：
 * 2
 * 输入样例2：
 * 5 2
 * 输出样例2：
 * 10
 */

#include <stdio.h>

int C(int n, int k) {
    /********Program********/

    /********End**********/
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", C(n, k));
    return 0;
}
