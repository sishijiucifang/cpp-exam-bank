/*
 * 来源：C++题库 题号15
 * 章节：第6章-数组与字符串
 * 难度：易
 * 题序：第4题
 *
 * 题目：完成函数cal的编写，该函数计算数组array中len个
 */

第4题 （0.1分）        题号:15        难度:易        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数cal的编写，该函数计算数组array中len个
      整数的正数个数、负数个数和平均值。并分别存储
      到全局变量pos、neg和ave中。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写
      代码。请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/
#include<iostream>
#include<fstream>
using namespace std;
int pos,neg;
double ave;

void cal(int array[], int len);
int grading();
int main()
{
        int a[12] = {1,2,3,4,-5,-2,-1,-4,0,3,2,1};
        cal(a,12);
        cout<<"pos = "<<pos<<endl;
        cout<<"neg = "<<neg<<endl;
        cout<<"ave = "<<ave<<endl;
        //忽略阅读
        grading();
        //忽略阅读结束
        return 0;
}

void cal(int array[], int len)
{

/**********Program**********/


/**********  End  **********/

}

//以下忽略阅读
int grading()
{
        int a[100],i,j=0;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<100;i++)
        {
                infile>>a[i];
        }
        for (i=0;i<9;i++)
        {
                cal(a+j, j+10);
                outfile<<pos<<neg<<ave<<endl;
                j++;
        }
        infile.close();
        outfile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
pos = 0;
	neg = 0;
	ave = 0;
	for(int i=0;i<len;i++)
	{
		if(array[i]>0)
			pos++;
		if(array[i]<0)
			neg++;
		ave += array[i];
	}
	ave = ave/len;
   ─────────────────────────── */
