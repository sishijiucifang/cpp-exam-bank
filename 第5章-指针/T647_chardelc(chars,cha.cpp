/*
 * 来源：C++题库 题号647
 * 章节：第5章-指针
 * 难度：易
 * 题序：第113题
 *
 * 题目：完成函数char *delc(char *s, char c);的编写，
 */

第113题 （0.1分）        题号:647        难度:易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数char *delc(char *s, char c);的编写，
      该函数去掉字符串s中的字符c，并将新得到的字符
      串返回。
        
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
char *delc(char *s, char c);
void grading();

char *delc(char *s, char c)
{
/**********Program**********/

 
/**********  End  **********/
}

int main()
{
        char s[100] = "asdfsasdfawea", c = 'a';
        cout<<delc(s,c)<<endl;
// [评分函数已省略]
        return 0;
}

//以下忽略阅读
void grading()
{
        int i;
        char s[100],c = 'a';
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                infile>>s>>c;
                outfile<<delc(s, c)<<endl;
        }
        infile.close();
        outfile.close();
}





/* ───────── 参考答案 ─────────
char *p;
	while (p = strchr(s,c))
	{
		strcpy(p,p+1);
	}
	return s;
   ─────────────────────────── */
