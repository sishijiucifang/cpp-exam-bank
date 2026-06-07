/*
 * 来源：C++题库 题号223
 * 章节：第3章-函数
 * 难度：较易
 * 题序：第19题
 *
 * 题目：一组数据的标准差是方差的算术平方根，方差则是
 */

第19题 （0.1分）        题号:223        难度:较易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：一组数据的标准差是方差的算术平方根，方差则是
      指每个数和平均数的差的平方和的平均数。例如三
      个数a、b、c的平均数是d，则它们的方差计算方法是
      fc=((a-d)**2+(b-d)**2+(c-d)**2)/3。标准差则
      是方差的平方根。函数bzc()计算一个数组的标准差
      并返回。
      完成该函数的编写。

          提醒：求平方根可以用sqrt函数。sqrt(5)返回5的平方根。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
void grading();
//a -- 要计算标准差的数组
//len -- 数组a中元素个数
//返回值 -- 数组a中所有元素的标准差
double bzc(double a[], int len);

/**********Program**********/




/**********  End  **********/

int main()
{
        double a[5] = {1,2,3,4,5};
        cout<<"数组a的标准差为:"<<bzc(a,5)<<endl;
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
                        outfile<<bzc(a+i*10+j,6)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
double bzc(double a[], int len)
{
	int i;
	double ave = 0, res=0;
	for(i=0;i<len;i++)
		ave+=a[i];
	ave = ave/len;
	for(i=0;i<len;i++)
		res+=(a[i]-ave)*(a[i]-ave);
	return sqrt(res/len);
}
   ─────────────────────────── */
