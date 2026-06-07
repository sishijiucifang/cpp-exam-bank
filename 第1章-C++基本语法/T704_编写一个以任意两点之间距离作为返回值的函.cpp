/*
 * 来源：C++题库 题号704
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第159题
 *
 * 题目：编写一个以任意两点之间距离作为返回值的函数
 */

第159题 （0.1分）        题号:704        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个以任意两点之间距离作为返回值的函数
            double distance(Point point1, Point point2)。
          注：计算距离会使用求平方根，它的函数原型是double sqrt(double v)。
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
        double x;
        double y;
        double z;
};
/**********Program**********/

/**********  End  **********/

void main(){
        Point pt1, pt2;
        cout<<"输入第一个点的坐标：";
        cin>>pt1.x>>pt1.y>>pt1.z;
        cout<<"输入第二个点的坐标：";
        cin>>pt2.x>>pt2.y>>pt2.z;
        cout<<"两个点的距离是："<<distance(pt1, pt2)<<endl;
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
        
        Point p1, p2;
        inFile>>p1.x>>p1.y>>p1.z;
        inFile>>p2.x>>p2.y>>p2.z;
        myfile<<distance(p1,p2)<<endl;

        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
double distance(Point point1, Point point2)
{
	return sqrt((point1.x-point2.x) * (point1.x-point2.x)
		+ (point1.y-point2.y) * (point1.y-point2.y)
		+ (point1.z-point2.z) * (point1.z-point2.z));
}
   ─────────────────────────── */
