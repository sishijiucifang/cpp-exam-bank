/*
 * 来源：C++题库 题号749
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第51题
 *
 * 题目：下面的类Circle继承于类Point，并重新定义了5个
 */

第51题 （0.1分）        题号:749        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面的类Circle继承于类Point，并重新定义了5个
      成员函数，其中函数area计算对象的面积并返回；
          函数getLeftX计算对象最左边的点的x坐标并返回；
          函数getRightX计算对象最右边的点的x坐标并返回；
          函数getUpY计算对象最上边的点的y坐标并返回；函
          数getDownY()计算对象最下边的点的y坐标并返回；
          完成这5个函数的编写。这5个函数的实现放在类中。
         
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>
#define PI 3.14159

using namespace std;
void grading( );

class Point {
public:
        Point(double a=0, double b=0)
        {
                x = a;
                y = b;
        }
        double area() {return 0;}
        double getLeftX() {return x;}
        double getRightX() {return x;}
        double getUpY() {return y;}
        double getDownY() {return y;}
protected:
        double x, y;        //坐标
};
class Circle : public Point {
public:
        Circle(double a=0, double b=0, double c=0)
                :Point(a,b)
        {
                if (c>0)
                        r = c;
                else 
                        r = 0;
        }
/**********Program**********/



/**********  End  **********/
protected:
        double r;        //半径
};
int main()
{
        Circle c1(1,3,5);
        cout<<"Left x: "<<c1.getLeftX()<<endl;
        cout<<"Right x: "<<c1.getRightX()<<endl;
        cout<<"Up y: "<<c1.getUpY()<<endl;
        cout<<"Down y: "<<c1.getDownY()<<endl;
        cout<<"Area: "<<c1.area()<<endl;
        //忽略阅读
        grading( );     
        //忽略阅读结束
        return 0;
}
//以下忽略阅读
void grading( )
{
        double a,b,c;
        ifstream infile("in.txt", ios::in);
        fstream outfile("out.txt",ios::out);
        for (int i=0;i<5;i++)
        {
                infile>>a>>b>>c;
                Point p(a,b);
                outfile<<p.area()<<" "<<p.getLeftX()<<" "<<p.getRightX()<<" "<<p.getUpY()<<" "<<p.getDownY()<<endl;
                Circle c1(a,b,c);
                outfile<<c1.area()<<" "<<c1.getLeftX()<<" "<<c1.getRightX()<<" "<<c1.getUpY()<<" "<<c1.getDownY()<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
double area()
	{
		return PI*r*r;
	}
	double getLeftX() {return x-r;}
	double getRightX() {return x+r;}
	double getUpY() {return y+r;}
	double getDownY() {return y-r;}
   ─────────────────────────── */
