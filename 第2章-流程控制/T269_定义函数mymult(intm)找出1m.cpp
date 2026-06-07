/*
 * 来源：C++题库 题号269
 * 章节：第2章-流程控制
 * 难度：中
 * 题序：第32题
 *
 * 题目：定义函数mymult(int m)，找出1 m之中满足除以3余2，除以5余3，
 */

第32题 （0.1分）        题号:269        难度:中        第2章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目： 定义函数mymult(int m)，找出1 m之中满足除以3余2，除以5余3，
除以7余2的最大整数。(m>50)

------------------------------------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
void wwjt();
int m;

/**********Program**********/




/**********  End  **********/
void main()
{
        cout<<"input m:"<<endl;

        cin>>m;
        cout <<mymult(m)<<endl;


//忽略阅读
    wwjt();
//忽略阅读结束
}

//忽略阅读
void wwjt()
{        
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out); 
        infile>>m;
        outfile<<mymult(m)<<endl;
        infile.close();
        outfile.close();
}
//忽略阅读结束






/* ───────── 参考答案 ─────────
int mymult(int m)
{
	int i,max=1;
	for(i=1;i<=m;i++)
		if((i%3==2)&&(i%5==3)&&(i%7==2)) 
		{
			max=i;
    
		}
		return max;
}
   ─────────────────────────── */
