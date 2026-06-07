/*
 * 来源：C++题库 题号697
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第152题
 *
 * 题目：邮政汇款的收费标准是汇款金额的1%，但单笔收费上限是50元
 */

第152题 （0.1分）        题号:697        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：邮政汇款的收费标准是汇款金额的1%，但单笔收费上限是50元。
          编写一个函数double shouFei(double money)，根据输入的
          汇款金额money，返回所要收取的费用。 

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>

void writeinfile( );
/**********Program**********/


/**********  End  **********/

void main()
{
        cout<<"输入汇款金额：";
        double m;
        cin>>m;
        cout<<"本次汇款收费："<<shouFei(m)<<endl;

        writeinfile( );
}

void writeinfile( )
{
        double m;
        ifstream inFile("in.txt", ios::in | ios::nocreate);
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
        
        for(int i=0; i<3; i++)
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
