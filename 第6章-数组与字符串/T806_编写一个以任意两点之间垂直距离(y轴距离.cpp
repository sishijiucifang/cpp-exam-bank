/*
 * 来源：C++题库 题号806
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第87题
 *
 * 题目：编写一个以任意两点之间垂直距离(y轴距离)作为返回值的函数
 */

第87题 （0.1分）        题号:806        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个以任意两点之间垂直距离(y轴距离)作为返回值的函数
            double y_distance(Point point1, Point point2)。
      可以使用求绝对值函数，原型是double fabs(double n)，
          如fabs(-10.1)将返回10.1。
       --------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>
#include <math.h>
void writeinfile( );

struct Point
{
        double x;   //水平方向坐标  
        double y;   //垂直方向坐标
        double z;   //水平方向坐标  
 };
double y_distance(Point & p1, Point & p2)
{
/**********Program**********/



/**********  End  **********/
}

void main(){
        struct Point pt1, pt2;
        cout<<"输入第一个点的坐标：";
        cin>>pt1.x>>pt1.y>>pt1.z;
        cout<<"输入第二个点的坐标：";
        cin>>pt2.x>>pt2.y>>pt2.z;
        cout<<"两个点的水平距离是："<<y_distance(pt1, pt2)<<endl;
        writeinfile();
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
        
        struct Point p1, p2;
        for(int i=0; i<10; i++)
        {
                inFile>>p1.x>>p1.y;
                inFile>>p2.x>>p2.y;
                myfile<<y_distance(p1,p2)<<endl;
        }
                inFile.close();
                myfile.close();
}



/* ───────── 参考答案 ─────────
return fabs(p1.y-p2.y);
   ─────────────────────────── */
