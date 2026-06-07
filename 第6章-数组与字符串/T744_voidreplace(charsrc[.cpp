/*
 * 来源：C++题库 题号744
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第46题
 *
 * 题目：编写函数void replace(char src[], char obj[], char sub[])，
 */

第46题 （0.1分）        题号:744        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写函数void replace(char src[], char obj[], char sub[])，
          函数功能是用sub字符串替换长串src内出现所有的obj子串。
          注意：sub串与obj串的长度不一定相等。

                提示：可使用库函数strcpy, strncmp, strncpy。
                strcpy函数：strcpy(char ds[], char ss[])，作用是把ss字符串复制给ds指向的内存区域。
                strncmp函数：int strncmp (char ds[], char ss[], int len), 作用是比较ds串和ss串中的前面len个字符，
                                                如果相同返回0，如果ds<ss，返回-1，否则返回1。
                strncpy函数：strncpy(char ds[], char ss[], int len),作用是把ss中的前len个字符复制到ds指向的内存区域。
          

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
#include <string>

void writeinfile( );
/**********Program**********/


/**********  End  **********/

void main()
{
        cout<<"输入长串：";
        char src[1000];
                cin.getline(src, 999);
                cout<<"输入将被替换的子串：";
                char obj[50];
                cin.getline(obj, 49);
                cout<<"输入用来替换的子串：";
                char sub[50];
                cin.getline(sub, 49);
                replace(src, obj, sub);
        cout<<"替换结果是："<<src<<endl;

        writeinfile( );
}

void writeinfile( )
{
        ifstream inFile("in.txt", ios::in);
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
        
        for(int i=0; i<13; i++)
        {
                        char obj[10];
                        char sub[10];
                        char src[1000];
                        inFile>>obj;        
                        inFile>>sub;
                        inFile.getline(src, 1000);
                        if(inFile.fail()) break;
                        replace(src, obj, sub);
                        myfile<<src<<endl;
        }
        inFile.close();
        myfile.close();
}



/* ───────── 参考答案 ─────────
void replace(char src[], char obj[], char sub[])
{
	char r[1000];
	int objLen = strlen(obj);
	int subLen = strlen(sub);
	char *pSrc = src;
	char *pR = r;
	while(*pSrc!='\0')
	{
		if(strncmp(pSrc, obj, objLen) == 0)
		{
			strncpy(pR, sub, subLen);
			pR += subLen;
			pSrc += objLen;
		}else{
			*pR++ = *pSrc++;
		}
	}
	*pR = '\0';
	strcpy(src, r);
}
   ─────────────────────────── */
