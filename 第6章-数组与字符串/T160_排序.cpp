/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：完成函数DeleteNodes的编写，该函数从一个排序
      （从小到大）的链表中删除结点成员num大于指定值
      data的结点，并返回删除结点后的新链表。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"Program"和
      "End"两行注释，仅在其中填入所编写的代码。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

struct Node {
        int num;
        Node *next;
};

Node * deleteNodes (Node *head, int data)
{
/*********Program*********/




/*********  End  *********/
}

Node * insertList(Node *nd, Node *head)
{
        Node *pre = NULL, *cur = head;
        while (cur !=NULL && cur->num<nd->num)
        {
                pre = cur;
                cur = cur->next;
        }
        if(pre == NULL)
        {
                nd->next = cur;
                return nd;
        }
        pre->next = nd;
        nd->next = cur;
        return head;
}
void deleteList(Node *head)
{
        Node *tmp;
        while (head)
        {
                tmp = head->next;
                delete head;
                head = tmp;
        }
}
void printList(Node *head)
{
        while(head)
        {
                cout<<head->num<<" ";
                head = head->next;
        }
        cout<<endl;
}
int main()
{
        int s[8] = {2,4,7,13,18,22,23,31};
        Node * head = NULL;
        for(int i=0;i<8;i++)
        {
                Node *tmp = new Node;
                tmp->num = s[i];
                tmp->next = NULL;
                head = insertList(tmp, head);
        }
        deleteNodes(head,19);
        printList(head);
        grading();
        deleteList(head);
        return 0;
}

//以下忽略阅读
void writeFile(fstream &outfile, Node *head)
{
        if(head==NULL)
        {
                outfile<<"NULL"<<endl;
                return;
        }
        while(head)
        {
                outfile<<head->num<<" ";
                head = head->next;
        }
        outfile<<endl;
}
void grading()
{
        int a[200],i,m,k;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<200;i++)
        {
                infile>>m;
                a[i] = m%100+1;
        }
        for (i=0;i<8;i++)
        {
                Node * head = NULL;
                for(k=0;k<10;k++)
                {
                        Node *tmp = new Node;
                        tmp->num = *(a+i*2+6+k);
                        tmp->next = NULL;
                        head = insertList(tmp, head);
                }
                head = deleteNodes(head,i*i+10);
                writeFile(outfile, head);
        }
        infile.close();
        outfile.close();
}
