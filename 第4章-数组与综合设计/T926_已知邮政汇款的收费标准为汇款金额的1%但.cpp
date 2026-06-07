/*
 * 来源：C++题库 题号926
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第216题
 *
 * 题目：已知邮政汇款的收费标准为汇款金额的1%，但其单笔收费上限为50元
 */

第216题 （0.1分）        题号:926        难度:中        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：已知邮政汇款的收费标准为汇款金额的1%，但其单笔收费上限为50元。
该程序要求实现函数double shouFei(double money)，函数根据输入的
汇款金额money，返回所要收取的费用。 
 
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

void grading( );
/**********Program**********/


/**********  End  **********/

int main()
{
        /*
        cout<<"输入汇款金额：";
        double m;
        cin>>m;
        cout<<"本次汇款收费："<<shouFei(m)<<endl;
        */
        grading( );
}

void grading( )
{
        double m;
        ifstream inFile("in.txt", ios::in);
        if(!inFile)
        {
                cerr<<"无法打开数据文件in.txt。需要核查！"<<endl;
                return ;
        }

        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile.is_open())
        {
                cerr<<"无法打开数据文件out.txt。需要核查！"<<endl;
                return ;
        }

        for(int i=0; i<5; i++)
        {
                inFile>>m;        
                if(inFile.fail()) break;
                myfile<<shouFei(m)<<endl;
        }
        inFile.close();
        myfile.close();
}




/* ───────── 参考答案 ─────────
double shouFei(double money)
{
	double sf = 0;
	if(money<0) return 0;
	sf = money*0.01;
	if(sf > 50.0)
		sf = 50.0;
	return sf;
}
   ─────────────────────────── */
