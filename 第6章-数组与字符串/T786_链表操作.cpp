/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：链表结点序号从0开始，如包含5个结点的链表，结
      点序号分别为0、1、2、3、4。函数deleteeven删除
      head指向链表中的偶数序号的结点，并返回删除结
      点后的新链表。实现该函数。

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
struct ListNode *deleteeven( struct ListNode *head );

/**********Program**********/


/**********  End  **********/

int main()
{
        struct ListNode *head=NULL,*t;
        for(int i=9;i>=0;i--)
        {
                t=new ListNode;
                t->data=i;
                t->next=head;
                head=t;
        }
        head = deleteeven(head);
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
        int i,j,n1=0,n2=30,m;
        struct ListNode *head=NULL,*t;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                head=NULL;
                for(j=0;j<n1;j++)
                {
                        infile>>m;
                        t=new ListNode;
                        t->data=m%211;
                        t->next=head;
                        head=t;
                }
                head = deleteeven(head);
                t=head;
                while(t)
                {
                        outfile<<t->data<<" ";
                        t=t->next;
                }
                n1+=3;
                n2-=3;
                head=NULL;
                for(j=0;j<n2;j++)
                {
                        infile>>m;
                        t=new ListNode;
                        t->data=m%211;
                        t->next=head;
                        head=t;
                }
                head = deleteeven(head);
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
