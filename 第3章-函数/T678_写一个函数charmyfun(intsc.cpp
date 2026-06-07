/*
 * 来源：C++题库 题号678
 * 章节：第3章-函数
 * 难度：易
 * 题序：第138题
 *
 * 题目：写一个函数char myfun(int score)，实现百分制
 */

第138题 （0.1分）        题号:678        难度:易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：写一个函数char myfun(int score)，实现百分制
      成绩与等级之间的转换关系：90分以上为'A'，
      80-89为'B'，70-79为'C'，60-69为'D'，60分以下
      为'E'，并将等级返回。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

/**********Program**********/








/**********  End  **********/

int main()
{
        cout<<myfun(80)<<endl;
        cout<<myfun(70)<<endl;
        cout<<myfun(60)<<endl;
        cout<<myfun(40)<<endl;
        
//忽略阅读
        grading();
//忽略阅读结束
        
        return 0;
}

//以下忽略阅读
void grading()
{
        ifstream rf("in.txt",ios::in);
        int info[4];
        rf>>info[0]>>info[1]>>info[2]>>info[3];  
        ofstream wf("out.txt",ios::out);   
        for(int i=0;i<4;i++)
        {
                wf<<myfun(info[i]);
        }
        
        rf.close();
        wf.close();
}   



/* ───────── 参考答案 ─────────
char myfun(int score)
{
	switch(score/10)
	{
	case 10:case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	default:
		return 'E';
	}
}
   ─────────────────────────── */
