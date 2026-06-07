/*
 * 来源：C++题库 题号5
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第3题
 *
 * 题目：编写函数inc，该函数使实参的值加1，例如，如果
 */

第3题 （0.1分）        题号:5        难度:较易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目: 编写函数inc，该函数使实参的值加1，例如，如果
      有int a = 5; 则函数调用inc(a);后，a的值为6。
        
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
void grading();

/**********Program**********/



/**********  End  **********/
int main()
{
        for(int a=10;a<20;a++)
        {
                int m=a;
                inc(m);
                cout<<m<<"  ";
        }
        cout<<endl;
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
void grading()
{
        int num;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (int i=0;i<10;i++)
        {
                infile>>num;
                inc(num);
                outfile<<num;
                infile>>num;
                inc(num);
                outfile<<num<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
void inc(int &a)
{
	a++;
}
   ─────────────────────────── */
