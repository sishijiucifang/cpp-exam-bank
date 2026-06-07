/*
 * 来源：C++题库 题号814
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第88题
 *
 * 题目：地球上两地点之间沿地球表面最短距离称为大圆弧距离，这在航空和航海上
 */

第88题 （0.1分）        题号:814        难度:中        第6章
/*------------------------------------------------------
【程序设计】
--------------------------------------------------------

题目：地球上两地点之间沿地球表面最短距离称为大圆弧距离，这在航空和航海上
      都有很大作用。编写一个计算北半球上两地点大圆弧距离的函数getDistance，
      函数输入参数是北半球上两地地点的纬经度（东经为正值，西经为负值），
      设A点的纬经度是(latA, lonA)，B点的纬经度是(latB, lonB)，
      那么A和B两点间的地球大圆弧距离计算公式为：
      R * arccos(sin(latA)*sin(latB)+cos(latA)*cos(latB)*cos(lonA-lonB))
      其中，R是地球半径，约等于6371千米，
      计算正弦、余弦、反余弦可以使用math.h中定义的sin、cos和acos函数。
      注意：所给纬度和经度的单位是角度，sin和cos函数要求输入是弧度，
      角度转弧度的公式是：弧度=角度*圆周率/180，这里约定圆周率取值为3.14。

      例如，北京地理位置是（北纬39.54度, 东经116.23度)，长沙地理位置是
      （北纬28.12度, 东经112.59度)，北京到长沙的大圆弧距离约为1312.62千米。
      纽约地理位置是（北纬45.75度, 西经74度)，伦敦地理位置是
      （北纬51.5度, 西经0度)，纽约到伦敦的大圆弧距离约为5241.08千米。
--------------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
---------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

#define PI 3.14

double getDistance(double latA, double lonA, double latB, double lonB)
{
/**********Program**********/
    
/**********  End  **********/
}

void grading();

int main()
{   
    cout << "北京到长沙的大圆弧距离是:" << getDistance(39.54, 116.23, 28.12, 112.59) << "千米" << endl;
    cout << "纽约到伦敦的大圆弧距离是:" << getDistance(45.75, -74, 51.5, 0) << "千米" << endl;
//忽略阅读
    grading();
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    ifstream infile;
    ofstream outfile;
    infile.open("in.txt", ios::in);
    outfile.open("out.txt", ios::out);
    double latA, lonA, latB, lonB;
    while(!infile.eof())
    {
        infile >> latA >> lonA >> latB >> lonB;
        outfile << getDistance(latA, lonA, latB, lonB) << endl;
    }
    infile.close();
    outfile.close();
}




/* 参考答案未提供 */
