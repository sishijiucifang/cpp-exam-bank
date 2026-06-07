/*
 * 来源：C++题库 题号722
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第170题
 *
 * 题目：编写函数countWeek，根据给定的当天星期数week
 */

第170题 （0.1分）        题号:722        难度:易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数countWeek，根据给定的当天星期数week
      （week=0表示星期日，week=1表示星期一，...，
      以此类推），请计算n天后是星期几，并将结果返回。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

int countWeek(int week, int n)
{
        /**********Program**********/        
        

        
        /**********  End  **********/
        
}

void grading();
int main()
{
        int tWeek, n;
        cout <<"请输入当天的星期(星期日:0,星期一:1,......)";
        cin >> tWeek;
        cout << "请输入要计算的星期是多少天后的：";
        cin >> n;
        cout <<endl;
        switch(countWeek(tWeek, n))
        {
        case 0:
                cout <<  n << "天后是星期日\n";
                break;
        case 1:
                cout <<  n << "天后是星期一\n";
                break;
        case 2:
                cout <<  n << "天后是星期二\n";
                break;
        case 3:
                cout <<  n << "天后是星期三\n";
                break;
        case 4:
                cout <<  n << "天后是星期四\n";
                break;
        case 5:
                cout <<  n << "天后是星期五\n";
                break;
        case 6:
                cout <<  n << "天后是星期六\n";
                break;
        default:
                cout<<"错误！";
                break;
        }

//忽略阅读
        grading();
//忽略阅读结束
        
        return 0;
}

//以下忽略阅读
void grading()
{
        
        fstream myfile;
        myfile.open("out169.txt",ios::out);
        
        myfile << countWeek(0,20);
        myfile << countWeek(1,30);
        myfile << countWeek(6,40);
        myfile << countWeek(3,300) << endl;
        myfile << countWeek(4,12);
        myfile << countWeek(5,43);
        myfile << countWeek(0,1503) << endl;
        
        myfile.close();
        
}


/* ───────── 参考答案 ─────────
return (week+n)%7;
   ─────────────────────────── */
