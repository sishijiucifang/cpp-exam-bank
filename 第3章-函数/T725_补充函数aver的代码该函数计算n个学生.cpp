/*
 * 来源：C++题库 题号725
 * 章节：第3章-函数
 * 难度：易
 * 题序：第172题
 *
 * 题目：补充函数aver的代码，该函数计算n个学生成绩（通
 */

第172题 （0.1分）        题号:725        难度:易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：补充函数aver的代码，该函数计算n个学生成绩（通
      过参数cj传入）的平均分数。

--------------------------------------------------
注意：部分源程序给出如下。仅在标有"Program"和"End"
      的注释行之间补充代码，请勿改动其它内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

void grading();

float aver(int cj[],int n)
{
/**********Program**********/






/**********  End  **********/
}

int main()
{ 
        grading(); 
        return 0;
}

void grading()
{
        fstream infile,myfile;
        int b[50];
        int i;
        infile.open("in.txt",ios::in);
        myfile.open("out.txt",ios::out);

        for(i=0;i<50;i++)
           infile>>b[i];        
        myfile<<(int)aver(b,50)<<endl;
        infile.close();
        myfile.close();

}


/* ───────── 参考答案 ─────────
int sum = 0;
	int i;
	for( i=0;i<n;i++)
		sum += cj[i];
	return (float)sum/n;
   ─────────────────────────── */
