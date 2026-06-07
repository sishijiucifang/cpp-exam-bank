/*
 * 来源：C++题库 题号703
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第158题
 *
 * 题目：编写函数,把一个数字字符组成的字符串转换为相应的整数（如"1234"转换为1234）
 */

第158题 （0.1分）        题号:703        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数,把一个数字字符组成的字符串转换为相应的整数（如"1234"转换为1234）。

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
        cout<<"输入数字字符串：";
        char str[50];
        cin>>str;
        cout<<"对应的整数是："<<a2i(str)<<endl;

        writeinfile( );
}

void writeinfile( )
{
        char str[50];
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
        
        for(int i=0; i<4; i++)
        {
                inFile>>str;        
                myfile<<a2i(str)<<endl;
        }

        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
int a2i(char ds[])
{
	int v = 0;
	for(int i=0; ds[i] != '\0'; i++)
	{
		v = v*10 + ds[i]-'0'; 
	}
	return v;
}
   ─────────────────────────── */
