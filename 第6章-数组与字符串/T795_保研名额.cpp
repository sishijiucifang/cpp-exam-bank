/*
 * 来源：C++题库 题号795
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第80题
 *
 * 题目：保研名额
 */

第80题 （0.1分）        题号:795        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：保研名额。要求在一组学生中选出一名保研者。
      每名学生有三门课的成绩，存放在数组score中，
      保研标准为：在平均分不低于80，且每门课程都及
      格的学生中选择总分最高的，如果有满足条件的学
      生，则返回该学生的序号（序号从0开始），如果
      找不到满足条件的学生，则返回-1。
      函数f在一个学生数组中选择保研者，参数a是学生
      数组，参数n是学生数量，返回值为保研者序号或
      -1（没有满足条件的人）。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
struct Student {
        char name[10];     //姓名
        double score[3];   //三门课分数
};
void grading();
int f(Student a[],int n);

/**********Program**********/


/**********  End  **********/

int main()
{
        Student stu[]={{"annie", 85,78,90},{"bonny",75,89,56},
                {"carol",70,100,100},{"dan",84,82,88}};
        int k=f(stu,4);
        if(k==-1)
                cout<<"无人满足保研条件"<<endl;
        else
                cout<<stu[k].name<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        Student stu[20];
        int i,j,k,n=4,m;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                n++;
                for(j=0;j<10;j++)
                {
                        for(k=0;k<n;k++)
                        {
                                stu[k].name[0]=0;
                                infile>>m;
                                stu[k].score[0]=m%49+50;
                                infile>>m;
                                stu[k].score[1]=m%49+50;
                                infile>>m;
                                stu[k].score[2]=m%49+50;
                        }
                        outfile<<f(stu,n)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int f(Student a[],int n)
{
	int max = 0,index = -1;
	for(int i=0;i<n;i++)
	{
		if(a[i].score[0]<60 || a[i].score[1]<60 || a[i].score[2]<60)
			continue;
		if((a[i].score[0]+a[i].score[1]+a[i].score[2])/3<80)
			continue;
		if((a[i].score[0]+a[i].score[1]+a[i].score[2])>max)
		{
			max=(a[i].score[0]+a[i].score[1]+a[i].score[2]);
			index = i;
		}
	}
	return index;
}
   ─────────────────────────── */
