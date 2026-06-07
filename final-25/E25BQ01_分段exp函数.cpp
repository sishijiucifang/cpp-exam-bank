/*
 * 国防科技大学2025-2026学年 春季学期《大学计算（下）》考试试卷（B）卷试题
 * 一、（10分）
 * 实现函数f(x)，根据输入x计算以下数学表达式：
 *        | ex - 1        (x < 0)
 *   y =  | 1             (x = 0)
 *        | ex + 1        (x > 0)
 * 其中自然对数ex可用math库中的exp函数计算。
 *
 * 输入格式：
 * x值
 * 输出格式：
 * y值
 *
 * 输入样例1：
 * -1
 * 输出样例1：
 * 1.700
 * 输入样例2：
 * 2.5
 * 输出样例2：
 * 12.182
 */

#include <stdio.h>
#include <math.h>

double f(double x) {
    /********Program********/

    /********End**********/
}

int main() {
    double x, y;
    scanf("%lf", &x);
    y = f(x);
    printf("%.3f\n", y);
    return 0;
}
