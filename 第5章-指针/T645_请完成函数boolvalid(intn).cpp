/*
 * 来源：C++题库 题号645
 * 章节：第5章-指针
 * 难度：中
 * 题序：第111题
 *
 * 题目：请完成函数bool valid(int n)，该函数判断整数n
 */

第111题 （0.1分）        题号:645        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：请完成函数bool valid(int n)，该函数判断整数n
      的各位数字中是否包含数字3或4，是则返回true，
      否则返回false。
      例如调用valid(132)时返回true。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------*/

#include<fstream>
#include<iostream>
using namespace std;
bool valid(int n);
void grading();

int main()
{
        
        int i;
        
        i = 1332;
        if (valid(i)) cout << i << "包含数字3或4。" << endl;
        else cout << i << "不包含数字3或4。" << endl;
        
        i = -122567;
        if (valid(i)) cout << i << "包含数字3或4。" << endl;
        else cout << i << "不包含数字3或4。" << endl;
        //忽略阅读开始        
        grading();
        //忽略阅读结束        
        
        return 0;
}

bool valid(int n)
{
        /**********Program**********/





        
        /**********  End  **********/
}

//以下忽略阅读        
void grading()
{
        int i,j,a;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for (j=0;j<10;j++)
                {
                        infile>>a;
                        outfile<<(int)valid(a);
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
if (n<0)
                n=-n;
        while (n>0)
        {
                if (n%10 == 3 || n%10 == 4)
                        return true;
                n = n/10;
        }
        return false;
   ─────────────────────────── */
