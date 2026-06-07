/*
 * 来源：C++题库 题号649
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第115题
 *
 * 题目：编写函数void myfun(int a[3][5]，int max[5])，
 */

第115题 （0.1分）        题号:649        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数void myfun(int a[3][5]，int max[5])，
      该函数的功能是：计算数组a的每列元素的最大值，
      并将第i列最大值存入数组max相应的第i个元素。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。
  
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

void myfun(int a[3][5],int max[5])
{
        /**********Program**********/





        
        /**********  End  **********/
}

int main()
{
        int a[3][5]={{13,36,4,3,5},{5,2,45,6,117},{45,3,28,23,7}};
        int max[5];
        myfun(a,max);
        for(int i=0;i<5;i++)
                cout<<max[i]<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}

//以下忽略阅读
void grading()
{
        ifstream rf("in.txt",ios::in);
        int a[3][5];
        for(int i=0;i<3;i++)
                for(int j=0;j<5;j++)
                        rf>>a[i][j];
        int max[5];
        myfun(a,max);
                
        ofstream wf("out.txt",ios::out); 
                
        for( i=0;i<5;i++)
                wf<<max[i]<<' ';
                
        rf.close();
        wf.close();
}



/* ───────── 参考答案 ─────────
int i,j;
	
	for (i=0;i<5;i++){
		max[i]=a[0][i];
		for(j=1;j<3;j++)
			if(a[j][i]>max[i])
				max[i]=a[j][i];	
	}
   ─────────────────────────── */
