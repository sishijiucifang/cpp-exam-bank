/*
 * 来源：C++题库 题号761
 * 章节：第12章-继承与模板
 * 难度：易
 * 题序：第63题
 *
 * 题目：完成派生类TCircle的成员函数的实现，构造函数使
 */

第63题 （0.1分）        题号:761        难度:易        第12章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成派生类TCircle的成员函数的实现，构造函数使
      用x,y,r初始化对象的x,y坐标和半径（如果r<=0，
      则使用默认值），area函数计算对象面积并返回，
      perimeter函数计算对象的周长并返回。 

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
#define PI 3.14
int grading();

class TPoint {
public:
        TPoint(double x, double y)
        {
                this->x = x;
                this->y = y;
        }
        virtual double area()  //计算对象面积
        {
                return 0;
        }
                virtual double perimeter()
                {
                        return 0;
                }
                double getx()
                {
                        return x;
                }
protected:
        double x,y;   //点的坐标
};
class TCircle : public TPoint {
public:
        TCircle(double x, double y, double r = 1.0);
        double area();  //计算对象面积
                double perimeter();  //计算对象的周长
private:
        double r;   //半径
};

/**********Program**********/









/**********  End  **********/        

int main ()
{
        TPoint *p = new TPoint(1.2,2.3);
        cout<<p->area()<<endl;
        cout<<p->perimeter()<<endl;
        p = new TCircle(1.2,2.3,3.4);
        cout<<p->area()<<endl;
        cout<<p->perimeter()<<endl;
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
        int i;
        double a,b,c,d;
        TPoint *p;

        ifstream ifile;
        ofstream ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);

        for (i=0;i<8;i++)
        {
                int k;
                                ifile>>k;
                                a = (k%100+1)/10.0;
                                ifile>>k;
                                b = (k%100+1)/10.0;
                                ifile>>k;
                                c = (k%100+1)/10.0;
                                ifile>>k;
                                d = (k%100+1)/10.0;
                p = new TPoint(a,b);
                ofile<<p->getx()<<" ";
                p = new TCircle(b,c,d);
                                ofile<<p->getx()<<" "<<p->area()<<" "<<p->perimeter()<<endl;
        }

        ifile.close();
        ofile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
TCircle::TCircle(double x, double y, double r)
:TPoint(x,y)
{
	if(r>0)
		this->r = r;
	else
		this->r = 1.0;
}
double TCircle::area()
{
	return PI*r*r;
}
double TCircle::perimeter()
{
	return PI*2*r;
}
   ─────────────────────────── */
