/*
 * 来源：C++题库 题号977
 * 章节：第9章-综合程序设计
 * 难度：中
 * 题序：第113题
 *
 * 题目：请完成函数int days(tDate t);
 */

第113题 （0.1分）        题号:977        难度:中        第9章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：请完成函数int days(tDate t);
      函数参数t是一个结构体变量(包括年、月、日)，该函数
      计算并返回该天在本年中为第几天。
      例如，2011年2月1日是该年的第32天。
提示：闰年的条件是，年份能够被4整除且不能被100整除，
　　　或者能够被400整除。
    
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"Program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

void grading();

struct tDate
{   
    int year;
    int mon;
    int day;
};

int days(tDate t);
/**********Program**********/


/**********  End  **********/


int main()
{   
    tDate d = {2011,2,1};
    cout << days(d)<<endl;
//忽略阅读
    grading();
    system("pause");
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{   
    tDate   t;
    ifstream inF("in.txt", ios::binary);
    ofstream outF("out.txt");
    for(int i=0; i<10; i++)
    {   
        inF.read((char*)&t, sizeof(t));
        outF << days(t) << endl;
    }
}





/* ───────── 参考答案 ─────────
int d=0;
    int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((t.year%400==0) || (t.year%4==0 && t.year%100))    
        m[2] = 29;
    for(int i=1; i<t.mon; i++)
        d += m[i];
    return d+t.day;
   ─────────────────────────── */
