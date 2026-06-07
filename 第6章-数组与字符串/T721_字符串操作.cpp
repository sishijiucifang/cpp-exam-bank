/*
 * 来源：C++题库 题号721
 * 章节：第6章-数组与字符串
 * 难度：较难
 * 题序：第32题
 *
 * 题目：编写一个函数indexOf，判断字符串s1是否是字
 */

第32题 （0.1分）        题号:721        难度:较难        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写一个函数indexOf，判断字符串s1是否是字
      符串s2的子串。如果s1是s2的子串，函数
      返回第一次匹配处的下标；否则，返回-1。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <cstring>

#define N 100
#define M 10 

using namespace std;

int  indexOf( char *s1, char *s2)
{
        /**********Program**********/        
        





        
        /**********  End  **********/
}

void grading();
int main()
{
        char longString[N], shortString[M];
        int result;
        
        cout << "Please enter a long string(length<100):\n";
        gets(longString);
        cout << "Please enter a short string(length<10):\n";
        gets(shortString);
        
        result = indexOf(shortString, longString);
        
        if(result != -1){
                cout << "\""<< shortString << "\" 是 \"" ;
                cout << longString;
                cout << "\" 的子串，其第一次匹配处的下标为 ";
                cout << result << " 。\n";
        }
        else{
                cout << "\""<< shortString << "\" 不是 \"" ;
                cout << longString << "\" 的子串。";
        }
        
//忽略阅读
        grading();
//忽略阅读结束

        return 0;
}

//以下忽略阅读
void grading()
{
        char longStr[N], shortStr[M];
        int result;
        
        fstream infile167,myfile;
        infile167.open("in167.txt",ios::in);
        infile167.getline(longStr,N,'\n');
        infile167.getline(shortStr,M,'\n');
        infile167.close();
        
        myfile.open("out167.txt",ios::out);
        
        result = indexOf(shortStr, longStr);
        if( result != -1)
                myfile << result << endl;
        else
                myfile << -1 << endl;
        
        myfile.close();
        
}


/* ───────── 参考答案 ─────────
for(int i=0; *(s2+i); i++)
	{
		for(int j=0; *(s1+j); j++)
			if ( *(s2+i+j) != *(s1+j) )
				break;
			if (j == strlen(s1))
				return i;
	}
	return -1;
   ─────────────────────────── */
