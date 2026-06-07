/*
 * 来源：C++题库 题号709
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第162题
 *
 * 题目：完成函数gcd的编写，该函数求正整数m和n的最大公
 */

第162题 （0.1分）        题号:709        难度:较易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数gcd的编写，该函数求正整数m和n的最大公
      约数并返回。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

int gcd(int m,int n)
{
/**********Program**********/


/**********  End  **********/
}

int main()
{
        int m,n;
        cout<<"请输入两个数：\n";
        cin>>m>>n;
        cout<<m<<"和"<<n<<"的最大公约数是"<<gcd(m,n)<<endl;

//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
        int m, n;
        ifstream infile("in.txt", ios::in);
        ofstream outfile("out.txt",ios::out);
        if(!infile.is_open() || !outfile.is_open())
        {
                cout<<"File Open Error!"<<endl;
                return -1;
        }
        for (int i=0; i<10; i++)
        {
                infile >> m >> n;
                outfile<<gcd(m,n)<<"  "<<m*n/gcd(m,n)<<endl;
        }
        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
if(m<n)
	{
		int temp=m;
		m=n;
		n=temp;
	}
	int r;
	r=m%n;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
	}
	return n;
   ─────────────────────────── */
