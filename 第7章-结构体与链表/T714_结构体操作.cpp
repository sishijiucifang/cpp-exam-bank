/*
 * 来源：C++题库 题号714
 * 章节：第7章-结构体与链表
 * 难度：中
 * 题序：第30题
 *
 * 题目：下面的结构体comp表示复数，real表示其实部，
 */

第30题 （0.1分）        题号:714        难度:中        第7章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：下面的结构体comp表示复数，real表示其实部，
      img表示其虚部。函数add实现两个复数one和two
      的加，并返回结果；函数mul实现两个复数one和
      two的乘，并返回结果。请完成这两个函数。

说明：1) 复数a+bi的实部是a，虚部是b；
      2) 两个复数a+bi和c+di的加的结果是：
                   (a+c)+(b+d)i
      3) 两个复数a+bi和c+di的乘的结果是：
                   (a*c-b*d)+(a*d+b*c)i

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在*Program*和*End*标记之
      间填写合适的语句以完成函数。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

struct comp {
        float real;
        float img;
};

comp add(comp one, comp two)
{
        comp temp;
        
        /**********Program**********/
        


        /**********  End  **********/

        return temp;
}

comp mul(comp one, comp two)
{
        comp temp;

        /**********Program**********/



        /**********  End  **********/

        return temp;
}

int grading();
void main()
{
        comp one,two;
        cout<<"请输入第一个复数的实部和虚部"<<endl;
        cin>>one.real>>one.img;
        cout<<"请输入第二个复数的实部和虚部"<<endl;
        cin>>two.real>>two.img;

        comp addResult;
        addResult=add(one,two);
        cout<<"加法的结果为："<<addResult.real;
        if (addResult.img>=0) cout << "+"; //如果虚部为负数，负数本身有一个"-"号
        cout <<addResult.img<<"i"<<endl;

        comp mulResult;
        mulResult=mul(one,two);
        cout<<"乘法的结果为："<<mulResult.real;
        if (mulResult.img>=0) cout << "+"; //如果虚部为负数，负数本身有一个"-"号
        cout<<mulResult.img<<"i"<<endl;
        
//忽略阅读
        grading();
//忽略阅读结束
        
}

//以下忽略阅读
int grading()
{
        ifstream infile("in.txt",ios::in);
        ofstream outfile("out.txt",ios::out);
        if(!infile.is_open() || !outfile.is_open())
        {
                cout<<"File Open Error"<<endl;
                return 1;
        }

        comp one,two, addResult, mulResult;
        for (int i=0;i <3; i++){
                infile >> one.real >> one.img;
                infile >> two.real >> two.img;
                addResult = add(one, two);
                outfile<<addResult.real;
                if (addResult.img>=0) outfile << "+";//如果虚部为负数，负数本身有一个"-"号
                outfile<<addResult.img<<"i" << endl;
                mulResult = mul(one, two);
                outfile<<mulResult.real;
                if (mulResult.img>=0) outfile << "+";//如果虚部为负数，负数本身有一个"-"号
                outfile<<mulResult.img<<"i" << endl;
        }

        infile.close();
        outfile.close();
        return 0;
}


/* ───────── 参考答案 ─────────
temp.real=one.real+two.real;
	temp.img=one.img+two.img;

	temp.real=one.real*two.real-one.img*two.img;
	temp.img=one.real*two.img+one.img*two.real;
   ─────────────────────────── */
