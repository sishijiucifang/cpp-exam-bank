/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：函数insertList将tmp指向的一个Node结点插入一个
      按成员num从小到大排序单向链表中，并返回新链表。
      完成该函数的编写。
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
Node * insertList(Node *nd, Node *head)
{

/*********Program*********/





/*********  End  *********/
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
        int s[8] = {2,6,4,13,7,9,5,12};
        Node * head = NULL;
        for(int i=0;i<8;i++)
        {
                Node *tmp = new Node;
                tmp->num = s[i];
                tmp->next = NULL;
                head = insertList(tmp, head);
        }
        printList(head);
        grading();
        deleteList(head);
        return 0;
}
//以下忽略阅读
void whiteFile(fstream &outfile, Node *head)
{
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
                for(k=0;k<8;k++)
                {
                        Node *tmp = new Node;
                        tmp->num = *(a+i*2+6+k);
                        tmp->next = NULL;
                        head = insertList(tmp, head);
                }
                whiteFile(outfile, head);
        }
        infile.close();
        outfile.close();
}
