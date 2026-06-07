/*
 * 来源：C++题库 题号751
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第53题
 *
 * 题目：下面是抽象类Shape的定义，编写类Shape的派生类
 */

第53题 （0.1分）        题号:751        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面是抽象类Shape的定义，编写类Shape的派生类
      Rectangle（包括定义和实现），使整个程序编译通
          过并输出“25 20”。其中函数area计算Shape对象
          的面积，函数perimeter计算Shape对象的周长，语句：
          Shape *p = new Rectangle(1,1,6,6);
          中的4个参数分别表示一个矩形的左下角的x坐标、
          y坐标以及右上角的x坐标和y坐标。矩形的两条边分
          别和x、y轴平行。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void grading( );

class Shape {
public:
        virtual int area() = 0;
        virtual int perimeter() = 0;
};
/**********Program**********/



/**********  End  **********/
int main()
{
        Shape *p = new Rectangle(1,1,6,6);
        cout<<p->area()<<" "<<p->perimeter()<<endl;
        delete p;
        //忽略阅读
        grading( );     
        //忽略阅读结束
        return 0;
}
//以下忽略阅读
void grading( )
{
        int x1,y1,x2,y2;
        ifstream infile("in.txt", ios::in);
        fstream outfile("out.txt",ios::out);
        for (int i=0;i<10;i++)
        {
                infile>>x1>>y1>>x2>>y2;
                Shape *p = new Rectangle(x1,y1,x2,y2);
                outfile<<p->area()<<" "<<p->perimeter()<<endl;
                delete p;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
class Rectangle :public Shape {
public:
	Rectangle(int leftx, int downy, int rightx, int upy);
	int area();
	int perimeter();
private:
	int x1,y1,x2,y2;
};
Rectangle::Rectangle(int leftx, int downy, int rightx, int upy)
{
	x1 = leftx;
	y1 = downy;
	x2 = rightx;
	y2 = upy;
}
int Rectangle::area()
{
	return (x2-x1)*(y2-y1);
}
int Rectangle::perimeter()
{
	return 2*((x2-x1)+(y2-y1));
}
   ─────────────────────────── */
