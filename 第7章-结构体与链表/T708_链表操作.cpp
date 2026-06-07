/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：创建一个整形数据的线性链表，对线性链表中的整
      形数据进行排序，然后向线性链表中插入一个元素，
      然后输入一个数找出该数是线性链表中第几个元素，
      最后删除整个线性链表。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
# include <iostream>
# include <fstream>
using namespace std;
struct node
{
   int num;
   struct node * next;
};
void wwjt();
int array[10];
node * head;
node * create(int array[], int len)
{
  node * head, * p1,*p2;
  head=p1=p2=new node;
  p1->num=array[0];
  p1->next=NULL;

/**********Program**********/






  /**********  End  **********/
  return head;
}

void sort(node * head)
{
  node * p1, *p2,*p;
  bool flag=1;
  /**********Program**********/








  /**********  End  **********/
}
node * insert(node * head, node * pnode)
{
  node *p1, *p2;
   p1=p2=head;

  /**********Program**********/









  /**********  End  **********/

   return head;
}

void find(node * head, int key)
{
  node *p1;
  int i=1;

  /**********Program**********/










  /**********  End  **********/
  if(p1==NULL)
      cout<<"无此数"<<endl;
  else
      cout<<"是第"<<i<<"个数"<<endl;
}

void del(node *head)
{
   node *p1=head, *p2=head;
    /**********Program**********/







  /**********  End  **********/

}
void main()
{
        node * phead=NULL;
   int  len=10;
   ifstream infile("in.txt",ios::in);
   if(!infile.is_open())
   {
         cout<<"File Open Error!"<<endl;
         return;
   }
   for(int i=0;i<len;i++)
   infile>>array[i];
   infile.close();
   phead=create(array,len);
   sort(phead);
   node *pNode=new node;
   cout<<"请输入一个插入的整数"<<endl;
   cin>>pNode->num;
   pNode->next=NULL;
   phead=insert(phead,pNode);
   int key;
   cout<<"请输入一个要查找的整数"<<endl;
   cin>>key;
   find(phead,key);
   del(phead);
   wwjt();
}
void wwjt()
{
   node * phead=NULL;
   int  len=10;
   ifstream infile("in.txt",ios::in);
   if(!infile.is_open())
   {
         cout<<"File Open Error!"<<endl;
         return;
   }
   for(int i=0;i<len;i++)
   infile>>array[i];
   infile.close();
   ofstream outfile("out.txt",ios::out);
   if(!outfile.is_open())
   {
         cout<<"File Open Error!"<<endl;
         return;
   }
   phead=create(array,len);
   node * p=phead;
   while(p!=NULL)
   {
     outfile<<p->num<<"\n";
         p=p->next;
   }
   sort(phead);
   p=phead;
   while(p!=NULL)
   {
     outfile<<p->num<<"\n";
         p=p->next;
   }
   node *pNode=new node;
   pNode->num=11;
   phead=insert(phead,pNode);
   p=phead;
   while(p!=NULL)
   {
     outfile<<p->num<<"\n";
         p=p->next;
   }
   find(phead,11);
   del(phead);
   outfile.close();

}
