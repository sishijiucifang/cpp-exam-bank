/* 来源：文件专项练习 | 章节：第8章-文件操作 */
/*
 * 文件专项练习 3 —— 气象数据统计（10分）
 *
 * 题目：
 *   读取 "weather.txt" 文件，每行格式为：日期 最高温 最低温（整数）。
 *   统计并输出：
 *   1. 最高温中的最大值及其对应日期
 *   2. 最低温中的最小值及其对应日期
 *   3. 平均最高温（保留1位小数）
 *
 * 输入格式：
 *   无需输入，程序读取 weather.txt
 * 输出格式：
 *   第一行：MaxTemp:日期 温度
 *   第二行：MinTemp:日期 温度
 *   第三行：AvgMax:平均最高温
 *
 * 输入样例（weather.txt 内容）：
 *   2024-01-01 8 -2
 *   2024-01-02 10 0
 *   2024-01-03 12 1
 *   2024-01-04 7 -5
 *   2024-01-05 9 -3
 * 输出样例：
 *   MaxTemp:2024-01-03 12
 *   MinTemp:2024-01-04 -5
 *   AvgMax:9.2
 */

#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
    /********Program********/
    ifstream file("weather.txt");

    char maxDay[20];
    char minDay[20];
    int sum=0;
    int ma=-1000;
    int mi=1000;

    char day[20];
    int t1,t2;
    int num=0;

    while(file>>day>>t1>>t2)
    {
        if(t1>ma)
        {
            ma=t1;
            strcpy(maxDay,day);
        }
        if(t2<mi)
        {
            mi=t2;
            strcpy(minDay,day);
        }

        sum+=t1;
        num++;
    }

    cout<<"MaxTemp:"<<maxDay<<" "<<ma<<endl;
    cout<<"MinTemp:"<<minDay<<" "<<mi<<endl;
    cout<<"AvgTemp:"<<(double)sum/num<<endl;

    /********  End  ********/
    return 0;
}
