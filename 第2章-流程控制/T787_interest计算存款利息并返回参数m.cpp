/*
 * 来源：C++题库 题号787
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第186题
 *
 * 题目：函数interest计算存款利息并返回，参数money为存
 */

第186题 （0.1分）        题号:787        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数interest计算存款利息并返回，参数money为存
      款数，year为存款年数，rate是年利率，利息计算
      公式为：interest=money×(1+rate)**year?money。
      例如存10000元，年利率为0.05时，存10年的利息为
      6288.95元。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
double interest(double money, int year, double rate);

/**********Program**********/


/**********  End  **********/

int main()
{
        double m,r;
        int y;
        cout<<"请输入存款额、年利率、存款年数:";
        cin>>m>>r>>y;
        cout<<"利息为："<<interest(m,y,r)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,a,b,c;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        double m,r;
                        int y;
                        infile>>a>>b>>c;
                        m=a*0.02;
                        r=(b%10+1.0)/100;
                        y=c%30;
                        outfile<<(int)interest(m,y,r)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
double interest(double money, int year, double rate)
{
	double res = money;
	for(int i=0;i<year;i++)
		res *= (1+rate);
	return res-money;
}
   ─────────────────────────── */
