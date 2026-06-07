/*
 * 来源：C++题库 题号618
 * 章节：第5章-指针
 * 难度：较难
 * 题序：第90题
 *
 * 题目：请编写函数
 */

第90题 （0.1分）        题号:618        难度:较难        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：请编写函数
       void sort(int a[], int len)
      将数组a 中的元素从小到大进行排列。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中介于
      "**********Program**********"
      和
      "**********  End  **********"
      的部分填入所编写的若干语句。

------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;

#define N 20

void sort(int a[], int len)
{
/**********Program**********/



/**********  End  **********/
}

int main()
{
     
    ifstream inf("in.dat",ios::in);
    ofstream ouf("out.dat",ios::out);
    int a[N];
    for(int i=0;i<N;i++)
       inf>>a[i];
    sort(a,N);
    for(i=0;i<N;i++)
       ouf<< a[i]<<endl;
    inf.close();
    ouf.close();
    return 0;  
}



/* ───────── 参考答案 ─────────
for(int i=0;i<len;i++)
{
   int k=i;
   for(int j=i;j<len;j++)
    if(a[j]<a[k])
       k=j;
   int b=a[i];
   a[i]=a[k];
   a[k]=b;
}
   ─────────────────────────── */
