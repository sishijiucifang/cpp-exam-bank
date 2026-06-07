/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数deleteodd删除head指向的链表中data值为奇数的
      结点并返回删除结点后的新链表。例如链表8->7->
      5->3->2->9->6->4->1->0删除data值为奇数得到的链表为：
      8->2->6->4->0。请实现该函数。

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
    ListNode *next;
};
ListNode *deleteodd(ListNode *head)
{

/**********Program**********/


/**********  End  **********/
}

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
        head = deleteodd(head);
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
        int i,j,m,thre;
        ListNode *head=NULL,*t;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                head=NULL;
                infile>>thre;
                for(j=0;j<10;j++)
                {
                        infile>>m;
                        if(m>thre)
                        {
                        t=new ListNode;
                        t->data=m;
                        t->next=head;
                        head=t;
                        }
                }
                head = deleteodd(head);
                t=head;
                if(t==NULL)
                      outfile<<thre<<" ";
                else
                {
                      while(t)
                      {
                        outfile<<t->data<<" ";
                        t=t->next;
                       }
                 }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}
