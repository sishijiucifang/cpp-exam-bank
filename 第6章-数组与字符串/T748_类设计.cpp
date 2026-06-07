/*
 * 来源：C++题库 题号748
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第50题
 *
 * 题目：实现类Time的两个函数，其中构造函数Time按照参
 */

第50题 （0.1分）        题号:748        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：实现类Time的两个函数，其中构造函数Time按照参
      数h、m、s的值初始化数据成员hour、min、sec，如
          果h、m、s的值合法则直接初始化，否则将对应的数
          据成员初始化为0。合法值范围分别为0<=h<=23、
          0<=m<=59、0<=s<=59。函数add实现时间和整数（秒）
          相加，例如11:11:11 + 100 = 11:12:51，相加后要
          保证时间数值的合法性。
         
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;
void grading( );

class Time {
public:
        Time(int h=0, int m=0, int s=0);
        void add(int ss);
        int geth() {return hour;}
        int getm() {return min;}
        int gets() {return sec;}
private:
        int hour, min, sec;
};
/**********Program**********/


/**********  End  **********/
int main()
{
        Time now(12,23,34);
        int ss;
        cout<<"输入秒数：";
        cin>>ss;
        now.add(ss);
        cout<<"12:23:34 + "<<ss<<" = "
                <<now.geth()<<":"<<now.getm()<<":"<<now.gets()<<endl;
        //忽略阅读
        grading( );     
        //忽略阅读结束
        return 0;
}
//以下忽略阅读
void grading( )
{
        int h,m,s,i;
        int ss;
        ifstream infile("in.txt", ios::in);
        fstream outfile("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile>>h>>m>>s>>ss;
                Time now(h,m,s);
                now.add(ss);
                outfile<<now.geth()<<" "<<now.getm()<<" "<<now.gets()<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
Time::Time(int h, int m, int s)
{
	if (h>=0 && h<24)
		hour = h;
	else 
		hour = 0;
	if (m>=0 && m<60)
		min = m;
	else 
		min = 0;
	if (s>=0 && s<60)
		sec = s;
	else 
		sec = 0;
}
void Time::add(int ss)
{
	sec += ss;
	int inc = sec/60;
	sec = sec%60;
	min += inc;
	inc = min/60;
	min = min%60;
	hour += inc;
	hour = hour%24;
}
   ─────────────────────────── */
