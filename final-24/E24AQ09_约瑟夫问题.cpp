/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第9题 （10.0分）
  ------------------------------------------------------------
  题目：
  有 n 个人围成一圈做游戏，编号为1 至 n 。从第一个人开始顺序报号
  1, 2, 3。凡报到 3 者退出圈子。最后留在圈子中的人，即为最后的赢家。
  编号是一开始的编号，整个过程保持不变。完成函数int count(int n)，
  返回赢家编号。

  输入：一个大于 2 的正整数，表示有 n 个人。
  输出：输出最后的赢家的编号。
  输入样例：
    3
  输出样例：
    2
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include<stdio.h>
#include<stdlib.h>
#define Len sizeof(struct number)
struct number
{
    int num;
    struct number*next;
};
int main()
{
    int n, winner;
    int count(int n);
    scanf("%d", &n);
    winner = count(n);
    printf("%d", winner);
    return 0;
}
int count(int n)
{

    struct number*head, *p1, *p2, *tail;
    int i;
    head = p1 = p2 = (struct number*)malloc(Len);
    p2->num = 1;
    for (i = 2; i < n; i++)
    {
        p1 = (struct number*)malloc(Len);
        p2->next = p1;
        p1->num = i;
        p2 = p1;
    }
    tail = (struct number*)malloc(Len);
    p2->next = tail;
    tail->num = n;
    tail->next = head;
    /********Program**********/

    /**********End**********/
}
