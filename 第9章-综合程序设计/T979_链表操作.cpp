/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：请完成两个链表操作函数cnt()、add()。
      单向链表已经生成，全局变量head指向链表的首节点，
      节点类型为tNode。
      1）函数cnt()计算链表中节点data域为奇数的数据个数并返回；
      2）函数add(n)的功能：如果链表中节点data域的值均不为n，
      则插入一个新节点到链表的尾节点之后，新节点的data域为n。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

void grading();

struct tNode
{
    int data;
    tNode *next;
};

tNode *head;

int cnt()
{
/**********Program**********/


/**********  End  **********/
}

void add(int n)
{
/**********Program**********/


/**********  End  **********/
}

void createLink(int a[], int n)
{
    tNode *node;
    head = NULL;
    for(int i=0; i<n; i++)
    {
        node = new tNode;
        node->data = a[i];
        node->next = NULL;

        node->next = head;
        head = node;
    }
}

int last()
{
    tNode *p=head;
    int n;
    while(p)
    {
        n = p->data;
        p = p->next;
    }
    return n;
}

int main()
{
    int a[]={1,2,3,4,5};
    createLink(a, 5);
    cout << "链表中奇数节点个数是：" << cnt() << endl;  // 链表中有5个节点，3个奇数
    add(7);
    cout << "链表中最后一个节点是：" << last() << endl; // 最后一个节点的值应该是7
//忽略阅读
    grading();
    system("pause");
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    int a[1000], n;
    ifstream inF("in.txt");
    ofstream outF("out.txt");
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<100; j++)
            inF>>a[j];

        createLink(a, 100);
        outF<<cnt()<<" ";
        inF>>n;
        add(n);
        outF<<last()<<endl;
    }
}
