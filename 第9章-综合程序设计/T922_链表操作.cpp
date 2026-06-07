/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：该程序要求实现函数insert，其功能为：将np指向的结点
（该结点在外面已经创建好）按num从小到大的顺序插入head指向的单向链表中，
即最后head指向的链表结点是按num从小到大排列的（提示：过程中也是），
函数返回插入后的新链表。
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
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
