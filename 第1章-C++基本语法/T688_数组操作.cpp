/*
 * 来源：C++题库 题号688
 * 章节：第1章-C++基本语法
 * 难度：较易
 * 题序：第144题
 *
 * 题目：函数compare比较两个长度为N的数组是否相等（即
 */

第144题 （0.1分）        题号:688        难度:较易        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数compare比较两个长度为N的数组是否相等（即
      两数组中下标相同的数组元素均相等）。请完成该
      函数。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

------------------------------------------------*/


#include<fstream>
#include<iostream>

using namespace std;

void compare(int a[], int b[], int N)
{
        bool equal = true;

        ofstream outfile;
        outfile.open("f2.txt", ios::out);

        /**********Program**********/



        

        /**********  End  **********/

        if(equal) 
                outfile << "Equal!" << endl;
        else
                outfile << "Not equal!" << endl;

        outfile.close();
}

void input(int a[], int b[])
{
        int index;
        ifstream input;
        input.open("f1.txt", ios::in);

        for(index = 0; index < 200; index++)
                input >> a[index];

        for(index = 0; index < 200; index++)
                input >> b[index];

}
 
int main()
{
        int a[200], b[200];

        input(a, b);

        compare(a, b, 200);

        cout <<"Press the enter key to exit!" << endl;
        cin.ignore(cin.rdbuf()->in_avail() + 1);

        return 0;
}



/* ───────── 参考答案 ─────────
for(int index = 0; index < 200; index++)
	{
		if(a[index] != b[index])
		{
			equal = false;
			break;
		}
	}
   ─────────────────────────── */
