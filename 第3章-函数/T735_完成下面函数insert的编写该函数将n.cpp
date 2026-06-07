/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成下面函数insert的编写，该函数将np指向的结
      点（该结点在外面已经创建好）按num从小到大的
      顺序插入head指向的单向链表中。返回插入后的新
      链表。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/
# include <iostream>
# include <fstream>
using namespace std;
struct node
{
        int num;
        struct node * next;
};
void grading();
node * insert(node *head, node *np)
{
/**********Program**********/


/**********  End  **********/
}

void del(node *head)
{
        node *p=head;
        while(p)
        {
                head = head->next;
                delete p;
                p=head;
        }
}
int main()
{
        int a[10]={3,1,2,5,6,7,4,9,8,10};
        node * phead=NULL;
        for(int i=0;i<10;i++)
        {
                node *tmp=new node;
                tmp->num = a[i];
                phead = insert(phead,tmp);
        }
        node *p = phead;
        while(p)
        {
                cout<<p->num<<" ";
                p=p->next;
        }
        cout<<endl;
        del(phead);
//以下忽略阅读
        grading();
//忽略阅读结束
        return 0;
}
//以下忽略阅读
void grading()
{
        node * phead=NULL;
        int num;
        ifstream infile("in.txt",ios::in);
        ofstream outfile("out.txt",ios::out);
        for(int i=0;i<10;i++)
        {
                phead=NULL;
                for (int j=0;j<10;j++)
                {
                        infile>>num;
                        node *tmp=new node;
                        tmp->num = num;
                        phead = insert(phead,tmp);
                }
                node *p = phead;
                while(p)
                {
                        outfile<<p->num<<" ";
                        p=p->next;
                }
                outfile<<endl;
                del(phead);
        }
        infile.close();
        outfile.close();
}
