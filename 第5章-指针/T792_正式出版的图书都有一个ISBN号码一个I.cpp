/*
 * 来源：C++题库 题号792
 * 章节：第5章-指针
 * 难度：较易
 * 题序：第191题
 *
 * 题目：正式出版的图书都有一个ISBN号码，一个ISBN码包
 */

第191题 （0.1分）        题号:792        难度:较易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：正式出版的图书都有一个ISBN号码，一个ISBN码包
      括9位数字和1位识别码，9位数字分三段，分别表
      示书籍的出版语言、出版社和该书在出版社的编号。
      三段数字和识别码之间可以用分隔符“-”分开（如
      x-xxx-xxxxx-x），也可以不用（如xxxxxxxxxx）。
      识别码的计算方法为：对前9位数加权求和，权重分
      别为1,2,3,...,9，然后用求得的和对11取模，所得
      的结果即为识别码，如果余数为10，则识别码为大
      写字母X。例如"4113874271"是一个有效的ISBN号，
      "286024864X"则不是有效的ISBN号。
      函数valid判定一个不含分隔符“-”的ISBN号是否
      有效，有效则返回1，否则返回0。实现该函数。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
int valid(char *isbn);

/**********Program**********/


/**********  End  **********/

int main()
{
        char isbn[100];
        cout<<"ISBN号码:";
        cin>>isbn;
        if(valid(isbn))
                cout<<"有效的ISBN号"<<endl;
        else
                cout<<"无效的ISBN号"<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j;
        char ic[32];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>ic;
                        outfile<<valid(ic);
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int valid(char *isbn)
{
	int i,k=0;
	if(strlen(isbn)!=10)
		return 0;
	int r[10]={1,2,3,4,5,6,7,8,9,0};
	for(i=0;i<9;i++)
		k+=(isbn[i]-'0')*r[i];
	k=k%11;
	if(k==10)
	{
		if(isbn[9]!='X')
			return 0;
		return 1;
	}
	else
	{
		if(isbn[9]-'0'==k)
			return 1;
		return 0;
	}
}
   ─────────────────────────── */
