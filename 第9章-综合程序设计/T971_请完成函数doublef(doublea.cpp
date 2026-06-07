/*
 * 来源：C++题库 题号971
 * 章节：第9章-综合程序设计
 * 难度：中
 * 题序：第107题
 *
 * 题目：请完成函数double f(double a, double b, char c)，
 */

第107题 （0.1分）        题号:971        难度:中        第9章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：请完成函数double f(double a, double b, char c)， 
      该函数根据运算符c对a、b进行运算，返回计算结果。
      1) c是'+'，则返回a+b
      2) c是'-'，则返回a-b
      3) c是'*'，则返回a*b
      4) c是'/'，则返回a/b
      5) c是'%'，则返回0
      6) c是其他符号，则返回-1 
      例如，a=5.1，b=5.2，c='+'，则返回10.3
     
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

double f(double a, double b, char c)
{
/**********Program**********/ 
    
    
/**********  End  **********/
}

int main()
{   
    double a, b, x;
    char c;
    cout << "测试请输入两个浮点数和一个运算符" << endl;
    cin>>a>>b>>c;
    x = f(a, b, c);
    cout<<x<<endl; 
//忽略阅读
    grading();
    system("pause");
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{   
    double t;
    double a, b, x;
    char c;
    ifstream inF("in.txt");
    ofstream outF("out.txt");
    for (int i=0;i<10;i++)
    {   
        a = b = 0;
        for(int j=0;j<50;j++)
        {
            inF>>t;            
            a += t;
            inF>>t;            
            b += t;
        }
        a /= 10000;
        b /= 10000;
        inF>>c;
        x = f(a, b, c); 
        outF<<x<<endl;
    }    
}



/* ───────── 参考答案 ─────────
double x;
	if('+' == c)    
		x = a + b;
	else if('-' == c)    
		x = a - b;
	else if('*' == c)    
		x = a * b;
	else if('/' == c)    
		x = a / b;
	else if('%' == c)    
		x = 0;
	else            
		x = -1;
	return x;
   ─────────────────────────── */
