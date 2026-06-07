/*
 * 来源：C++题库 题号745
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第47题
 *
 * 题目：为下面已经部分定义的Date类添加isGameYear()成员函数，
 */

第47题 （0.1分）        题号:745        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：为下面已经部分定义的Date类添加isGameYear()成员函数，
          该成员函数的功能是判别成员数据m_year（年份，假定大于2000）是否是奥运年（提示：2000年是奥运年）。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>

void writeinfile( );

class Date
{
        public:
                void setDate(int year, int month, int day);
                bool isGameYear();
                int getYear();
        private:
                int m_year;
                int m_month;
                int m_day;
};

void Date::setDate(int year, int month, int day)
{
        m_year = year;
        m_month = month;
        m_day = day;
}

int Date::getYear()
{
        return m_year;
}

//在下面两行注释之间补充判别年份是否为奥运年的成员函数
/**********Program**********/


/**********  End  **********/

void main(){
        Date d1;
        int y, m, d;
        cout<<"输入年月日：";
        cin>>y>>m>>d;
        d1.setDate(y, m, d);
        if(d1.isGameYear())
                cout<<d1.getYear()<<"年是奥运年。"<<endl;
        else
                cout<<d1.getYear()<<"不年是奥运年。"<<endl;

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
        
        for(int i=0; i<15; i++)
        {
                int y, m, d;
                inFile>>y>>m>>d;
                Date day;
                day.setDate(y, m, d);
                myfile<<day.isGameYear()<<endl;
        }

        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
bool Date::isGameYear()
{
	return m_year % 4 == 0;
}
   ─────────────────────────── */
