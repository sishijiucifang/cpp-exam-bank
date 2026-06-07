/*
 * 来源：C++题库 题号596
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第75题
 *
 * 题目：将从文件输入的10个数按降序排列
 */

第75题 （0.1分）        题号:596        难度:中        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 将从文件输入的10个数按降序排列

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
      请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include<fstream>
#include<iostream>
using namespace std;

#include <stdio.h>

void writeinfile(int n[]);


void main()
{
        int n[10],i,j;
        ifstream inFile("in.txt", ios::in);
        if(!inFile)
        {
                cout<<"无法打开数据文件in.txt,需核查。"<<endl;
                return;
        }
        for(i=0; i<10; i++)
                inFile>>n[i];
        /**********Program**********/




        /**********  End  **********/
        writeinfile(n);
}

void writeinfile(int n[])
{ 
        int k;
        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile)
        {
                cout<<"无法打开数据文件out.txt,需核查。"<<endl;
                return;
        }
        for(k=0;k<10;k++)
                myfile<<n[k]<<endl;
        myfile.close();
}



/* ───────── 参考答案 ─────────
----------------------

	for(i=0;i<9;i++)
		for(j= i+1;j<10;j++)
			if(n[i]<n[j])
				{int k=n[j];n[j]=n[i];n[i]=k;}

	for(i=0; i<10; i++)
		cout<<n[i]<<" ";
----------------------
   ─────────────────────────── */
