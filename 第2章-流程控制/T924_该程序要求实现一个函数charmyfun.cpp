/*
 * 来源：C++题库 题号924
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第214题
 *
 * 题目：该程序要求实现一个函数char myfun(int score)，函数能实现百分制成绩
 */

第214题 （0.1分）        题号:924        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：该程序要求实现一个函数char myfun(int score)，函数能实现百分制成绩
与等级之间的转换关系： 90分以上为"A"，80-89为"B"，70-79为"C"， 60-69为"D"，
60分以下为"E"，并将等级作为返回值返回。
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void grading();

/**********Program**********/






/**********  End  **********/

int main()
{
  cout<<"分数为80分,等级为："<<myfun(80)<<endl;
  cout<<"分数为70分,等级为："<<myfun(70)<<endl;
  cout<<"分数为60分,等级为："<<myfun(60)<<endl;
  cout<<"分数为40分,等级为："<<myfun(40)<<endl;

//忽略阅读
  grading();
//忽略阅读结束

  return 0;
}

//忽略阅读
void grading()
{
   ifstream rf("in.txt",ios::in);
   int info[10];
   int i;
   for (i=0;i<10;i++)
   {
     rf>>info[i];
   }
   ofstream wf("out.txt",ios::out);   
   for(i=0;i<10;i++)
   {
     wf<<myfun(info[i])<<endl;
   }
   rf.close();
   wf.close();
}   
//忽略阅读结束




/* ───────── 参考答案 ─────────
char myfun(int score)
{
	switch(score/10)
	{
	case 10:case 9:return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:return 'D';
	default:
		return 'E';
	}
}
   ─────────────────────────── */
