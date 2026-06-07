/*
 * 来源：C++题库 题号662
 * 章节：第5章-指针
 * 难度：中
 * 题序：第127题
 *
 * 题目：从键盘输入任意20个小于10的正整数(包括0)，存入2×10的
 */

第127题 （0.1分）        题号:662        难度:中        第5章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：从键盘输入任意20个小于10的正整数(包括0)，存入2×10的
      二维整型数组中，其中各行的元素构成一个整数。例如，
          下图中第一行元素构成整数1234507，第二行元素构成整数
          204689(最后的0不作为整数的一部分)。编写函数compare(a,b)
          比较两行元素构成的整数大小: 若a>b，返回1；若a=b，返回0; 
          若a<b，返回－1。
          （比较大小的方法是：先比较两个数的位数，如果位数不同，
          则位数多者为大；如位数相同，再从最高位起逐个比较对应数
          字，若每位均相等，则两数相等；若遇到第一个不相等的数字，
          则数字大者为大。）

      －－－－－－－－－－－－－－－－－－－－－   
      | 1 | 2 | 3 | 4 | 5 | 0 | 7 | 0 | 0 | 0 |
      | 2 | 0 | 4 | 6 | 8 | 9 | 0 | 0 | 0 | 0 |
      －－－－－－－－－－－－－－－－－－－－－
-------------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

-------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void wwjt();

/**********Program**********/



/**********  End  **********/
int main()
{
        int result,i;
        int a[10],b[10];
                
        cout<<"请输入第一个整数的各位数字:";
        for(i=0;i<10;i++)
                cin>>a[i];
        cout<<"请输入第二个整数的各位数字:";
        for(i=0;i<10;i++)
                cin>>b[i];
        
        result = compare(a,b);
        if(result==1) cout<<"第一个整数较大";
        else if(result==0) cout<<"两个整数相等";
        else if(result==-1) cout<<"第二个整数较大";

        wwjt();
        return 0;
}

void wwjt()
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        int c[10]={1,2,3,4,5,6,7,8,9,0},d[10]={1,2,3,4,0};
        int e[10]={1,2,3,6,7,8,9,0},f[10]={1,2,3,6,7,8,9};
        myfile<<compare(c,d)<<endl;
        myfile<<compare(e,f)<<endl;
        myfile.close();        
}



/* ───────── 参考答案 ─────────
----------------------

int compare(int a[],int b[])
{
	int result=0;
	int i=0;
	if((a[0]>0&&a[9]>0)||(b[0]>0&&b[9]>0))
	{
		for(i=0;i<10;i++)
		{
			if(a[i]>b[i])
			{
				result=1;break;
			}else if(a[i]<b[i])
			{
				result=-1;break;
			}
		}
	}else
	{
		int sum_a=0,sum_b=0;
		int counter=1,b_counter=0;
		for(i=0;i<10;i++)
		{
			sum_a=sum_a+counter*a[9-i];
			if(a[9-i]!=0)
				b_counter=1;
			if(b_counter)
				counter=counter*10;
		}
		counter=1;b_counter=0;
		for(i=0;i<10;i++)
		{
			sum_b=sum_b+counter*b[9-i];
			if(b[9-i]!=0)
				b_counter=1;
			if(b_counter)
				counter=counter*10;
		}
		if(sum_a>sum_b)
			result=1;
		if(sum_a<sum_b)
			result=-1;
	}
	return result;
}

----------------------
   ─────────────────────────── */
