/*
 * 来源：C++题库 题号681
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第141题
 *
 * 题目：写一个函数，将以秒为单位输入的一个时间值，
 */

第141题 （0.1分）        题号:681        难度:中        第4章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：写一个函数，将以秒为单位输入的一个时间值，
转化成时、分、秒.保存在结构体变量中并作为函数返回值返回，
其成员变量hh，mm，ss分别表时、分、秒。

------------------------------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void wwff();
/**********Program**********/





/**********  End  **********/
int main()
{
  cout<<myfun(3661).hh<<endl;
  cout<<myfun(3661).mm<<endl;
  cout<<myfun(3661).ss<<endl;
//忽略阅读
  wwff();
//忽略阅读结束
  return 0;
}
//忽略阅读
void wwff()
{
   ifstream rf("in.txt",ios::in);
   int n;
   rf>>n;   
   ofstream wf("out.txt",ios::out);   
   wf<<myfun(n).hh<<' '<<myfun(n).mm<<' '<<myfun(n).ss ;
   rf.close();
   wf.close();
}   
 



/* ───────── 参考答案 ─────────
struct tt
{
	int hh;
	int mm;
	int ss;
};

tt myfun( long second)
{
	struct tt mytime  ;
mytime.hh= second/3600;
mytime.mm=( second-mytime.hh*3600)/60;
mytime.ss= second-mytime.hh*3600-mytime.mm*60;
  return mytime;
  
}
   ─────────────────────────── */
