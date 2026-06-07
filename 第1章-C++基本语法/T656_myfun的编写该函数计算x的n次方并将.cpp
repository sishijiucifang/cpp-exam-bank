/*
 * 来源：C++题库 题号656
 * 章节：第1章-C++基本语法
 * 难度：易
 * 题序：第122题
 *
 * 题目：完成函数myfun的编写，该函数计算x的n次方并将结
 */

第122题 （0.1分）        题号:656        难度:易        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数myfun的编写，该函数计算x的n次方并将结
      果返回。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
---------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

int myfun(int x,int n)
{

/**********Program**********/
        



        
/**********  End  **********/
}

int main()
{
        cout<<"12的2次方是："<<myfun(12,2)<<endl;
        
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
void grading()
{
        ifstream rf("in.txt",ios::in);
        ofstream wf("out.txt",ios::out);
        int n,x;
        for (int i=0; i<10; i++){
                rf>>x>>n;
                wf<<myfun(x,n)<<endl;
        }
        rf.close();
        wf.close();
}   



/* ───────── 参考答案 ─────────
int x1=1;
	while(n>0)
	{
		x1=x1*x;
		n--;
	}
	return x1;
   ─────────────────────────── */
