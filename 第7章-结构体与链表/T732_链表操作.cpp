/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：下面的函数concatenate实现两个字符单向链表的连
      接。函数以对两个链表头的引用作为参数，把第二
      个链表连接到第一个链表后面。

--------------------------------------------------
注意：部分源程序给出如下。仅在标有"Program"和"End"的
      注释行之间补充代码，请勿改动其它内容。

------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;

struct CharNode
{
        char info;
        CharNode *next;
};

void grading(CharNode*);

void concatenate(CharNode* &list1,CharNode* &list2)
{
/**********Program**********/




/**********  End  **********/
}

int main()
{
        CharNode *head1=NULL,*head2=NULL,*current;
        fstream infile;
        char c;
        infile.open("in.txt",ios::in);
        for (int i=0;i<12;i++)
        {
                infile.get(c);
                current=new CharNode;
                current->info=c;
                current->next=head1;
                head1=current;

                infile.get(c);
                current=new CharNode;
                current->info=c;
                current->next=head2;
                head2=current;
        }
        infile.close();
        concatenate(head1,head2);
        grading(head1);
        return 0;
}

void grading(CharNode* list)
{
        fstream outfile;
        outfile.open("out.txt",ios::out);
        while(list!=NULL)
        {
                outfile<<list->info;
                list=list->next;
        }
        outfile.close();
}
