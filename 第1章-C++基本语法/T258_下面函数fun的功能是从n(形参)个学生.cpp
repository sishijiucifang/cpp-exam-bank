/*
 * 来源：C++题库 题号258
 * 章节：第1章-C++基本语法
 * 难度：较易
 * 题序：第24题
 *
 * 题目：下面函数fun的功能是，从n(形参)个学生的成绩中
 */

第24题 （0.1分）        题号:258        难度:较易        第1章
/*------------------------------------------------
【程序改错题】
--------------------------------------------------

题目：下面函数fun的功能是，从n(形参)个学生的成绩中
      统计出低于平均分的学生人数，次人数作为返回值
      返回，平均分存放在形参aver指向的存储单元中。
      例如，若输入8个学生的成绩：80.5,60,72,90.5,
      98,51.5,88,64，则低于平均分的人数为4，平均分
      为75.5625
      请改正程序中指定部位的错误，使程序完成正确的功能。

--------------------------------------------------
注意：不要改动主函数main和其它函数中的任何内容，仅
      需要修改指定有错误的两行程序。
--------------------------------------------------*/

#include <stdio.h>
void grading();
#define N 20
int fun (float *s, int n, float *aver)
{
        float ave, t = 0.0 ;
        int count = 0, k, i ;
/**********Program**********/
        for (k = 0 ; k < n ; k++)
                t = s[k] ;                //此行有错
        ave =  t / n ;
        for (i = 0 ; i < n ; i++)
                if (s[i] < ave) count++ ;
        *aver = Ave ;        //此行有错
        return count ;
/**********  End  **********/
}
int main()
{
        float s[30], aver ;
        int m, i ;
        printf ("\nPlease enter m: ");
        scanf ("%d", &m);
        printf ("\nPlease enter %d mark :\n ", m);
        for(i = 0 ; i < m ; i++)
                scanf ("%f", s + i);
        printf("\nThe number of students : %d \n" , fun (s, m, &aver));
        printf("Ave = %f\n", aver);
        grading();
        return 0;
}

void grading()
{
        int i, j, k, m;
        float s[300], aver ;
        FILE *infile,*outfile;
        infile = fopen("in.txt","r");
        outfile = fopen("out.txt","w");
        for(i=0;i<300;i++)
        {
                fscanf(infile, "%d", &m);
                s[i]=m%100+1;
        }
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        k = fun (s+i*10+j, 30, &aver);
                        fprintf(outfile, "%d %.1f ",k,aver);
                }
                fprintf(outfile, "\n");
        }
}



/* ───────── 参考答案 ─────────
t += s[k] ;		
	*aver = ave ;
   ─────────────────────────── */
