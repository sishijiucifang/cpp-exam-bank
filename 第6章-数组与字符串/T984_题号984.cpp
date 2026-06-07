/*
 * 来源：C++题库 题号984
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第116题
 *
 * 题目：题号984
 */

第116题 （0.1分）        题号:984        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  给定一个字符串，编写程序实现凯撒解密，解密方法：
  将密文中的所有字母在字母表上向前偏移3个位置。
  例如，若密文为DWWDFN LQ WKH PRUQLQJ，则解密后
  得到的明文为ATTACK IN THE MORNING。请编写函数
  void deciphering(char str[])，对str所对应的密文
  进行解密，解密后的明文仍然存储在str中。
  说明：密文中的所有字母都是大写字母。
  
--------------------------------------------------
        注意：部分源程序给出如下。请勿改动主函数main和其它
        函数中的任何内容，不要修改或删除“program”和
        “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;
void grading();
void deciphering(char str[]);

/**********Program**********/


/**********  End  **********/

int main()
{
        char str[] = "DWWDFN LQ WKH PRUQLQJ";
        deciphering(str);
        cout << str << endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                char str[1000];
                infile.getline(str, 1000);
                deciphering(str);
                outfile << str << endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
void deciphering(char str[])
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'A' + (str[i] - 'A' + 26 - 3) % 26;
	}
}
   ─────────────────────────── */
