/*
 * 来源：C++题库 题号987
 * 章节：第11章-运算符重载
 * 难度：中
 * 题序：第119题
 *
 * 题目：给定分数类Rational，该类包括两个整型数据
 */

第119题 （0.1分）        题号:987        难度:中        第11章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：给定分数类Rational，该类包括两个整型数据
  成员numerator和denominator，分别表示分数的分子
  和分母。请编写两个函数分别重载*和/运算符，实现
  两个分数的乘法和除法，并按双精度浮点数的形式输
  出两个分数相乘或相除的结果。函数原型为：
  double operator*(Rational& r);
  double operator/(Rational& r);

  例如对分数a = 123/235, b = 87/35, 则：
        a * b = 1.30103
        a / b = 0.210565
  
--------------------------------------------------
        注意：部分源程序给出如下。请勿改动主函数main和其它
        函数中的任何内容，不要修改或删除“program”和
        “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;

void grading();

class Rational
{
private:
        double numerator;
        double denominator;

public:
        Rational(double n, double d)
        {
                numerator = n;
                denominator = d;
        }
/**********Program**********/


/**********  End  **********/
};

int main()
{
        Rational a(123, 235);
        Rational b(87, 35);
        cout << "a*b = " << a * b << endl;
        cout << "a/b = " << a / b << endl;

        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                int an, ad, bn, bd;
                infile >> an >> ad >> bn >> bd;
                an %= 100;
                ad %= 100;
                bn %= 100;
                bd %= 100;

                Rational a(an, ad);
                Rational b(bn, bd);
                outfile << a * b << " " << a / b << endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
double operator*(Rational& r)
	{
		return (numerator * r.numerator) / (denominator * r.denominator);
	}

	double operator/(Rational& r)
	{
		return (numerator * r.denominator) / (denominator * r.numerator);
	}
   ─────────────────────────── */
