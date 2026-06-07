/*
 * 来源：C++题库 题号701
 * 章节：第1章-C++基本语法
 * 难度：中
 * 题序：第156题
 *
 * 题目：编写一个函数void changeString(char str[]);，
 */

第156题 （0.1分）        题号:701        难度:中        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个函数void changeString(char str[]);，
      功能是把其中的大写字母变成小写字母，小写字母变成大写字母，
          非字母的字符不作变换。变换结果依旧保存在str数组内。
          大写字母的ASCII码值比对应的小写字母的ASCII码值小32，
          如'A'的ASCII码值比'a'的ASCII码值小32。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>

void writeinfile( );

/**********Program**********/

/**********  End  **********/

void main(){
        char str[50];
        cout<<"输入要变换的字符串：";
        cin>>str;
        changeString(str);
        cout<<"变换结果是："<<str<<endl;
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
        
        for(int i=0; i<4; i++)
        {
                char str[50];
                inFile>>str;
                changeString(str);
                myfile<<str<<endl;
        }

        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
void changeString(char str[])
{
	for(int i=0; str[i] != '\0'; i++)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i] -= 32;
		else if(str[i]>='A' && str[i]<='Z')
			str[i] += 32;
	}
}
   ─────────────────────────── */
