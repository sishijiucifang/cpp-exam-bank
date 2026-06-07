/*
 * 来源：C++题库 题号740
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第42题
 *
 * 题目：一个整数数列，它的第一项是m，第二项是n，以后每
 */

第42题 （0.1分）        题号:740        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 一个整数数列，它的第一项是m，第二项是n，以后每
      项都是前两项之和。编写函数int getSum(int m, int n)，
          求前20项之和。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>
#include <stdio.h>

void writeinfile();
/**********Program**********/


/**********  End  **********/

void main()
{
        int m, n;
        cout<<"输入第一项和第二项: ";
        cin>>m>>n;
        cout<<"前20项之和为："<<getSum(m, n)<<endl;
        writeinfile();
}

void writeinfile( )
{
        ifstream inFile("in.txt", ios::in | ios::nocreate);
        if(!inFile)
        {
                cerr<<"无法打开数据文件in.txt。需要核查！"<<endl;
                return ;
        }

        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile.is_open())
        {
                cerr<<"无法打开数据文件out.txt。需要核查！"<<endl;
                return ;
        }

        for(int i=0; i<15; i++)
        {
                int a, b;
                inFile>>a>>b;
                if(inFile.fail()) break;
                myfile<<getSum(a, b)<<endl;
        }
        inFile.close();
        myfile.close();
}




/* ───────── 参考答案 ─────────
int getSum(int m, int n)
{
	int str[20];
	int sum=0;
	str[0]=m;
	str[1]=n;
	for(int i=2;i<20;i++)
	{
		str[i]=str[i-2]+str[i-1];
		cout<<str[i]<<" ";
	}
	for(i=0;i<20;i++)
		sum+=str[i];
	return sum;
}
   ─────────────────────────── */
