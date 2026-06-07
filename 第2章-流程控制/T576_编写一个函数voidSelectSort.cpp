/*
 * 来源：C++题库 题号576
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第55题
 *
 * 题目：编写一个函数void SelectSort (int a[ ],int n)，
 */

第55题 （0.1分）        题号:576        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 编写一个函数void SelectSort (int a[ ],int n)，
       采用选择排序的方法按升序排列数组a中的n个元素。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>
using namespace std;
void wwjt(int[]);

void SelectSort (int a[ ],int n)
{
/**********Program**********/




/**********  End  **********/
}

void main()
{
        int i,a[50];
        fstream myfile;
        myfile.open("in.txt",ios::in);
        for (i=0;i<50;i++)
          myfile>>a[i];
        myfile.close();
        SelectSort(a,50);
        for(i=0;i<50;i++)
                cout<<a[i]<<'\t';
        wwjt(a);
}

void wwjt(int a[])
{
        int k;
        fstream myfile;
        myfile.open("out.txt",ios::out);
        for(k=0;k<50;k++)
                myfile<<a[k]<<endl;
        myfile.close();
}


/* ───────── 参考答案 ─────────
----------------------
        int i,j,k;
        for (i=1;i<n;i++){
           k=i-1;
           for (j=i;j<n;j++)
            if (a[j]<a[k]) k=j;
        int x=a[i-1];a[i-1]=a[k];a[k]=x;
        }
----------------------
   ─────────────────────────── */
