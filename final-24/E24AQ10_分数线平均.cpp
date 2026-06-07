/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第10题 （10.0分）
  ------------------------------------------------------------
  题目：
  "scores.txt"文件存放了国防科技大学2014-2016三年各省的录取分数线数据，
  数据的各列属性如下：
  各属性的含义分别为年份、省份、一本线、技术类最高分、技术类最低分、
  技术类平均分、合训类最高分、合训类最低分、合训类平均分。
  函数countAvg(const char* fileName, char* province, char* attr)能够
  读取该文件，根据用户输入的省份和分数线项（ybx、jslMax、jslMin、
  jslAvg、hxlMax、hxlMin、hxlAvg）计算相应省份不同年相应属性的分数
  数据平均值。
  注意：
  1）"scores.txt"文件不含属性行只含数据；
  2）部分年份下缺失了特定省份的数据，在算平均值时不计入这年；
  3）平均值为double类型。

  输入格式：
    省份，分数线项。
  输出格式：
    相应省份不同年相应属性的分数数据平均值。
  输入样例：
    Hunan ybx
  输出样例：
    521.667
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

double countAvg(const char* fileName, char* province, char* attr)
{
    /********Program********/


    /********  End  ********/
}

int main()
{

    char prov[20], attr[20];
    cin >> prov >> attr;
    cout << fixed << setprecision(3) << countAvg("scores.txt", prov, attr);
    return 0;
}
