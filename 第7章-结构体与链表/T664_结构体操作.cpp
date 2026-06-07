/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

  题目：已知有结构体类型定义：
        struct node
                {  int data;
                   struct node *nextPtr;
                };
        请编写函数void computingList(node * head)，对head
        指向的单向链表，分别统计结点的data成员值为负数、0、
        正数的结点个数分别存入变量negtive、zero、positive中。

        -------------------------------------------------------

  注意：部分源程序给出如下。请勿改动主函数main和其它函数中
        的任何内容，仅在函数的花括号中填入所编写的若干语句。

-------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading(int,int,int);

struct node
{
        int data;
        struct node *nextPtr;
};

void computingList(node * head)
{
        int positive=0,negtive=0,zero=0;

        /**********Program**********/






        /**********  End  **********/
        //忽略阅读
        grading(positive,zero,negtive);
        //忽略阅读结束
}

struct node *createList(void)
{
        node *head=NULL, *p1, *p2;
        int   i;
        int a[10] = {-1,3,4,0,9,4,11,-6,2,-10};
        head=p2=p1= new node;
    p1->data = a[0];
    for (i=1; i<10; i++)
        {
                p1= new node;
                p1->data = a[i];
                p2->nextPtr=p1;
                p2=p1;
        }
        p2->nextPtr=NULL;
        return (head);
}

int main()
{
        struct node *head;
        head = createList();
        computingList(head);
        return 0;
}

//以下忽略阅读
void grading(int a,int b,int c)
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        myfile<<a<<" "<<b<<" "<<c<<endl;
        myfile.close();
}
