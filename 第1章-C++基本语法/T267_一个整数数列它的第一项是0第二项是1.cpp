/*
 * 来源：C++题库 题号267
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第30题
 *
 * 题目：一个整数数列，它的第一项是0，第二项是1，
 */

第30题 （0.1分）        题号:267        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：一个整数数列，它的第一项是0，第二项是1，
      以后每项都是前两项之和，编写求前n项之和的函数GetSum(int n)。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>

void writeinfile( );
/**********Program**********/




/**********  End  **********/

void main()
{
        int n;  //数列项数
        cout<<"求和的总项数：";
        cin>>n;
        int s = GetSum(n);
        cout<<"和："<<s<<endl;
        writeinfile( );
}

void writeinfile( )
{
        int n;
        ifstream inFile("in.txt", ios::in | ios::nocreate);
        if(!inFile)
        {
                cerr<<"无法打开数据文件in.txt。需要核查！"<<endl;
                return ;
        }
        inFile>>n;
        inFile.close();
        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile.is_open())
        {
                cerr<<"无法打开数据文件out.txt。需要核查！"<<endl;
                return ;
        }
        myfile<<GetSum(n)<<endl;
        myfile.close();
}


/* ───────── 参考答案 ─────────
----------------------
int GetSum(int n)
{
	int a1 = 0, a2 = 1;	
	int sum = a1 + a2; 

	for(int i=0; i<n-2; i++)
	{
		int next = a1 + a2;
		sum += next;
		a1 = a2;
		a2 = next;
	}
	return sum;
}
----------------------
   ─────────────────────────── */
