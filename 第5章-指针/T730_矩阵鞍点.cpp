/*
 * 来源：C++题库 题号730
 * 章节：第5章-指针
 * 难度：中
 * 题序：第175题
 *
 * 题目：编写程序求出二维数组中的鞍点
 */

第175题 （0.1分）        题号:730        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：编写程序求出二维数组中的鞍点。所谓鞍点是指一个矩阵元素的值在其所在行中
      最大，在所在列中最小（设矩阵各元素值互不相同）。
      由文件读入10乘10的数组，结果放在数组s1,s2中，
      表示a[s1[i]][s2[i]]是一个鞍点，并按行升序排列。
--------------------------------------------------
注意：部分源程序给出如下。仅在标有"Program"和"End"的注释行之间补充代码，
      请勿改动其它内容。
------------------------------------------------*/

#include <fstream>
#include <iostream>
using namespace std;

void gfkd(int s1[],int s2[],int num);

int find(int a[][10],int s1[],int s2[])
{
/**********Program**********/




/**********  End  **********/
}

int main()
{
        int a[10][10],count;
        int s1[10],s2[10];

        fstream myfile;
        myfile.open("in.txt",ios::in);
        for(int i=0;i<10;i++)
         for(int j=0;j<10;j++)
           myfile>>a[i][j];
        myfile.close();
        count=find(a,s1,s2); //count中为鞍点个数
        gfkd(s1,s2,count);
        return 0;
}

void gfkd(int s1[],int s2[],int num)
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        
        for(int i=0;i<num;i++)
        {
            myfile<<s1[i]<<endl;
            myfile<<s2[i]<<endl;
        }
        myfile.close();
}


/* ───────── 参考答案 ─────────
int count=0,flag;
    for(int i=0;i<10;i++)
    {int ptr=0;
     for(int j=1;j<10;j++)
     {
      if(a[i][j]>a[i][ptr])
	ptr=j;
     }
     flag=1;
     for(int k=0;k<10;k++)
     {
      if(a[k][ptr]<a[i][ptr])
	flag=0;
     }
     if(flag==1)
     {
      s1[count]=i;
      s2[count]=ptr;
      count++;
     }
    }
    return count;
   ─────────────────────────── */
