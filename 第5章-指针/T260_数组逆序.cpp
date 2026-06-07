/*
 * 来源：C++题库 题号260
 * 章节：第5章-指针
 * 难度：较易
 * 题序：第26题
 *
 * 题目：程序中的函数inv对数组m中的数据进行翻转转换，
 */

第26题 （0.1分）        题号:260        难度:较易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：程序中的函数inv对数组m中的数据进行翻转转换，
      即将数组中第一个数和最后一个数交换、第二个数
      和倒数第二个数交换，依此类推。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

//len传递数组m的元素个数：
void inv(int m[], int len)
{
        /**********Program**********/
        




        
        /**********  End  **********/
}

int main()
{
        int x[10] = {1, 2, 3 ,4, 5, 6, 7, 8, 9, 10};

        inv(x, 10);

        for(int k=0;k<10;k++)
                cout<<x[k]<<" ";

//忽略阅读
        grading();
//忽略阅读结束
        
        return 0;
}

//以下忽略阅读
int grading()
{
        
        int n[100];
        fstream infile,outfile;
        int k;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(k=0;k<10;k++)
                infile>>n[k];
        inv(n,10);
        for(k=0;k<10;k++)
                outfile<<n[k]<<" ";
        outfile<<endl;
        for(k=0;k<8;k++)
                infile>>n[k];
        inv(n,8);
        for(k=0;k<8;k++)
                outfile<<n[k]<<" ";
        infile.close();
        outfile.close();
        return 0;
}




/* ───────── 参考答案 ─────────
for (int i=0;i<len/2;i++)
	{
		int tmp = m[i];
		m[i] = m[len-1-i];
		m[len-1-i] = tmp;
	}
   ─────────────────────────── */
