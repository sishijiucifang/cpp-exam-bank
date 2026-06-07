/*
 * 来源：C++题库 题号706
 * 章节：第5章-指针
 * 难度：中
 * 题序：第160题
 *
 * 题目：从文件中读出15个数按由大到小的顺序存放在一个数组中，
 */

第160题 （0.1分）        题号:706        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：从文件中读出15个数按由大到小的顺序存放在一个数组中，
      输入一个数，要求用折半查找法找出该数是数组中第
      几个元素，如果该数不在数组中，打印出无此数。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
# include <iostream>
# include <fstream>
using namespace std;
# define N  15
void wwjt();
int array[N];
int find(int array[], int len,int key)
{
   int mid,element=-1,left=0,right=len-1;
   

  /**********Program**********/




   /**********  End  **********/
   return element;
}

void main()
{
        int key,element;
        ifstream infile("in.txt",ios::in);
                if(!infile.is_open())
                {
                        cout<<"File Open Error!"<<endl;
                        return;
                }
        for(int i=0;i<N;i++) 
            infile>>array[i];
                infile.close();
        cout<<"输入要查找的数:\n";
        cin>>key;
                element=find(array,N,key);
        if(element==-1)
                cout<<"没有这个数!!"<<endl;
        else
                cout<<"是第"<<element+1<<"个数"<<endl;
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
        outfile<<find(array,N,0)<<"\n";
    outfile<<find(array,N,23456)<<"\n";
    outfile<<find(array,N,9876)<<"\n";
    outfile<<find(array,N,456)<<"\n";
    outfile<<find(array,N,921)<<"\n";
    outfile<<find(array,N,5789)<<"\n";
        outfile.close();
}


/* ───────── 参考答案 ─────────
while(left<=right)
   {
     mid=(left+right)/2;
     if(array[mid]==key)
	 {
     element=mid;
     break;
	}
   if(array[mid]>key)
      left=mid+1;
   if(array[mid]<key)
     right=mid-1;
  }
   ─────────────────────────── */
