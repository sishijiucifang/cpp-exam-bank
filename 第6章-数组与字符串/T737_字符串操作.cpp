/*
 * 来源：C++题库 题号737
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第39题
 *
 * 题目：编写函数int find(char *str, char ch)，
 */

第39题 （0.1分）        题号:737        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数int find(char *str, char ch)，
          功能是统计参数ch的值在字符串str内出现的次数，
          函数返回出现次数。

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

void main()
{
        char ch;
        char str[20];
        cout<<"输入字符串：";
        cin>>str;
        cout<<"输入要查找的字符:";
        cin>>ch;
        cout<<ch<<"在字符串"<<str<<"内的出现次数："<<find(str, ch)<<endl;
        writeinfile( );
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
        char chs[20];
        inFile.getline(chs, 20);
        for(int i=0; i<15; i++)
        {
                char str[1000];
                inFile.getline(str, 1000);
                if(inFile.fail()) break;
                myfile<<find(str, chs[i])<<endl;
        }
        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
int find(char *str, char ch)
{
	int count = 0;
	for(int i=0; str[i]!='\0'; i++)
		if(str[i] == ch) count++;
	return count;
}
   ─────────────────────────── */
