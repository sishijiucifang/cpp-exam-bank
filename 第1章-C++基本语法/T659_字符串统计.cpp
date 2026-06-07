/*
 * 来源：C++题库 题号659
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第125题
 *
 * 题目：写一个函数统计字符串中，大写字母和小写字母的个数,
 */

第125题 （0.1分）        题号:659        难度:中        第1章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：写一个函数统计字符串中，大写字母和小写字母的个数,
并分别保存在全局变量Supper和Low中
------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void wwff();
int Supper=0,Low=0;        

void GetSupperLow(char input[])
{
/**********Program**********/






/**********  End  **********/
}
int main()
{
        GetSupperLow("asas998234WERe***");

        cout<<Supper<<endl;
        cout<<Low<<endl;
//忽略阅读
  wwff();
//忽略阅读结束
  return 0;
}
//忽略阅读
void wwff()
{
   ifstream rf("in.txt",ios::in);
   char input[30];
   rf>>input;
   Supper=0,Low=0;        
   ofstream wf("out.txt",ios::out);   
   GetSupperLow(input);
   wf<<Supper<<' '<<Low;
   rf.close();
   wf.close();
}


/* ───────── 参考答案 ─────────
int i=0;
	while (input[i]!='\0')
	{
		if(input[i]<='Z' &&input[i] >='A')
			Supper++;
		if (input[i]<='z' &&input[i] >='a')
			Low++;
		i++;
	}
   ─────────────────────────── */
