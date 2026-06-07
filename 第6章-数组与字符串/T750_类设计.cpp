/*
 * 来源：C++题库 题号750
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第52题
 *
 * 题目：下面是类Person的定义和实现，编写类Person的派
 */

第52题 （0.1分）        题号:750        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面是类Person的定义和实现，编写类Person的派
      生类Student（包括定义和实现），使整个程序编译
          通过并输出“LiGang: 12345”。
         
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void grading( );

class Person {
public:
        Person(char *n);
        ~Person();
        char * getname();
private:
        char *name;        //姓名
};
Person::Person(char *n)
{
        name = new char [strlen(n)+1];
        strcpy(name,n);
}
Person::~Person()
{
        delete []name;
}
char * Person::getname()
{
        return name;
}
/**********Program**********/



/**********  End  **********/
int main()
{
        Student li("LiGang", 12345);
        cout<<li.getname()<<": "<<li.getno()<<endl;
        //忽略阅读
        grading( );     
        //忽略阅读结束
        return 0;
}
//以下忽略阅读
void grading( )
{
        char n[100];
        int num;
        ifstream infile("in.txt", ios::in);
        fstream outfile("out.txt",ios::out);
        for (int i=0;i<10;i++)
        {
                infile>>n>>num;
                Student li(n, num);
                outfile<<li.getname()<<" "<<li.getno()<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
class Student :public Person {
public:
	Student(char *n, int num);
	int getno();
protected:
	int no;	//学号
};
Student::Student(char *n, int num)
:Person(n)
{
	no = num;
}
int Student::getno()
{
	return no;
}
   ─────────────────────────── */
