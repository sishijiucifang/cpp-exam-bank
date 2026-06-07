/*
 * 来源：C++题库 题号741
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第43题
 *
 * 题目：编写一个以任意两点之间水平距离作为返回值的函数
 */

第43题 （0.1分）        题号:741        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个以任意两点之间水平距离作为返回值的函数
            double x_distance(Point point1, Point point2)。
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
};
/**********Program**********/

/**********  End  **********/

void main(){
        struct Point pt1, pt2;
        cout<<"输入第一个点的坐标：";
        cin>>pt1.x>>pt1.y;
        cout<<"输入第二个点的坐标：";
        cin>>pt2.x>>pt2.y;
        cout<<"两个点的水平距离是："<<x_distance(pt1, pt2)<<endl;
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
        for(int i=0; i<15; i++)
        {
                inFile>>p1.x>>p1.y;
                inFile>>p2.x>>p2.y;
                myfile<<x_distance(p1,p2)<<endl;
        }
                inFile.close();
                myfile.close();
}



/* ───────── 参考答案 ─────────
double x_distance(struct Point point1, struct Point point2)
{
	return fabs(point1.x-point2.x);
}
   ─────────────────────────── */
