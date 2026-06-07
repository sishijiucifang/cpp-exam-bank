/*
 * 来源：C++题库 题号921
 * 章节：第8章-文件操作
 * 难度：中
 * 题序：第100题
 *
 * 题目：实现函数double distance(Point point1, Point point2)，
 */

第100题 （0.1分）        题号:921        难度:中        第8章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：实现函数double distance(Point point1, Point point2)，
其功能为计算任意两点间的距离并返回。
注：计算距离会使用求平方根，它的函数原型是double sqrt(double v)。
 
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void grading( );

struct Point
{
        double x;
        double y;
        double z;
};
/**********Program**********/

/**********  End  **********/

int main(){
        /*
        Point pt1, pt2;
        cout<<"输入第一个点的坐标：";
        cin>>pt1.x>>pt1.y>>pt1.z;
        cout<<"输入第二个点的坐标：";
        cin>>pt2.x>>pt2.y>>pt2.z;
        cout<<"两个点的距离是："<<distance(pt1, pt2)<<endl;
        */
        grading();
} 

void grading( )
{

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

        Point p1, p2;
        for (int i=0;i<10;i++){
            inFile>>p1.x>>p1.y>>p1.z;
            inFile>>p2.x>>p2.y>>p2.z;
            myfile<<distance(p1,p2)<<endl;
        }

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
