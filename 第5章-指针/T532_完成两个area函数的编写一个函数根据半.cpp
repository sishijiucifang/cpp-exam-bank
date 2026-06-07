/*
 * 来源：C++题库 题号532
 * 章节：第5章-指针
 * 难度：较易
 * 题序：第49题
 *
 * 题目：完成两个area函数的编写，一个函数根据半径r计算
 */

第49题 （0.1分）        题号:532        难度:较易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成两个area函数的编写，一个函数根据半径r计算
      园的面积并返回，一个根据边长a和b计算矩形的面
      积并返回。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
int grading();
#define  PI  3.1415926
double area(double r); //园面积的计算函数声明
double area(double a, double b);  //矩形面积的计算函数声明

/*********Program*********/


/*********  End  *********/

int main()
{
        double a,b,r;
        cout<<"input radius:"<<endl;
        cin>>r;
        cout<<"input side length:"<<endl;
        cin>>a>>b;
        cout<<"area("<<r<<")="<<area(r)<<endl;
        cout<<"area("<<a<<','<<b<<")="<<area(a,b)<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}

//忽略阅读
int grading()
{
        double a,b,c;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (int i=0;i<8;i++)
        {
                infile>>a>>b>>c;
                outfile<<area(a,b)<<area(c)<<endl;
        }
        infile.close();
        outfile.close();
        return 0;
}
//忽略阅读结束



/* ───────── 参考答案 ─────────
double area(double r)
{
	return PI*r*r;
}
double area(double a, double b)
{
	return a*b;
}
   ─────────────────────────── */
