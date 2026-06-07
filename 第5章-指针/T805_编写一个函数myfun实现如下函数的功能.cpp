/*
 * 来源：C++题库 题号805
 * 章节：第5章-指针
 * 难度：较易
 * 题序：第197题
 *
 * 题目：编写一个函数myfun，实现如下函数的功能
 */

第197题 （0.1分）        题号:805        难度:较易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 编写一个函数myfun，实现如下函数的功能。
           /  x+100    (x>100)
       f(x) = |  x-100   (x<-100)
           \  0              (其他)

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void grading();

int myfun(int x)
{
/**********Program**********/




/**********  End  **********/
}

int main()
{
        cout<<myfun(123)<<endl;
        cout<<myfun(-12)<<endl;
        cout<<myfun(12)<<endl;
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
        int num;
        for (int i=0;i<10;i++)
        {
               
                        rf>>num;
                        wf<<myfun(num)<<" ";
                        wf<<endl;
        }
        rf.close();
        wf.close();
}   
 
 
 



/* ───────── 参考答案 ─────────
if(x>100)
		return x+100;
	else
		if(x<-100)
			return x-100;
		else 
			return 0;
   ─────────────────────────── */
