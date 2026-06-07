/*
 * 来源：C++题库 题号680
 * 章节：第4章-数组与综合设计
 * 难度：中
 * 题序：第140题
 *
 * 题目：函数void encrypt(char * info);将info指向的字符串译成密码，密码规律是：
 */

第140题 （0.1分）        题号:680        难度:中        第4章
/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：函数void encrypt(char * info);将info指向的字符串译成密码，密码规律是：
用原来的字母后面第4个字母代替原来的字母。例如，字母"A"后面第4个字母是"E"，用"E"
代替"A"。因此，"China"应译为"Glmre"，若该字母后面的第4个字母超过Z，则回到"A"。
 例如 "Z"后面的第4个字母是"D"。 完成函数encrypt的编写。

------------------------------------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;
void wwff();
void encrpt(char *info)
{
/**********Program**********/


/**********  End  **********/
}

int main()
{
        char s[10]="avwxyz";
        encrpt(s);
        cout<<s;
        //忽略阅读
        wwff();
        //忽略阅读结束
        return 0;
}
//忽略阅读wff()
void wwff()
{
        int i;
        ifstream inf("in.txt",ios::in);
        ofstream outf("out.txt",ios::out);
        char s[1000];
        for (i=0;i<10;i++)
        {
                inf>>s;
                encrpt(s);
                outf<<s<<endl;
        }
        inf.close();
        outf.close();
}   
 


/* ───────── 参考答案 ─────────
do{
		if((*info>='a' && *info<='v') || (*info>='A' && *info<='V'))
			*info+=4;
		else *info-=22;
		info++;
	}while(*info);
   ─────────────────────────── */
