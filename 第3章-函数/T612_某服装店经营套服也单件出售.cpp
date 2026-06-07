/*
 * 来源：C++题库 题号612
 * 章节：第3章-函数
 * 难度：易
 * 题序：第85题
 *
 * 题目：某服装店经营套服，也单件出售
 */

第85题 （0.1分）        题号:612        难度:易        第3章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：某服装店经营套服，也单件出售。若买的不少于50套，
每套80元；若不足50套，则每套90元；单件上衣
，每件60元；单条裤子，每条45元。
已知要买的上衣和裤子数，编写函数计算应付款。
函数原型是 int Payfor（int yifu，int kuzi）;
第一个参数表示衣服的数量，第二个参数表示裤子的数量
-------------------------------------------------------


注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

-------------------------------------------------------*/



#include <iostream>
#include <fstream>
using namespace std;
void wwff();
/**********Program**********/









/**********  End  **********/
int main()
{
        cout<< Payfor(1,2)<<endl;
        cout<< Payfor(2,1)<<endl;
        cout<< Payfor(45,60)<<endl;
//忽略阅读
    wwff();
//忽略阅读结束
        return 0;
}
//忽略阅读
void wwff()
{
        ifstream rf("in.txt",ios::in);
   int y,k;
   rf>>y>>k;
        ofstream wf("out.txt",ios::out);   
   wf<<Payfor(y,k);
   rf.close();
   wf.close();
}
//忽略阅读结束



/* ───────── 参考答案 ─────────
int Payfor(int yifu,int kuzi)
{
	int tao=0;
	int pay=0;
	if (yifu<=kuzi)
	{
		tao=yifu;
		kuzi-=yifu;
		pay=45*kuzi;
	}else
	{
        tao=kuzi;
		yifu-=kuzi;
		pay=60*yifu;
	}
	if(tao>=50)
	pay+=tao*80;
	else
	pay+=tao*90;
	return pay;
}
   ─────────────────────────── */
