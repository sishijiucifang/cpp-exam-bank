/*
 * 来源：C++题库 题号655
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第121题
 *
 * 题目：写一个函数，其返回值类型为如下定义的MyTime，
 */

第121题 （0.1分）        题号:655        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：写一个函数，其返回值类型为如下定义的MyTime，
      该函数将以秒为单位输入的一个时间值，转化成
      时、分、秒（即转换为"几小时几分几秒"的形式），
      其结果以结构体形式返回。结构体MyTime定义如下，
          struct MyTime
          {
               int hh;
               int mm;
               int ss;
          }
      成员变量hh，mm，ss分别表示时、分、秒。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

---------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

/**********Program**********/






/**********  End  **********/

int main()
{
        cout<<"3661秒转化后为：";
        cout<<myfun(3661).hh<<" 时"<<endl;
        cout<<myfun(3661).mm<<" 分"<<endl;
        cout<<myfun(3661).ss<<" 秒"<<endl;
        
        //忽略阅读开始
        grading();
        //忽略阅读结束
        
        return 0;
}

//以下忽略阅读
void grading()
{
        ifstream rf("in.txt",ios::in);
        ofstream wf("out.txt",ios::out);   
        int n;
        
        for (int i =1; i<=10; i++){
                rf>>n; 
                wf<<myfun(n).hh<<' '<<myfun(n).mm<<' '<<myfun(n).ss << endl;
        }

        rf.close();
        wf.close();
}   


/* ───────── 参考答案 ─────────
struct MyTime
{
	int hh;
	int mm;
	int ss;
};

MyTime myfun( long second)
{
	struct MyTime mytime  ;
	mytime.hh= second/3600;
	mytime.mm=( second-mytime.hh*3600)/60;
	mytime.ss= second-mytime.hh*3600-mytime.mm*60;
	return mytime;
	
}
   ─────────────────────────── */
