/*
 * 来源：C++题库 题号915
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第209题
 *
 * 题目：现有一服装店经营套服买卖
 */

第209题 （0.1分）        题号:915        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：现有一服装店经营套服买卖。若客户购买的套服不少于50套，则每套80元；
若不足50套，则每套90元；其中，单件上衣，每件60元；单条裤子，每条45元。
现已知要买的上衣和裤子数，编写函数计算应付款。
函数原型是 int Payfor（int yifu，int kuzi），
其中：参数yifu表示衣服的数量，参数kuzi表示裤子的数量。
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
        cout<<"衣服一件，裤子两条需要："<<Payfor(1,2)<<endl;
        cout<<"衣服两件，裤子一条需要："<< Payfor(2,1)<<endl;
        cout<<"衣服45件，裤子60条需要："<< Payfor(45,60)<<endl;
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
        int y,k;
                for (int i = 0; i < 10; i++) {
                        rf>>y>>k;
                        wf<<Payfor(y,k)<<endl;
                }
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
