/*
 * 来源：C++题库 题号9
 * 章节：第2章-流程控制
 * 难度：易
 * 题序：第6题
 *
 * 题目：学校规定大学四年必须修满36个学分的选修课，课程
 */

第6题 （0.1分）        题号:9        难度:易        第2章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------

题目：学校规定大学四年必须修满36个学分的选修课，课程
      的分值有1分，2分和3分，当学生自己设定最多选课数
      量n时，共有多少种选法,刚好修满36个学分？请将结
      果存入变量count。

---------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
---------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

void grading();
int course(int max);
int course(int max)
{
        int count =0;
/**********Program**********/




/**********  End  **********/
}
int main()
{
        int count ,max;
        cout<<"请输入你最多想选的选修课门数：";
        cin>>max;
        if(max>0)
        {
                count = course(max);
                if(count>0)
                        cout<<"共有"<<count<<"种选法。"<<endl;
                else
                        cout<<"课程数量太少"<<endl;
        }
        else
                cout<< "选课数量不能为负数" ;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        fstream infile,outfile;
        int i,j,n,count;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<4;j++)
                {
                        infile>>n>>n;
                        n=n%36+1;
                        count = course(n);
                        outfile<<count<<' ';
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();        
}



/* ───────── 参考答案 ─────────
int i,j,k;
	for(i=0;i<=max;i++)
		for(j=0;j<=max;j++)
			for(k=0;k<=max;k++)
				if( ((i+j*2+k*3)==36)&&((i+j+k)<=max) )
				{
					count++;
				}
	return count;
   ─────────────────────────── */
