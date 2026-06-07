/*
 * 来源：C++题库 题号683
 * 章节：第8章-文件操作
 * 难度：易
 * 题序：第23题
 *
 * 题目：编写一个函数myfun，实现如下公式的功能
 */

第23题 （0.1分）        题号:683        难度:易        第8章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 编写一个函数myfun，实现如下公式的功能。
           /  x+10    (x>100)
       y = |  -x+10   (x<-10)
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

/**********Program**********/




/**********  End  **********/

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
                for (int j=0;j<10;j++)
                {
                        rf>>num;
                        wf<<myfun(num)<<" ";
                }
                wf<<endl;
        }
        rf.close();
        wf.close();
}   
 
 
 



/* ───────── 参考答案 ─────────
int myfun(int x)
{
	if(x>100)
		return x+10;
	if(x<-10)
		return -x+10;
	return 0;
}
   ─────────────────────────── */
