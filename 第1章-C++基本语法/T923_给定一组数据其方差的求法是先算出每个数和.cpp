/*
 * 来源：C++题库 题号923
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第213题
 *
 * 题目：给定一组数据，其方差的求法是：先算出每个数和平均数的差的平方，
 */

第213题 （0.1分）        题号:923        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：给定一组数据，其方差的求法是：先算出每个数和平均数的差的平方，
再求和，再求平均数。例如三个数a、b、c的平均数是d，
则它们的方差=((a-d)**2+(b-d)**2+(c-d)**2)/3。该程序要去实现函数fc()，
其功能为计算一个数组的方差并返回。完成该函数的编写。 
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void grading();
//a -- 要计算方差的数组
//len -- 数组a中元素个数
//返回值 -- 数组a中所有元素的方差
double fc(double a[], int len);

/**********Program**********/




/**********  End  **********/

int main()
{
        double a[5] = {1,2,3,4,5};
        cout<<"数组a的方差为:"<<fc(a,5)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i, j, m;
        double a[200];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<200;i++)
        {
                infile>>m;
                a[i]=m/200.0;
        }
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        outfile<<fc(a+i*10+j,5)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
double fc(double a[], int len)
{
	int i;
	double ave = 0, res=0;
	for(i=0;i<len;i++)
		ave+=a[i];
	ave = ave/len;
	for(i=0;i<len;i++)
		res+=(a[i]-ave)*(a[i]-ave);
	return res/len;
}
   ─────────────────────────── */
