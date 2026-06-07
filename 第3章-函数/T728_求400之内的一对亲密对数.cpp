/*
 * 来源：C++题库 题号728
 * 章节：第3章-函数
 * 难度：中
 * 题序：第174题
 *
 * 题目：求400之内的一对亲密对数
 */

第174题 （0.1分）        题号:728        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：求400之内的一对亲密对数。
      所谓亲密对数A和B，即A不等于B,且A的所有因子(如，6的因子是1、2、3）
      之和等于B，B的所有因子之和等于A。
      求出的亲密对数存放在A和B中,且A<B。
      
--------------------------------------------------
注意：部分源程序给出如下。仅在标有"Program"和"End"的注释行之间补充代码，
      请勿改动其它内容。
------------------------------------------------*/


#include <iostream.h>
#include <fstream.h>

void writeinfile(int ,int);

int main()
{ 
  int A,B;

/**********Program**********/ 





        
/**********  End  **********/
        cout<<A<<"  "<<B<<endl;
        writeinfile(A,B);
        return 0;
}

void writeinfile(int s1,int s2)
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile)
        {
         cout<<"无法打开数据文件out.txt,需核查。"<<endl;
         return;
        }
        myfile<<s1<<endl;
        myfile<<s2<<endl;
        myfile.close();
}


/* ───────── 参考答案 ─────────
for(int n=1;n<400;n++)
 { int sum_a=0,sum_b=0;
   int a=n,b;
   for(int i=1;i<=a/2;i++)
   {
    if(a%i==0)
	sum_a+=i;
   }
   b=sum_a;
   if(b<=400)
   {
    for(int j=1;j<=b/2;j++)
    {
     if(b%j==0)
       sum_b+=j;
    }
    if(sum_b==a && a!=b)
    {
     A=a;
     B=b;
     break;
    }
   }
 }
   ─────────────────────────── */
