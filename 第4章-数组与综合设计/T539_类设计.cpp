/*
 * 来源：C++题库 题号539
 * 章节：第4章-数组与综合设计
 * 难度：难
 * 题序：第50题
 *
 * 题目：定义人民币类IntRMB，数据成员包括：圆(IYuan)、角(Jiao)、分(Fen)，均为整型
 */

第50题 （0.1分）        题号:539        难度:难        第4章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：定义人民币类IntRMB，数据成员包括：圆(IYuan)、角(Jiao)、分(Fen)，均为整型。
      类型转换函数将人民币类强制转换为浮点数，以圆为单位。

参考：内置数据类型可以进行类型强制转换，类也可以进行同样的转换，这是通过定义类型
      转换函数实现的。它只能是类的成员函数，不能是友元函数。
          格式为：类名::operator  转换后的数据类型( ) {…}
      如：operator float()是转换为浮点数的成员函数。
          使用时的格式为：float(对象名);  或   (float) 对象名;
        
注意：1.输出结果参照样张图片。
      2.属性、操作名称与题目保持一致。
--------------------------------------------------------------------------------
注意：
1.部分源程序给出如下。请勿改动主函数main和其它函数中的任何内容，仅在*program*
  和*end*所标记的区域内完成题干要求的函数功能。
2.//忽略阅读与//忽略阅读结束内的程序可以忽略阅读。
------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
#include <cstdlib>
#include <cmath>
using namespace std;
void wwjt();

/********Program********/




/********  End  ********/

void main()
{
        float a;
        IntRMB Im(10,25,3);
        cout << "***转换前***" <<endl;
        Im.print();
        a=float(Im);         //使用重载的类型关键字进行强制类型转换
        cout << "***转换后***" <<endl;
        cout<<a<<"圆"<<endl;

    //忽略阅读
    wwjt();
   //忽略阅读结束

   return ;
}

//忽略阅读
void wwjt()
{

            int y,j,f;
        fstream infile, outfile;
        infile.open ("in.dat",ios::in);
        outfile.open("out.dat",ios::out);
        
        for (int i=0;i<3;i++)
        {
                infile>>y;
                infile>>j;
                infile>>f;
                IntRMB Im(y,j,f);
                outfile<<(float)Im<<endl;
        }

        infile.close();
        outfile.close();

  }





/* ───────── 参考答案 ─────────
class IntRMB{                  //人民币类
  private:
     int IYuan;
     int Jiao;
     int Fen;
  public:
     IntRMB(int y=0,int j=0,int f=0); //构造函数
     void print();                     //数据输出函数
     operator float();    //浮点数类型转换函数
};
IntRMB::IntRMB(int y,int j,int f){//构造函数
	IYuan=y;
	Jiao=j;
	Fen=f;
}
IntRMB::operator float(){
     float temp;    
     temp=float(IYuan + (Jiao/10.0) + (Fen/100.0));
     return temp;
}
void IntRMB::print(){
     cout <<IYuan << "元" <<Jiao << "角" <<Fen <<"分" <<endl;
}
   ─────────────────────────── */
