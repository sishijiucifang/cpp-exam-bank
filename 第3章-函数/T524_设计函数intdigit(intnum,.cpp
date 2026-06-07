/*
 * 来源：C++题库 题号524
 * 章节：第3章-函数
 * 难度：中
 * 题序：第42题
 *
 * 题目：设计函数int digit(int num,int k);返回整数
 */

第42题 （0.1分）        题号:524        难度:中        第3章
/*-----------------------------------------------
【程序设计】
-------------------------------------------------

题目：设计函数int digit(int num,int k);返回整数
      num从右边开始的第k位数字的值。
注：如果k大于num的位数，则返回0。
要求：num位数小于10位。
例如：digit(4647,3)=6
      digit(23523,7)=0
        
-------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和
      其它函数中的任何内容，仅在*Program*和*End*
      所标记的区域内完成题干要求的函数功能。
-------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
int grading();

/*********Program*********/






/*********  End  *********/

int main()
{
        cout<<"digit(4647,3)="<<digit(4647,3)<<endl;
        cout<<"digit(23523,7)="<<digit(23523,7)<<endl;
        
//忽略阅读
        grading();
//忽略阅读结束
        
        return 0;
}

//以下忽略阅读
int grading()
{
        int m,n;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);

        for (int i=0;i<3;i++)
        {
                infile>>m;
                infile>>n;
                outfile<<digit(m,n)<<endl;
        }

        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
int digit(int num, int k)
{
	for (int i=0;i<k-1;i++)
		num = num/10;
	return num%10;
}
   ─────────────────────────── */
