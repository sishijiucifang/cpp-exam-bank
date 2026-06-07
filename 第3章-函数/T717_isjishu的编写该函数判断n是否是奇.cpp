/*
 * 来源：C++题库 题号717
 * 章节：第3章-函数
 * 难度：易
 * 题序：第166题
 *
 * 题目：完成函数isjishu的编写，该函数判断n是否是奇数，
 */

第166题 （0.1分）        题号:717        难度:易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数isjishu的编写，该函数判断n是否是奇数，
      是则返回true，否则返回false。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

bool isjishu(int n)
{
        /**********Program**********/
        



        
        /**********  End  **********/
}

int grading();
int main()
{
        
        if (isjishu(113)) cout << "113是奇数。" << endl;
        else cout << "113不是奇数。" << endl;
        
        if (isjishu(2048)) cout << "2048是奇数。" << endl;
        else cout << "2048不是奇数。" << endl;
        
//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
int grading()
{
        ifstream ifile;
        fstream myfile; 
        int num;
        ifile.open ("in.txt",ios::in);
        myfile.open("out.txt",ios::out);
        for(int i=0; i<20; i++)
        {
                ifile>>num;
                if (isjishu(num))
                {
                        myfile<<num<<endl;
        }
        }
        ifile.close();
        myfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
if (n%2)
		return true;
	return false;
   ─────────────────────────── */
