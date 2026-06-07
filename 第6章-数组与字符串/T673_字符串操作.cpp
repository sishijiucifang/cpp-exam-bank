/*
 * 来源：C++题库 题号673
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第21题
 *
 * 题目：函数myStrCat(char *dst, char *src)将字符串src
 */

第21题 （0.1分）        题号:673        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数myStrCat(char *dst, char *src)将字符串src
      连接到字符串dst的后面。填写适当的代码，使得
          mySum()完成正确的功能。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include<iostream>
#include <fstream>
using namespace std;

void myStrCat(char *dst, char *src);
void gfkd();

void main()
{        char dst[100]="Hello, ";
        char src[100]="Good luck!";

        myStrCat(dst, src);
        cout << dst << endl;

        // -------- main()函数此后部分可以不阅读 -----------
        gfkd();
}

void myStrCat(char *dst, char *src)
{
/*************** Program *****************/
        




/*************** End *****************/
}

void gfkd()
{        fstream myF;
        char dst[100], src[100];

        myF.open("in.dat",ios::in);
        myF.read(dst, 100);
        myF.read(src, 100);
    myF.close();

    myF.open("out.dat",ios::out);
        myStrCat(dst, src);
    myF << dst;
    myF.close();
}



/* ───────── 参考答案 ─────────
int i=0, len;
	
	len = strlen(dst);
	while (src[i])
		dst[len++] = src[i++];
	dst[len] = '\0';
   ─────────────────────────── */
