/*
 * 来源：C++题库 题号217
 * 章节：第1章-C++基本语法
 * 难度：易
 * 题序：第16题
 *
 * 题目：上抛物体随时间运行高度的公式为h=vt-(1/2)gt**2
 */

第16题 （0.1分）        题号:217        难度:易        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：上抛物体随时间运行高度的公式为h=vt-(1/2)gt**2
      函数height根据给定的初速度v(m/s)和时间t(s)计算
      时间t时该物体的高度(m)并返回。假设t为0时高度为
      0，而且该物体永远不会着地。
      完成该函数的编写。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
#define g 9.81

double height(double v, double t)
{
/**********Program**********/



/**********  End  **********/
}

int main()
{
        double v,t;
        cout<<"请输入初速度和时间:";
        cin>>v>>t;
        cout<<"高度为："<<height(v,t)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i, j, m,n;
        double v,t;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>m>>n;
                        v=m%1000/3.3;
                        t=n%100/1.4;
                        outfile<<(int)height(v,t)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
return v*t-0.5*g*t*t;
   ─────────────────────────── */
