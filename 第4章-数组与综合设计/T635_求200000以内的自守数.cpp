/*
 * 来源：C++题库 题号635
 * 章节：第4章-数组与综合设计
 * 难度：难
 * 题序：第101题
 *
 * 题目：求200000以内的自守数
 */

第101题 （0.1分）        题号:635        难度:难        第4章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：求200000以内的自守数。
      要求编写函数selfhold，判断一个数是否是一个自守数，
      若是，则返回1，否则返回0。

自守数是指一个数的平方的尾数等于该数自身的自然数。例如：
25*25=625 76*76=5776 9376*9376=87909376

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
-------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

void output(int i);
int selfhold(long number);

int main()
{

        long number;
        for(number=0;number<200000;number++)
        {
                if(selfhold(number)==1)
                {
                        cout<<number<<endl;
                        output(number);
                }
        }

        return 0;
}

void output(int i)
{
        ofstream myfile;
        myfile.open("f2.txt",ios::app);
        myfile<<i<<endl;
        myfile.close();
}

int selfhold(long number) /*判断数number是否是一个自守数*/
{
/**********Program**********/                




/**********Program**********/                
}


/* ───────── 参考答案 ─────────
----------------------
	long mul,k,ll,kk;	/*由number的位数确定截取数字进行乘法时的系数k*/

	for(mul=number,k=1;(mul/=10)>0;k*=10);
	kk=k*10; /*kk为截取部分积时的系数*/
	mul=0; /*积的最后n位*/
	ll=10; /*ll为截取乘数相应位时的系数*/
	while(k>0)
	{
		mul=(mul+(number%(k*10))*(number%ll-number%(ll/10)))%kk;
		/*(部分积+截取被乘数的后N位*截取乘数的第M位)，%kk再截取部分积*/
		k/=10; /*k为截取被乘数时的系数*/
		ll*=10;
	}
	if(number==mul) /*判断若为自守数则输出*/
		return 1;
	else return 0;

----------------------
   ─────────────────────────── */
