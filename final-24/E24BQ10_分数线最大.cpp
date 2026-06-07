/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第10题 （10.0分）
  ------------------------------------------------------------
  题目：
  "scores.txt"文件存放了国防科技大学2014-2016三年各省的录取分数线数据，
  数据的各列属性如下：
  各属性的含义分别为年份、省份、一本线、技术类最高分、技术类最低分、
  技术类平均分、合训类最高分、合训类最低分、合训类平均分。
  函数countMax(const char* fileName, char* province, char* attr)能够
  读取该文件，根据用户输入的省份和分数线项（ybx、jslMax、jslMin、
  jslAvg、hxlMax、hxlMin、hxlAvg）计算相应省份不同年相应属性的分数
  数据的最大值及年份。
  注意：
  1）"scores.txt"文件不含属性行只含数据；
  2）部分年份下缺失了特定省份的数据，在计算时不计入这年；
  3）年份与分数最大值为整型；
  4）打印信息均为英文字符且不包含空格。

  输入格式：
    省份，分数线项。
  输出格式：
    相应省份不同年相应属性的分数数据平均值。
  输入样例：
    Hunan ybx
  输出样例：
    2015:526
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

void countMax(const char* fileName, char* province, char* attr)
{
    /********Program********/
    ifstream file(fileName);

    int idx=-1;
    
    if (strcmp(attr, "ybx") == 0) idx = 0;
    else if (strcmp(attr, "jslMax") == 0) idx = 1;
    else if (strcmp(attr, "jslMin") == 0) idx = 2;
    else if (strcmp(attr, "jslAvg") == 0) idx = 3;
    else if (strcmp(attr, "hxlMax") == 0) idx = 4;
    else if (strcmp(attr, "hxlMin") == 0) idx = 5;
    else if (strcmp(attr, "hxlAvg") == 0) idx = 6;

    int ansyear=-1;
    int ans=-1;
    char pro[20]={};
    int year;

    while(file>>year>>pro)
    {
      double a[7];
      for(int i=0;i<7;++i)
      {
        file>>a[i];
      }

      if(strcmp(province,pro)==0)
      {
        if(a[idx]>ans)
        {
          ans=a[idx];
          ansyear=year;
        }
      }
    }

    file.close();
    cout<<ansyear<<":"<<ans<<endl;

    /********  End  ********/
}

int main()
{

    char prov[20], attr[20];
    cin >> prov >> attr;
    countMax("scores.txt", prov, attr);
    return 0;
}
