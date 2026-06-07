/*
 * 来源：C++题库 题号579
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第58题
 *
 * 题目：编写函数sumOfPrimes(int N),功能是求1至N之间
 */

第58题 （0.1分）        题号:579        难度:中        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：编写函数sumOfPrimes(int N),功能是求1至N之间
       （含N)的所有素数的和并返回。素数是只能被1和自
       己整除的数。
         
    ---------------------------------------------
  注意：仅在标有"Program"和"End"的注释行之间补充填写
        代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>

#include <cmath>
using namespace std;
void grading( );

/**********Program**********/






/**********  End  **********/
int main()
{
        cout <<"1至200之间的所有质数的和是："<<sumOfPrimes(200)<<endl;
        //忽略阅读
        grading( );     
        //忽略阅读结束
        return 0;
}

//以下忽略阅读
void grading( )
{
        int i;
        ifstream infile("in.txt", ios::in);
        fstream outfile;
        outfile.open("out.txt",ios::out);
        int limit;
        for (i=0;i<5;i++)
        {
                infile>>limit;
                outfile<<sumOfPrimes(limit)<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
bool IsPrime(int s)
{
	if(s<2)
		return false;
	for(int j=2; j<s; j++)
		if(s%j == 0) 
			return false;
		return true;
}
int sumOfPrimes(int N)
{
	int sum = 0;
	for(int i=2; i<=N; i++)
		if(IsPrime(i))
		{
			sum += i;
		}
		return sum;
}
   ─────────────────────────── */
