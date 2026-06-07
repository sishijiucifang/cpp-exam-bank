/*
 * 来源：C++题库 题号783
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第183题
 *
 * 题目：函数count统计以‘#’结束的字符串中每种数字字
 */

第183题 （0.1分）        题号:783        难度:中        第4章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：函数count统计以‘#’结束的字符串中每种数字字
      符的个数和其它字符的个数。参数str是以‘#’结
      束的字符串，统计结果存入数组c中，字符0-9的个
      数分别存入c[0]-c[9]中，其它字符个数存入c[10]
      中。如"123hgasf342240#"中数字0-9的个数分别为
      1,1,3,2,2,0,0,0,0,0个，其它字符个数为5。完
      成函数count的编写。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
void count(int c[], char *str);

/**********Program**********/



/**********  End  **********/

int main()
{
        int c[11],i;
        char s[1000];
        cout<<"请输入一个字符串（以#结尾）:";
        cin>>s;
        count(c,s);
        cout<<"字符0-9、其它字符个数分别为："<<endl;
        for(i=0;i<11;i++)
                cout<<c[i]<<" ";
        cout<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int c[11],i,j,n;
        char s[1000];
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<50;j++)
                {
                        infile>>n;
                        s[j]=n%14+'0'-2;
                }
                s[50]='#';
                count(c,s);
                for(j=0;j<11;j++)
                        outfile<<c[j]<<" ";
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
void count(int c[], char *str)
{
	for(int i=0;i<11;i++)
		c[i]=0;
	while(*str!='#')
	{
		if(*str>='0' && *str <='9')
			c[*str-'0']++;
		else
			c[10]++;
		str++;
	}
}
   ─────────────────────────── */
