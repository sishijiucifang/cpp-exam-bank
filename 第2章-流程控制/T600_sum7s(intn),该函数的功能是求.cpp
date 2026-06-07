/*
 * 来源：C++题库 题号600
 * 章节：第2章-流程控制
 * 难度：较易
 * 题序：第79题
 *
 * 题目：编写函数sum7s(int n), 该函数的功能是求1到
 */

第79题 （0.1分）        题号:600        难度:较易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目： 编写函数sum7s(int n), 该函数的功能是求1到
         n之间（含n）所有7的倍数之和。若n小于7，则
         返回0。
  
--------------------------------------------------
  注意：仅在标有"Program"和"End"的注释行之间补充填
        写代码。请勿改动主函数main和其它任何已有内
                容。
------------------------------------------------*/

#include<fstream>
#include<iostream>
using namespace std;

void grading();

/**********Program**********/




/**********  End  **********/

int main()
{
        int  n,sum=0;
        cout<<"输入一个整数："<<endl;
        cin>>n;
        sum = sum7s(n);
        cout<<"1到"<<n<<"之间所有7的倍数之和是："<<sum<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}

void grading()
{
        ifstream infile("in.txt", ios::in);
        fstream outfile;
        outfile.open("out.txt",ios::out);
        for(int i=0; i<3; i++)
        {
                int n;
                infile>>n;
                outfile<<sum7s(n)<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int sum7s(int n)
{
	int sum = 0;
	for(int i=7; i<=n; i+=7)
		sum += i;
	return sum;
}
   ─────────────────────────── */
