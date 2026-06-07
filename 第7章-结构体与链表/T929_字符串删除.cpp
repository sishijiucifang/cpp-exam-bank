/*
 * 来源：C++题库 题号929
 * 章节：第7章-结构体与链表
 * 难度：中
 * 题序：第103题
 *
 * 题目：该程序要求实现函数fun，其功能为只删除字符串前导和尾部的*号，
 */

第103题 （0.1分）        题号:929        难度:中        第7章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：该程序要求实现函数fun，其功能为只删除字符串前导和尾部的*号，
串中字母之间的*号都不删除，其中形参n给出了字符串的长度，
形参h 给出了字符串中前导*号的个数，形参e给出了字符串中最后*号的个数。
如字符串中的内容为：****A*BC*DEF*G*******，删除后，字符串中的内容应当
是A*BC*DEF*G。完成该函数的编写。
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <stdio.h>
void grading();

void fun(char *a, int n,int h,int e)
{

/**********Program**********/






/**********  End  **********/

}
main()
{ 
        /*
        char s[81],*t,*f; 
        int m=0, tn=0, fn=0;
        printf("Enter a string:\n");
        gets(s);
        t=f=s;
        while(*t){t++;m++;}
        t--;
        while(*t=='*'){t--;tn++;}
        while(*f=='*'){f++;fn++;}
        fun(s, m, fn, tn);
        printf("The string after deleted:\n");
        puts(s);
        */
        grading();
}

void grading()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
        FILE *in, *out ;
        int i ; char s[81], *t, *f ;
        int m=0, tn=0, fn=0;
        in = fopen("in.txt","r");
        out = fopen("out.txt","w");
        for(i = 0 ; i < 10 ; i++) {
                fscanf(in, "%s", s);
                t=f=s;
                m=0; tn=0; fn=0;
                while(*t){t++;m++;}
                t--;
                while(*t=='*'){t--;tn++;}
                while(*f=='*'){f++;fn++;}
                fun(s, m, fn, tn);
                fprintf(out, "%s\n", s);
        }
        fclose(in);
        fclose(out);
}




/* ───────── 参考答案 ─────────
char *p=a;
	int j=0,len=0;
	while(*p){p++; len++;}
	while(j<len-h-e)
	{
		a[j]=a[h+j];
		j++;
	}
	a[j]=0;
   ─────────────────────────── */
