/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数sortInsert的编写，该函数将nd指向的一
      个Node结点按num从小到大的顺序插入到head指向
      的单向链表中，并返回新链表。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include<iostream>
#include <fstream>
#include <string>
using namespace std;
void grading();

struct Node {
        int num;
        Node *next;
};

Node * sortInsert(Node *nd, Node *head)
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
                        head = sortInsert(tmp, head);
                }
        printList(head);
        //忽略阅读
        grading();
        //忽略阅读结束
        deleteList(head);
        return 0;
}

//忽略阅读
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
                                head = sortInsert(tmp, head);
                        }
                        whiteFile(outfile, head);
        }
        infile.close();
        outfile.close();
}
//忽略阅读结束
