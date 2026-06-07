/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数deleteton删除head指向的链表中data小于n的
      结点并返回删除结点后的新链表。例如链表8->7->
      5->3->2->9->6->4->1->0删除小于4后得到的链表为：
      8->7->5->9->6->4。请实现该函数。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void grading();

struct ListNode {
    int data;
    struct ListNode *next;
};
struct ListNode *deleteton(struct ListNode *head, int n);

/**********Program**********/


/**********  End  **********/

int main()
{
        struct ListNode *head=NULL,*t;
        int a[10]={0,1,4,6,9,2,3,5,7,8};
        for(int i=0;i<10;i++)
        {
                t=new ListNode;
                t->data=a[i];
                t->next=head;
                head=t;
        }
        head = deleteton(head,4);
        t=head;
        while(t)
        {
                cout<<t->data<<" ";
                t=t->next;
        }
        cout<<endl;
        grading();
        return 0;
}
//以下忽略阅读
void grading()
{
        int i,j,n1=0,n2=200,m;
        struct ListNode *head=NULL,*t;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                head=NULL;
                for(j=0;j<10;j++)
                {
                        infile>>m;
                        t=new ListNode;
                        t->data=m%200;
                        t->next=head;
                        head=t;
                }
                head = deleteton(head,n1);
                n1+=20;
                t=head;
                while(t)
                {
                        outfile<<t->data<<" ";
                        t=t->next;
                }
                head=NULL;
                for(j=0;j<10;j++)
                {
                        infile>>m;
                        t=new ListNode;
                        t->data=m%200;
                        t->next=head;
                        head=t;
                }
                head = deleteton(head,n2);
                n2-=20;
                t=head;
                while(t)
                {
                        outfile<<t->data<<" ";
                        t=t->next;
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}
