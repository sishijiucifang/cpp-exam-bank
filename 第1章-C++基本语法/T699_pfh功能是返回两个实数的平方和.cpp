/*
 * 来源：C++题库 题号699
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第154题
 *
 * 题目：编写函数pfh，功能是返回两个实数的平方和
 */

第154题 （0.1分）        题号:699        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数pfh，功能是返回两个实数的平方和。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>

/**********Program**********/






/**********  End  **********/

int grading( );
int main()
{
        cout<<"输入实数x, y：";
        double x, y;
        cin>>x>>y;
        cout<<"它们的平方和是："<<pfh(x, y)<<endl;

//忽略阅读
        grading( );
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading( )
{
        double x,y;
        ifstream inFile("in.txt", ios::in | ios::nocreate);
        if(!inFile)
        {
                cerr<<"无法打开数据文件in.txt。需要核查！"<<endl;
                return 1;
        }

        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile.is_open())
        {
                cerr<<"无法打开数据文件out.txt。需要核查！"<<endl;
                return 1;
        }
        
        for (int i=0; i<4; i++){
                inFile>>x>>y;        
                myfile<<(int)pfh(x, y)<<endl; //在此仅输出整数部分
        }

        inFile.close();
        myfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
double pfh(double x, double y)
{
        return x*x+y*y;
}
   ─────────────────────────── */
