/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数dubdel的编写，该函数删除单向链表中的
      重复结点，如果链表中存在重复结点（除next指针
      外的其它数据成员的值相同）时，保留离链首最近
      的结点。

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

Node * dubdel(Node *head)
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
Node * createList(int a[], int len)
{
        Node *head = NULL;
        if(len<1)
                return head;
        for(int i=0;i<len;i++)
        {
                Node *tmp = new Node;
                tmp->num = a[i];
                tmp->next = head;
                head = tmp;
        }
        return head;
}
int main()
{
        int s[8] = {2,6,4,2,7,9,5,12};
        Node * head = createList(s,8);
        head = dubdel(head);
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
        int a[200],i;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<200;i++)
                infile>>a[i];
        for (i=0;i<8;i++)
        {
                Node * head = createList(a+i*2,6+i);
                head = dubdel(head);
                whiteFile(outfile, head);
        }
        infile.close();
        outfile.close();
}
//忽略阅读结束
