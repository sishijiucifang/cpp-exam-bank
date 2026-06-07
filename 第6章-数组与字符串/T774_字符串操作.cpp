/*
 * 来源：C++题库 题号774
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第76题
 *
 * 题目：给定程序MODI1.C 中函数fun 的功能是：从N 个字符
 */

第76题 （0.1分）        题号:774        难度:中        第6章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：给定程序MODI1.C 中函数fun 的功能是：从N 个字符
      串中找出最长的那个串，并将其地址作为函数值返回。各字
      符串在主函数中输入，并放入一个字符串数组中。
      
      请改正程序中的错误，使它能得出正确结果。

注意：不要改动main 函数，不得增行或删行，也不得更改程序
      的结构。

-------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#define N 5
#define M 81
void NONO();
/**********Program**********/
/**********found**********/
fun(char (*sq)[M])
{        int i; char *sp;
        sp=sq[0];
        for(i=0;i<N;i++)
                if(strlen(sp)<strlen(sq[i])) 
                        sp=sq[i] ;
/**********found**********/
        return sq;
/**********End**********/
}

main()
{ 
        char str[N][M], *longest; int i;
        printf("Enter %d lines :\n",N);
        for(i=0; i<N; i++) gets(str[i]);
        printf("\nThe N string :\n",N);
        for(i=0; i<N; i++) puts(str[i]); 
        longest=fun(str);
        printf("\nThe longest string: \n"); puts(longest);
        NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
        char str[N][M], *longest;
        FILE *rf, *wf ;
        int i, j ;
        rf = fopen("in.dat","r");
        wf = fopen("out.dat","w");
        for(i = 0 ; i < 10 ; i++) {
                for (j = 0; j < N; j++)
                        fscanf(rf, "%s", str[j]);
                longest = fun(str);
                fprintf(wf, "%s\n", longest);
        }
        fclose(rf);
        fclose(wf);
}


/* ───────── 参考答案 ─────────
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：给定程序MODI1.C 中函数fun 的功能是：从N 个字符
      串中找出最长的那个串，并将其地址作为函数值返回。各字
	  符串在主函数中输入，并放入一个字符串数组中。
      
      请改正程序中的错误，使它能得出正确结果。

注意：不要改动main 函数，不得增行或删行，也不得更改程序
      的结构。

-------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#define N 5
#define M 81
void NONO();

/**********found**********/
char * fun(char (*sq)[M])
{	int i; char *sp;
	sp=sq[0];
	for(i=0;i<N;i++)
		if(strlen(sp)<strlen(sq[i])) 
			sp=sq[i] ;
/**********found**********/
	return sp;
}

main()
{ 
	char str[N][M], *longest; int i;
	printf("Enter %d lines :\n",N);
	for(i=0; i<N; i++) gets(str[i]);
	printf("\nThe N string :\n",N);
	for(i=0; i<N; i++) puts(str[i]); 
	longest=fun(str);
	printf("\nThe longest string: \n"); puts(longest);
	NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
	char str[N][M], *longest;
	FILE *rf, *wf ;
	int i, j ;
	rf = fopen("in.dat","r");
	wf = fopen("out.dat","w");
	for(i = 0 ; i < 10 ; i++) {
		for (j = 0; j < N; j++)
			fscanf(rf, "%s", str[j]);
		longest = fun(str);
		fprintf(wf, "%s\n", longest);
	}
	fclose(rf);
	fclose(wf);
}
   ─────────────────────────── */
