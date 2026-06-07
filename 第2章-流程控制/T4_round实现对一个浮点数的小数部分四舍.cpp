/*
 * 来源：C++题库 题号4
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第2题
 *
 * 题目：函数round实现对一个浮点数的小数部分四舍五入
 */

第2题 （0.1分）        题号:4        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数round实现对一个浮点数的小数部分四舍五入
      并返回，如4.5的四舍五入是5,5.3的四舍五入是5。
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

int round(double num)
{
/**********Program**********/


/**********  End  **********/
}

int main()
{
        double n;
        cout<<"请输入一个浮点数:";
        cin>>n;
        cout<<"四舍五入的结果是："<<round(n)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i, j, m,n;
        double num;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>m>>n;
                        num=m/333.0*n/789.0;
                        outfile<<round(num)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
return (int)(num+0.5);
   ─────────────────────────── */
