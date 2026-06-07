/*
 * 来源：C++题库 题号581
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第60题
 *
 * 题目：在包含10个数的一维整数数组a中查找给定的数据num
 */

第60题 （0.1分）        题号:581        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：在包含10个数的一维整数数组a中查找给定的数据num。
      如果找到则返回1,未找到返回 0 .
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
#include <string>
using namespace std;
void wwjt(int a[],int num);

int fun(int a[],int num)
{
/**********Program**********/




/**********  End  **********/
}

void main()
{
        int a[10];
        fstream myfile;
        myfile.open("in.txt",ios::in);
        for (int i=0;i<10;i++)
                myfile>>a[i];
        myfile.close();
        int num = 46;
        if (fun(a,num)==1)
                cout <<"找到！"<<endl;
        else
                cout <<"没有找到！"<<endl;
        wwjt(a,10);
}

void wwjt(int a[],int num)
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        myfile<<fun(a,46)<<endl;
        myfile<<fun(a,345)<<endl;
        myfile.close();
}



/* ───────── 参考答案 ─────────
for (int i=0; i<10; i++)
		if (a[i]==num)
			return 1;
	return 0;
   ─────────────────────────── */
