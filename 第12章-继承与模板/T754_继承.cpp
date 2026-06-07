/*
 * 来源：C++题库 题号754
 * 章节：第12章-继承与模板
 * 难度：较易
 * 题序：第56题
 *
 * 题目：完成派生类TCircle的成员函数的实现，构造函数使
 */

第56题 （0.1分）        题号:754        难度:较易        第12章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成派生类TCircle的成员函数的实现，构造函数使
      用x,y,r初始化对象的x,y坐标和半径，area函数计
      算对象面积并返回。 

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
#define PI 3.1415926
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
        double getx(){return x;}
protected:
        double x,y;   //点的坐标
};
class TCircle : public TPoint {
public:
        TCircle(double x, double y, double r = 1.0);
        double area();  //计算对象面积
private:
        double r;   //半径
};

/**********Program**********/


/**********  End  **********/        

int main ()
{
        TPoint *p = new        TPoint(1.2,2.3);
        cout<<p->area()<<endl;
        p = new TCircle(1.2,2.3,3.4);
        cout<<p->area()<<endl;
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
                ifile>>a>>b>>c>>d;
                p = new TPoint(a,b);
                ofile<<p->getx()<<" "<<p->area()<<" ";
                p = new TCircle(b,c,d);
                ofile<<p->getx()<<" "<<p->area()<<endl;
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
   ─────────────────────────── */
