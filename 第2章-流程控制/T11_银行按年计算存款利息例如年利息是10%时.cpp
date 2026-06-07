/*
 * 来源：C++题库 题号11
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第7题
 *
 * 题目：银行按年计算存款利息，例如，年利息是10%时，存
 */

第7题 （0.1分）        题号:11        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：银行按年计算存款利息，例如，年利息是10%时，存
      100元，存入1年后，账户里会有110元，2年后则有
      121元。函数account根据账户初始钱数，年利率，
      存款年数计算取出时账号余额。
      完成该函数的编写。

          注意：账户余额单位为元，年利息0.03表示3%，存款
      年数为正整数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
//balance -- 账户初始余额
//interest -- 年利息
//years -- 存款年数
double account(double balance, double interest, int years);

/**********Program**********/



/**********  End  **********/

int main()
{
        double bal,ist;
        int n;
        cout<<"请输入存款数、年利息、存款年数:";
        cin>>bal>>ist>>n;
        cout<<n<<"年后余额为："<<account(bal,ist,n)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i, j, m,n;
        double bal;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>m>>n;
                        bal=m;
                        n=n%20;
                        outfile<<(int)account(bal,0.025,n)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
double account(double balance, double interest, int years)
{
	double res = balance;
	for(int i=0;i<years;i++)
		res = res + res*interest;
	return res;
}
   ─────────────────────────── */
