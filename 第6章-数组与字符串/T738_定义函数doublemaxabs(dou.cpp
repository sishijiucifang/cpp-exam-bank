/*
 * 来源：C++题库 题号738
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第40题
 *
 * 题目：定义函数double maxabs(double a,double b,double c),
 */

第40题 （0.1分）        题号:738        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：定义函数double maxabs(double a,double b,double c),
          实现求三个实数的绝对值中最大者，返回该最大的绝对值。
          求绝对值函数是一个库函数，原型是double fabs(double n)，
          如fabs(-10.1)将返回10.1。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>
#include <math.h>

void writeinfile( );
/**********Program**********/


/**********  End  **********/

void main()
{
        double a, b, c;
        cout<<"输入3个数：";
        cin>>a>>b>>c;
        cout<<"绝对值最大者："<<maxabs(a, b, c);
        writeinfile( );
}

void writeinfile( )
{
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

        for(int i=0; i<15; i++)
        {
                double m, a, b, c;
                inFile>>m>>a>>b>>c;
                if(inFile.fail()) break;
                myfile<<maxabs(m*a, m*b, m*c)<<endl;
        }
        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
double maxabs(double a, double b, double c)
{
	double max = fabs(a);
	if(max<fabs(b)) max = fabs(b);
	if(max<fabs(c)) max = fabs(c);
	return max;
}
   ─────────────────────────── */
