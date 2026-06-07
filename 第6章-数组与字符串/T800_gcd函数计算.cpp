/*
 * 来源：C++题库 题号800
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第84题
 *
 * 题目：gcd函数计算
 */

第84题 （0.1分）        题号:800        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：gcd函数计算。函数gcd(x,y)的定义如下：
       / x                                  x=y
gcd(x,y)=gcd(x-y,y)                         x>y   
       \ gcd(x,y-x)                         x<y

      函数接口为：double gcd(int x, int y)，
      其中x,y为正整数，返回值为gcd(x,y)对应的值。例如：
      gcd(15,25)的值为5。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
double gcd(int x, int y)
{
/**********Program**********/


/**********  End  **********/
}

int main()
{
        int x;
        int y;
        cin>>x>>y;
        cout<<"gcd("<<x<<","<<y<<")="<<gcd(x,y)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,x,y;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
               
                        infile>>x>>y;
                        outfile<<gcd(x,y)<<endl;
                        
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
if(x==y)
	  return x;
  if(x>y)
	  return gcd(x-y,y);
  if(x<y)
	  return gcd(x,y-x);
   ─────────────────────────── */
