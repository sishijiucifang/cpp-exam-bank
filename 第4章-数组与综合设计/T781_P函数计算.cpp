/*
 * 来源：C++题库 题号781
 * 章节：第4章-数组与综合设计
 * 难度：较易
 * 题序：第181题
 *
 * 题目：P函数计算
 */

第181题 （0.1分）        题号:781        难度:较易        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：P函数计算。函数P(n,x)的定义如下：
       / 1                                   n=0
P(n,x)=| x                                   n=1   
       \ ((2n-1)P(n-1,x)-(n-1)P(n-2,x))/n    n>1

      函数接口为：double P(int n, double x);
      其中n为非负整数，返回值为P(n,x)对应的值。例如：
      P(5,5.0)的值为10.1333。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
double P(int n, double x);

/**********Program**********/


/**********  End  **********/

int main()
{
        int n;
        double x;
        cin>>n>>x;
        cout<<"P("<<n<<","<<x<<")="<<P(n,x)<<endl;
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
                for(j=0;j<10;j++)
                {
                        n=i+j;
                        infile>>k;
                        double x=k/1000.12;
                        double y=P(n,x);
                        outfile<<(int)(y*100)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
double P(int n, double x)
{
        if(n==0)
                return 1;
        if(n==1)
                return x;
        return ((2*n-1)*P(n-1,x)-(n-1)*P(n-2,x))/n;
}
   ─────────────────────────── */
