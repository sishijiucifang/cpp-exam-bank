/*
 * 来源：C++题库 题号723
 * 章节：第3章-函数
 * 难度：较难
 * 题序：第171题
 *
 * 题目：编写函数eachPrime，判断两个正整数m和n是否为
 */

第171题 （0.1分）        题号:723        难度:较难        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数eachPrime，判断两个正整数m和n是否为
      互质数。若是，返回1；否则，返回-1。
      互质数：最大公约数为1的两个数称为互质数。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int  eachPrime( int m, int n)
{
        /**********Program**********/        










        /**********  End  **********/
}

void grading();
int main()
{

        int num1, num2, result;

        cout << "Please enter two integer（>0）:\n";
        cin >> num1 >> num2;
        if ( num1<=0 || num2<=0 )
                cout << "Input error!\n";

        result = eachPrime(num1, num2);
        if(result == 1)
                cout << num1 << " 和 " << num2 <<" 是互质数！\n";
        else
                cout << num1 << " 和 " << num2 <<" 不是互质数！\n";

//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
void grading()
{
        int n1, n2, result;

        fstream infile172,myfile;
        infile172.open("in172.txt",ios::in);
        myfile.open("out172.txt",ios::out);
        for(int i=0; i<10; i++)
        {
                infile172 >> n1 >> n2;
                result = eachPrime(n1, n2);
                myfile << result << endl;
        }

        infile172.close();
        myfile.close();

}



/* ───────── 参考答案 ─────────
int temp;

	while (n != 0)
    {  
       temp = m; 
       m = n; 
       n = temp % n;
    }
	if(m == 1)
		return 1;
	else
		return -1;
   ─────────────────────────── */
