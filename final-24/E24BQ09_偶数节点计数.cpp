/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第9题 （10.0分）
  ------------------------------------------------------------
  题目：
  完成Length(Node *L)函数，计算单链表中data为偶数的节点个数并返回。

  输入格式：
    第一行输入链表的元素个数n
    第二行输入链表中的元素
  输出格式:
    第一行输出data为偶数的节点个数
  输入样例：
    8
    1 2 3 6 7 8 0 2
  输出样例：
    5
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;


Node *CreatList(void)
{
    int val, i, n;
    Node *phead, *p, *q;
    phead = (Node *)malloc(sizeof(Node));
    q=phead;
    q->next=NULL;
    scanf("%d", &n);
    for(i=0; i<n; ++i)
    {
        scanf("%d", &val);
        p = (Node *)malloc(sizeof(Node));
        p->data=val;
        q->next=p;
        p->next=NULL;
        q=p;
    }
    return phead;
}

int Length(Node *L)
{
    Node *p;
    p = L->next;  // L头节点不存数据
    /******** Program *********/


    /**********  End  **********/
}

int main(void)
{
    Node *phead;
    phead = CreatList();
    printf("%d", Length(phead));
    return 0;
}
