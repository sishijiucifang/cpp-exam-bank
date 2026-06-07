/*
 * 来源：C++题库 题号657
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第123题
 *
 * 题目：编写函数myfun，实现如样张所示的函数计算，计算
 */

第123题 （0.1分）        题号:657        难度:中        第1章
/*-------------------------------------------------
【程序设计】
---------------------------------------------------

题目：编写函数myfun，实现如样张所示的函数计算，计算
      结果作为返回值返回。

---------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

---------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
/**********Program**********/






/**********  End  **********/
int main()
{
        cout<<"输入值为123，返回值是："<<myfun(123)<<endl;
        cout<<"输入值为-12，返回值是："<<myfun(-12)<<endl;
        cout<<"输入值为12，返回值是："<<myfun(12)<<endl;
        
//忽略阅读
        grading();
//忽略阅读结束
        
        return 0;
}

//忽略阅读
void grading()
{
        ifstream rf("in.txt",ios::in);
        ofstream wf("out.txt",ios::out);   
        int input;

        for (int i=1; i<=5; i++){
                rf>>input;   
                wf<<myfun(input)<< endl;
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
