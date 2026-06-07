/*
 * 来源：C++题库 题号702
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第157题
 *
 * 题目：编写函数int calLineNumber(char * filename)，
 */

第157题 （0.1分）        题号:702        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数int calLineNumber(char * filename)，
          功能是求文本文件内文本的行数（等于在记事本程序内看到的行数），
          文本文件的名字由参数filename传入，假定一行的字符数不会超过100。
          以下给出可能用到的函数的说明：
                1. int ifstream::eof()   判别文件位置指针是否到达文件结尾
                2. ifstream::getline(char *buffer, int count)  
                   从文件最多读取count个字符存入buffer指向的内存区域，
                   如果遇到换行符，则读操作会提前结束。读入的内容尾部自动补上空字符。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>
#include <math.h>

void writeinfile( );


/**********Program**********/

/**********  End  **********/

void main(){
        cout<<"总行数："<<calLineNumber("test.txt")<<endl;
        writeinfile();
} 

void writeinfile( )
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile.is_open())
        {
                cerr<<"无法打开数据文件out.txt。需要核查！"<<endl;
                return ;
        }
        
        myfile<<calLineNumber("in.txt")<<endl;

        myfile.close();
}



/* ───────── 参考答案 ─────────
int calLineNumber(char * filename)
{
	ifstream inFile(filename, ios::in | ios::nocreate);
	if(!inFile)
	{
		cerr<<"无法打开数据文件"<<filename<<"。需要核查！"<<endl;
		return 0;
	}
	int lineCnt = 0;
	while(!inFile.eof())
	{
		char str[100];
		inFile.getline(str, 100);
		//cout<<str<<endl;
		lineCnt++;
	}
	inFile.close();
	return lineCnt;
}
   ─────────────────────────── */
