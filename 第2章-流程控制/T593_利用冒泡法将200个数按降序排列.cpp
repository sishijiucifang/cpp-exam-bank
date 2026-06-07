/*
 * 来源：C++题库 题号593
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第72题
 *
 * 题目：利用冒泡法将200个数按降序排列
 */

第72题 （0.1分）        题号:593        难度:中        第2章
//*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 利用冒泡法将200个数按降序排列

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/
#include<fstream>
#include<iostream>

using namespace std;

void writeinfile(int n[], int len);
void readin(int n[], int len);

int main()
{
        int arr[200],i,j,k;
        readin(arr, 200);
        /**********Program**********/

        

        /**********  End  **********/
        for(i=0;i<200;i++)
        cout<<arr[i]<<" ";
        writeinfile(arr, 200);

        cout <<"Press the enter key to exit!" << endl;
    cin.ignore(cin.rdbuf()->in_avail() + 1);

        return 0;
}

void readin(int n[], int len)
{
        ifstream infile("f1.txt", ios::in);
        for(int i = 0; i < len; i++)
                infile >> n[i];

        infile.close();
}

void writeinfile(int n[], int len)
{
int t;
fstream myfile;
myfile.open("f2.txt",ios::out);
for(t=0;t<len;t++)
myfile<<n[t]<<endl;
myfile.close();
}



/* ───────── 参考答案 ─────────
----------------------
for(i=0;i<200;i++)
	{
		for(j=0;j<200;j++)
		{
			if(arr[j+1]>arr[j])
			{
				k=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=k;
			}
		}
	}

----------------------
   ─────────────────────────── */
