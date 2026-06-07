/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 已知某文本文件 in.txt 中存放有若干整数，请将其按照
       从小到大的顺序排列后存入另一文件 out.dat。
       你需要完成三个函数

       1. void read_in (node* & p_head, char* s_file)
         负责从某个文件 s_file 中读入，并存在以 p_head
         为头部指针的链表中；
       2. void sort(node* p_head)
         将链表内的元素按照从小到大的顺序排序；
       3. void write_out(node* p_head, char* s_file)
         将链表中的元素依次写入到 s_file 中
         （注意，写入的元素以回车分割）。

       其中，链表节点结构 node 已经定义。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数 main
      和其它函数中的任何内容，仅在程序中介于
      "**********Program**********"
      和
      "**********  End  **********"
      的部分填入所编写的若干语句。

------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;

struct node
{
  int data;
  node* next;
};

/**********Program**********/



/**********  End  **********/


int main()
{
    node* p_head=NULL;
    read_in(p_head,"in.txt");
    sort(p_head);
    write_out(p_head,"out.txt");
    return 0;
}
