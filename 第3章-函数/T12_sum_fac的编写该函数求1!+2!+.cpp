/*
 * 来源：C++题库 题号12
 * 章节：第3章-函数
 * 难度：中
 * 题序：第8题
 *
 * 题目：完成函数sum_fac的编写，该函数求1!+2!+3!+…+n!
 */

第8题 （0.1分）        题号:12        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数sum_fac的编写，该函数求1!+2!+3!+…+n!。
      其参数n为正整数。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
void grading();

double sum_fac(int n)
{
/**********Program**********/
        
        
        
        
        
        
/**********  End  **********/
        return result;
}

int main()
{
        int n;
        double result;
        cout<<"输入整数n：";
        cin>>n;
        result = sum_fac(n);
        cout<<"结果为："<<result<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}

//以下忽略阅读
void grading()
{
        int n;
        double result;
        fstream ifile, ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);
        for (int i=0;i<8;i++)
        {
                ifile>>n;
                result=sum_fac(n);
                ofile<<result<<endl;
        }
        ifile.close();
        ofile.close();
}



/* ───────── 参考答案 ─────────
int jch=1;	
	double result=1;
	for(int i=2;i<=n;i++)
	{
		jch*=i;  
		result+=jch;
	}
   ─────────────────────────── */
