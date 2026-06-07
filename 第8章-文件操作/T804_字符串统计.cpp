/*
 * 来源：C++题库 题号804
 * 章节：第8章-文件操作
 * 难度：中
 * 题序：第86题
 *
 * 题目：写一个函数统计字符串中，大写字母,小写字母
 */

第86题 （0.1分）        题号:804        难度:中        第8章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：写一个函数统计字符串中，大写字母,小写字母
      ,数字的个数,并分别保存在全局变量Supper,
      Low,Digit中。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在注释形式标识Program和
      End之间填入所编写的若干语句。

--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

int Supper=0,Low=0,Digit=0;        

void Count(char input[])
{
/**********Program**********/






/**********  End  **********/
}

void wwff();
int main()
{
        Count("asas 998234 WERe *** ");

        cout<<Supper<<endl;
        cout<<Low<<endl;
        cout<<Digit<<endl;
       
//忽略阅读
  wwff();
//忽略阅读结束

        return 0;
}

//忽略阅读
void wwff()
{
   ifstream rf("in.txt",ios::in);
   ofstream wf("out.txt",ios::out);   
   char input[300];
   int i;
   for(i=0;i<10;i++)
  {
   rf>>input;
   Supper=0,Low=0,Digit=0;        
   
   Count(input);
   wf<<Supper<<' '<<Low<<' '<<Digit<<' ';
   wf<<endl;
   }
   rf.close();
   wf.close();
}


/* ───────── 参考答案 ─────────
int i=0;
    while(input[i]!='\0')
	{
		if(input[i]>='A'&&input[i]<='Z')
			Supper++;
        if(input[i]>='a'&&input[i]<='z')
			Low++;
        if(input[i]>='0'&&input[i]<='9')
			Digit++;
		i++;
	}
   ─────────────────────────── */
