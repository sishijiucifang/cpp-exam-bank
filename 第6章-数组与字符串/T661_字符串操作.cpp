/*
 * 来源：C++题库 题号661
 * 章节：第6章-数组与字符串
 * 难度：较难
 * 题序：第18题
 *
 * 题目：编写一个函数 instring，该函数的原型为：
 */

第18题 （0.1分）        题号:661        难度:较难        第6章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：编写一个函数 instring，该函数的原型为：
         bool instring(char c, char *str);
      其功能是判断字符c是否在字符串str中出现。
      例如，函数调用instring（'a',"abcde"）的返回值应为true。

-------------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

-------------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void wwjt();


/**********Program**********/



/**********  End  **********/
int main()
{
        bool result;
        result = instring('a',"abcde");
        wwjt();
        return 0;
}

void wwjt()
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        myfile<<instring('c',"abcde")<<endl;
        myfile<<instring('d',"abcefggh")<<endl;
        myfile.close();        
}



/* ───────── 参考答案 ─────────
----------------------
bool instring(char c, char *str)
{
	while(*str++)
		if (*str==c) return true;
	return false;
}

----------------------
   ─────────────────────────── */
