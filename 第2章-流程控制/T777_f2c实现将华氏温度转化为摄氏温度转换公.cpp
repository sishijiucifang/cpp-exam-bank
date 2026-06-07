/*
 * 来源：C++题库 题号777
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第177题
 *
 * 题目：函数f2c实现将华氏温度转化为摄氏温度，转换公式
 */

第177题 （0.1分）        题号:777        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数f2c实现将华氏温度转化为摄氏温度，转换公式
      为：c=5/9 (f-32)（其中c表示摄氏温度，f表示华
      氏温度）。例如华氏温度78.9度对应的摄氏温度为
      26.0556。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
double f2c(double f);

/**********Program**********/


/**********  End  **********/

int main()
{
        double f;
        cout<<"请输入华氏温度:";
        cin>>f;
        cout<<"摄氏温度为："<<f2c(f)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        double a[200],b[200];
        int n,i,j;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<200;i++)
        {
                infile>>n;
                a[i] = n%100*0.95;
                b[i] = f2c(a[i]);
        }
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        outfile<<(int)(b[i*10+j]+0.5)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
double f2c(double f)
{
	return 5.0/9.0*(f-32);
}
   ─────────────────────────── */
