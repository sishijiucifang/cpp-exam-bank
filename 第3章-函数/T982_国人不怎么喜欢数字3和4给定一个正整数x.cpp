/*
 * 来源：C++题库 题号982
 * 章节：第3章-函数
 * 难度：中
 * 题序：第220题
 *
 * 题目：国人不怎么喜欢数字3和4，给定一个正整数x，
 */

第220题 （0.1分）        题号:982        难度:中        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：国人不怎么喜欢数字3和4，给定一个正整数x，
  现要你编写函数has34判断x之中是否包含数字3和4。
  该函数的函数原型为：bool has34(unsigned x)。
  若x中包含数字3或4，函数返回true，否则返回false。
  
--------------------------------------------------
        注意：部分源程序给出如下。请勿改动主函数main和其它
        函数中的任何内容，不要修改或删除“program”和
        “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;
void grading();
bool has34(unsigned x);

/**********Program**********/


/**********  End  **********/


int main()
{
        cout << (has34(2568401) ? "true" : "false") << endl;
        cout << (has34(2568701) ? "true" : "false") << endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile >> k;
                outfile << has34(k) << endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
bool has34(unsigned x)
{
	while (x > 0)
	{
		if (x % 10 == 3 || x % 10 == 4)
			return true;
		x /= 10;
	}
	return false;
}
   ─────────────────────────── */
