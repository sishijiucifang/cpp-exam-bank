/*
 * 来源：C++题库 题号715
 * 章节：第5章-指针
 * 难度：中
 * 题序：第165题
 *
 * 题目：函数void sort(char a[][100], int len);对二维
 */

第165题 （0.1分）        题号:715        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数void sort(char a[][100], int len);对二维
      字符数组中的字符串按字典顺序从小到大排序，编
      写该函数。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void wwjt();
void sort(char a[][100], int len)
{
  
   /**********Program**********/




   /**********  End  **********/
 
}


void main()
{
   char ch[5][100];
   int i;
   for(i=0;i<5;i++)
     cin>>ch[i];
   sort(ch,5);
   for(i=0;i<5;i++)
     cout<<ch[i]<<endl;
   wwjt();
}
void wwjt()
{
        ofstream outfile("out.txt",ios::out);
        if(!outfile.is_open())
        {
                cout<<"File Open Error"<<endl;
                return;
        }
    char ch[5][100]={"C++","Pascal","Cobol","Basic","Fortran"};
    sort(ch,5);
    for(int i=0;i<5;i++)
       outfile<<ch[i]<<endl;
        outfile.close();
}
 


/* ───────── 参考答案 ─────────
char ch[100];
      int i,j;
      bool flag=1;
      for(i=0;i<len-1&&flag;i++)
     {  
      flag=0;
      for(j=0;j<len-i;j++)
      if(strcmp(a[j],a[j+1])>0)
      {
       strcpy(ch,a[j]);
       strcpy(a[j],a[j+1]);
       strcpy(a[j+1],ch);
       flag=1;
       }
      }
----------------------
int i,j,k;
    for(i=0;i<n;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(strcmp(array[k],array[j])>0)
			    k=j;
		}
		if(k!=i)
		{
                  char temp[100];
		  strcpy(temp,array[i]);
		  strcpy(array[i],array[k]);
		  strcpy(array[k],temp);
		}

	}
   ─────────────────────────── */
