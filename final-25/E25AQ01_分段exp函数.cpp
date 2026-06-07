/*
 * 国防科技大学2025-2026学年 春季学期《大学计算（下）》考试试卷（A）卷试题
 * 一、（10分）
 * 补全函数 f(x)，该函数的功能是利用下列公式计算 x 对应的 y 值：
 *        | ex + 1        (x < 0)
 *   y =  | 0             (x = 0)
 *        | ex - 1        (x > 0)
 * 其中ex表示自然指数函数，可以使用math库中的exp函数计算。
 *
 * 输入格式：
 * x值
 * 输出格式：
 * y值
 *
 * 输入样例1：
 * -1
 * 输出样例1：
 * 2.200
 *
 * 输入样例2：
 * 2.5
 * 输出样例2：
 * 0.924
 */

#include <stdio.h>
#include <math.h>

double f(double x) {
    /********Program********/
    if(x>0)return exp(x)-1;
    else if(x<0)return exp(x)+1;
    else return 0;
    /********End**********/
}

int main() {
    double x, y;
    scanf("%lf", &x);
    y = f(x);
    printf("%.3f\n", y);
    return 0;
}
