/*
 * 来源：C++题库 题号770
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第72题
 *
 * 题目：请编一个函数void fun(int tt[M][N]，int pp[N])，tt 指向
 */

第72题 （0.1分）        题号:770        难度:中        第6章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：请编一个函数void fun(int tt[M][N]，int pp[N])，tt 指向
      一个M 行N 列的二维数组，求出二维数组每列中最小元素，
      并依次放入pp 所指一维数组中。二维数组中的数已在主函
      数中赋予。

注意：部分源程序存在文件PROG1.C 中。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
-------------------------------------------------------*/

#include <stdio.h>
void NONO ();

#define M 3
#define N 4
void fun (int tt[M][N], int pp[N])
{

/**********Program**********/





/**********  End  **********/

}
main()
{ 
        int t[M][N]={{22,45, 56,30},{19,33, 45,38},{20, 22,66,40}};
        int p[N], i, j, k;
        printf("The original data is:\n");
        for(i=0; i<M; i++){
                for(j=0; j<N; j++)
                        printf ("%6d", t[i][j]);
                printf("\n");
        }
        fun (t, p);
        printf("\nThe result is:\n");
        for (k = 0; k < N; k++) 
                printf(" %4d ", p[k]);
        printf("\n");
        NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
        int i, j, k, m, t[M][N], p[N] ;
        FILE *rf, *wf ;
        rf = fopen("in.dat","r");
        wf = fopen("out.dat","w");
        for(m = 0 ; m < 10 ; m++) {
                for(i=0; i<M; i++){
                        for(j=0; j<N; j++)
                                fscanf (rf, "%6d", &t[i][j]);
                }
                fun (t, p);
                for (k = 0; k < N; k++) fprintf(wf, " %4d ", p[k]);
                fprintf(wf, "\n");
        }
        fclose(rf);
        fclose(wf);
}


/* ───────── 参考答案 ─────────
int i,j, min, k;
	for(i=0; i<N; i++){
		min=tt[0][i]; k=0;
		for(j=1; j<M; j++)
			if(min>tt[j][i]){
				min=tt[j][i];
				k=j;
			}
		pp[i]=tt[k][i];
	}
   ─────────────────────────── */
