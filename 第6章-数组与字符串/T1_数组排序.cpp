/*
 * 来源：C++题库 题号1
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第1题
 *
 * 题目：函数insertSort将key插入一个从小到大排序的数组
 */

第1题 （0.1分）        题号:1        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数insertSort将key插入一个从小到大排序的数组
      a中，a中已有数组元素len个。完成该函数的编写。
      如数组a中数据为[3,6,9]时，插入7后，数组a变为
      [3,6,7,9]
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
void insertSort(int a[],int len,int key);

/**********Program**********/




/**********  End  **********/

int main()
{
        int i,k,a[10];
        cout<<"请输入5个整数:";
        for(i=0;i<5;i++)
        {
                cin>>k;
                insertSort(a,i,k);
        }
        for(i=0;i<5;i++)
                cout<<a[i]<<" ";
        grading();
        cout<<endl;
}

//以下忽略阅读
void grading()
{
        int n, i, j, a[20];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>n;
                        n = n%397;
                        insertSort(a,j,n);
                }
                for(j=0;j<10;j++)
                        outfile<<a[j]<<" ";
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
void insertSort(int a[],int len,int key)
{
	int i;
	for(i=len-1;i>=0;i--)
	{
		if(a[i]>key)
			a[i+1]=a[i];
		else
			break;
	}
	a[i+1]=key;
}
   ─────────────────────────── */
