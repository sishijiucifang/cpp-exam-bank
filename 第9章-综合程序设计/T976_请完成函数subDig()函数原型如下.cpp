/*
 * 来源：C++题库 题号976
 * 章节：第9章-综合程序设计
 * 难度：中
 * 题序：第112题
 *
 * 题目：请完成函数subDig()，函数原型如下：
 */

第112题 （0.1分）        题号:976        难度:中        第9章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：请完成函数subDig()，函数原型如下：
      void subDig(char *s, int &sPos, int &d);
      s为给定字符串，其中一定包含多个子串"xyz"和刚好
      一个代表正整数的数字子串，函数计算子串"xyz"最后
      一次出现的位置并存入sPos，同时计算数字子串代表的
      正整数的2倍值并存入d（测试数据保证不会溢出）。
说明：子串出现位置是指子串第一次字符在原字符串中的下标值，
      注意下标值从0开始。
      例如，s为"abc123xyzabcdxyz"，则sPos为13，d为246。 
      提示，可以使用strlen函数求字符串的长度。
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

void subDig(char *s, int &sPos, int &d);
/**********Program**********/


/**********  End  **********/

int main()
{   
    char s[] = "abc123xyzabcdxyz";
    int p, d;
    
    subDig(s, p, d);
    cout << p << " " << d << endl;
//忽略阅读
    grading();
    system("pause");
//忽略阅读结束   
    return 0;
}

//以下忽略阅读 
void grading()
{   
    char    s[1000];
    int     p, d;

    ifstream inF("in.txt");
    ofstream outF("out.txt");
    for(int i=0; i<10; i++)
    {   
        inF>>s;
        subDig(s, p, d);
        outF<<p<<" "<<d<<endl;
    }
}



/* ───────── 参考答案 ─────────
void subDig(char *s, int &p, int &d)
{   
	d=0;
	for(p=strlen(s)-3; ; p--)
	 if(s[p]=='x' && s[p+1]=='y' && s[p+2]=='z') 
		break;
	for(int i=0; s[i]; i++)
	{   
		if(s[i]<'0' || s[i]>'9')    
			continue;
		while(s[i]>='0' && s[i]<='9')
		{   
			d = d*10 + s[i] - '0';
		 i++;
		}
		d *= 2;
		return;
	}
}
   ─────────────────────────── */
