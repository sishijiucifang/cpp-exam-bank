/*
 * 来源：C++题库 题号797
 * 章节：第4章-数组与综合设计
 * 难度：较易
 * 题序：第194题
 *
 * 题目：编写函数IfDigit(n)，对于大于等于0的整数n，如果n为素数，则返回1，如果n为合数，则返回-1，
 */

第194题 （0.1分）        题号:797        难度:较易        第4章
/*-----------------------------------------------------
【程序设计】
-------------------------------------------------------

题目：编写函数IfDigit(n)，对于大于等于0的整数n，如果n为素数，则返回1，如果n为合数，则返回-1，
如果n不是素数也不是合数，则返回0。素数是因子个数为2的自然数，合数是因子个数大于2的自然数，
因子包括1和数本身，规定0不是素数也不是合数。
  
---------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它函数
      中的任何内容，仅在*Program*和*End*所标记的区域内
      完成题干要求的函数功能。
------------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
int grading();

int IfDigit(int n)
{

/*********Program*********/





/*********  End  *********/
}

int main()
{
        int n;
        cout<<"请输入一个数："<<endl;
        cin>>n;
        if(IfDigit(n)==1) 
                cout<<n<<" is a prime"<<endl;
        if(IfDigit(n)==-1)  
                cout<<n<<" is a composite quantity"<<endl;
        if(IfDigit(n)==0) 
                cout<<n<<" is not a prime or a composite quantity"<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        int m;
        int i,j;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        
        for (i=0;i<4;i++)
        {
                for (j=0;j<6;j++)
                {
                        infile>>m;
                        outfile<<IfDigit(m);
                }
                outfile<<endl;
        }

        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
int k;
   if(n<=1)
	   return 0;
   else
   {
     for(k=2;k<n;k++)
		 if(n%k==0)
			 return -1;
	 return 1;
   }
   ─────────────────────────── */
