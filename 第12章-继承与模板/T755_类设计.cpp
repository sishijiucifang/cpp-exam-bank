/*
 * 来源：C++题库 题号755
 * 章节：第12章-继承与模板
 * 难度：较易
 * 题序：第57题
 *
 * 题目：下面复数类Complex重载了运算符*，实现了两个复
 */

第57题 （0.1分）        题号:755        难度:较易        第12章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面复数类Complex重载了运算符*，实现了两个复
      数相乘，复数乘不改变乘数和被乘数的值，只将相
      乘的结果返回。完成该重载函数的编写。
         
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;
void grading( );

class Complex {
public:
        Complex(int r=0, int i=0);
        Complex operator *(Complex & two);
        int getreal() {return real;}
        int getimg() {return img;}
private:
        int real, img;        //real-实部  img-虚部
};
Complex::Complex(int r, int i)
{
        real = r;
        img = i;
};
/**********Program**********/


/**********  End  **********/
int main()
{
        Complex one(12,34), two(11,22), res;
        res = one * two;
        cout<<"("<<one.getreal()<<"+"<<one.getimg()<<"i) * ";
        cout<<"("<<two.getreal()<<"+"<<two.getimg()<<"i) = ";
        cout<<"("<<res.getreal()<<"+"<<res.getimg()<<"i)"<<endl;
        //忽略阅读
        grading( );     
        //忽略阅读结束
        return 0;
}
//以下忽略阅读
void grading( )
{
        int r1,i1,r2,i2, i;
        ifstream infile("in.txt", ios::in);
        fstream outfile("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile>>r1>>i1>>r2>>i2;
                Complex one(r1,i1), two(r2,i2), res;
                res = one * two;
                outfile<<res.getreal()<<" "<<res.getimg()<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
Complex Complex::operator *(Complex & two)
{
	int r = this->real * two.real - this->img * two.img;
	int i = this->real * two.img + this->img * two.real;
	Complex res(r,i);
	return res;
}
   ─────────────────────────── */
