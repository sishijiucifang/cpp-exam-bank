/*
 * 来源：C++题库 题号700
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第155题
 *
 * 题目：编写一个返回double类型值的函数f2c，功能是据华
 */

第155题 （0.1分）        题号:700        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个返回double类型值的函数f2c，功能是据华
      式温度求摄氏温度。求解公式是C=5*(F-32)/9，其
      中F为华氏温度，C为摄氏温度。
      函数原型为：double f2c(double);

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
        cout<<"输入华氏温度值：";
        double f;
        cin>>f;
        cout<<"对应的摄氏温度是："<<f2c(f)<<endl;

        writeinfile( );
}

void writeinfile( )
{
        double f;
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
                inFile>>f;        
                myfile<<f2c(f)<<endl;
        }

        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
double f2c(double f)
{
	return 5*(f-32)/9;
}
   ─────────────────────────── */
