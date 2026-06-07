/*
 * 来源：C++题库 题号698
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第153题
 *
 * 题目：编写求员工工资的函数double getSalary(double hours)，
 */

第153题 （0.1分）        题号:698        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写求员工工资的函数double getSalary(double hours)，
          参数hours是累计工作小时数，函数返回工资金额（单位为元）。
          工资的计算规则如下：工作时间小于等于8小时，25元/小时；
          超过8小时，前面8小时25元/小时，超过部分35元/小时；
          超过16小时，前面8小时25元/小时，8小时~16小时（含）部分35元/小时，
          超过16小时部分55元/小时。
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
        cout<<"输入工作时间：";
        double h;
        cin>>h;
        cout<<"应得工资额："<<getSalary(h)<<endl;

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
        
        for(int i=0; i<4; i++)
        {
                inFile>>m;        
                if(inFile.fail()) break;
                myfile<<getSalary(m)<<endl;
        }
        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
double getSalary(double hours)
{
	double sf = 0;
	if(hours<0) 
		sf = 0;
	else if(hours <= 8)
		sf = hours * 25;
	else if(hours <=16)
		sf = 8 * 25 + (hours - 8) * 35;
	else
		sf = 8 * 25 + 8 * 35 + (hours - 16) * 55;
	return sf;
}
   ─────────────────────────── */
