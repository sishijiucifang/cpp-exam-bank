/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：针对程序中构造的单向动态链表，请编写函数append，
      根据stud内容创建新的结点，并附加到头为head的
      链表末尾。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct student
{
        char name[20];
        int  num;
        int  age;
        char sex;
};

struct node
{
        char name[20];
        int  num;
        int  age;
        char sex;
        node *next;
};

node*  create()
{
        student stud;
        node  *head=NULL, *p1, *p2;

        //创建一个新结点：
        head= new node;

        p1 = head;
        p2 = head;

        //定义并以二进制格式打开文件：
        ifstream infile("f1.dat",ios::binary);

        //如果文件打开出错，则报错并退出：
        if(!infile.is_open())
        {
                cerr<<"open error!"<<endl;
                abort( );
        }

        //从文件中读入一个stud数据：
        infile.read((char*)&stud,sizeof(stud));

    //将文件中读入的stud中的元素内容拷贝给p1结点的相应元素:
        p1->age = stud.age;
        strcpy(p1->name, stud.name);
        p1->num = stud.num;
        p1->sex = stud.sex;
        p1->next = NULL;

        //一直从文件中读入stud数据，根据数据内容创建新的结点，
        //并将结点加到链表的末尾，直到文件数据被读完。
        while(infile.read((char*)&stud,sizeof(stud)))
        {
                p1 = new node; //创建新结点

                //将读入的stud数据拷贝给结点p1的相应元素：
                p1->age = stud.age;
                strcpy(p1->name, stud.name);
                p1->num = stud.num;
                p1->sex = stud.sex;
                p1->next = NULL;

                p2->next=p1; //将结点p1加到p2后面，即链表末尾
                p2=p1;   //p2保持指向链表的最后一个结点
        }

        //关闭文件：
        infile.close();

        //返回链表头：
        return (head);
}

//append函数功能说明：
//该函数创建一个结点；
//将stud中的元素内容拷贝给新创建结点的相应元素；
//之后，将新创建结点添加在以head为头的链表末尾。

node* append(node *head, student stud)
{
        /**********Program**********/










        /**********  End  **********/

        return head;
}


int del(node* head);
int grading(node* head);

int main( )
{
        node *p, *head;
        int count;

        head = create();  //创建链表

        //输出添加结点之前的链表
        p = head;
        count=1;
        cout << "插入前链表元素列表：" << endl;
        while(p != NULL)
        {
                cout << "第" << count << "个结点的学生姓名是：";
                cout << p->name << "; " << endl;
                count++;
                p = p->next;
        }
        cout << "共" << count-1 << "个结点。" << endl;

        student stud = {"Foo",10089,28,'m'};
        head = append(head, stud); //根据stud内容创建一个结点，并添加到链表末尾

        //输出添加结点之后的链表
        p = head;
        count=1;
        cout << endl << "插入后链表元素列表：" << endl;
        while(p != NULL)
        {
                cout << "第" << count << "个结点的学生姓名是：";
                cout << p->name << "; " << endl;
                count++;
                p = p->next;
        }
        cout << "共" << count-1 << "个结点。" << endl;

//忽略阅读
        grading(head);  //输出整个链表内容
        del(head); //删除整个链表，并释放所有空间

        cout << "Press the enter key to exit!" << endl;
        cin.ignore(cin.rdbuf()->in_avail() + 1);
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading(node* head)
{
        node *p;
        ofstream output;
        output.open("f2.txt", ios::out);

        //遍历链表，并将其所有结点的内容全部输出：
        //用count记录序号。
        p = head;
        int count = 1;
        while(p != NULL)
        {
                output << "NO. " << count << "; ";
                output << "name: " << p->name << "; ";
                output << "num: " << p->num << "; ";
                output << "age: " << p->age << "; ";
                output << "sex: " << p->sex << endl;
                count++;
                p = p->next;
        }

        output.close();
        return 0;
}

//以下忽略阅读
int del(node* head)
{
        node *p1, *p2;

        p1 = head;

        while(p1 != NULL)
        {
                p2 = p1->next;
                delete p1; //释放空间
                p1 = p2;
        }

        return 0;
}
