/*
 * 来源：C++题库 题号163
 * 章节：第5章-指针
 * 难度：较易
 * 题序：第14题
 *
 * 题目：下面函数fun的功能是，对N名学生的学习成绩，按从
 */

第14题 （0.1分）        题号:163        难度:较易        第5章
/*------------------------------------------------
【程序改错题】
--------------------------------------------------

题目：下面函数fun的功能是，对N名学生的学习成绩，按从
      高到低的顺序找出前m（m<=10）名学生来，并将这
      些学生的数据存储在一块动态分配的连续存储区中，
      此存储区的首地址作为函数返回值返回。
      请改正程序中指定部位的错误，使程序完成正确的功能。

--------------------------------------------------
注意：不要改动主函数main和其它函数中的任何内容，仅
      需要修改指定有错误的两行程序。
--------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void grading();
#define N 10
struct STU{
        char num[10];
        int s;
};
STU *fun(STU a[], int m)
{
        STU b[N], *t;
        int i,j,k;
/**********Program**********/
        t=(STU *)calloc(sizeof(STU),m)        //此行有错
        for(i=0; i<N; i++) b[i]=a[i];
        for(k=0; k<m; k++)
        {
                for(i=j=0; i<N; i++)
                        if(b[i].s > b[j].s) j=i;
                t(k)=b(j);                //此行有错
                b[j].s=0;
/**********  End  **********/
        }
        return t;
}
void outresult(STU a[], FILE *pf)
{
        int i;
        for(i=0; i<N; i++)
                fprintf(pf,"No = %s Mark = %d\n", a[i].num,a[i].s);
        fprintf(pf,"\n\n");
}
int main()
{
        STU a[N]={ {"A01",81},{"A02",89},{"A03",66}, {"A04",87},{"A05",77},{"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} };
        STU *pOrder;
        int i, m;
        printf("***** The Original data *****\n");
        outresult(a, stdout);
        printf("\nGive the number of the students who have better score: ");
        scanf("%d",&m);
        while(m>10)
        {
                printf("\nGive the number of the students who have better score: ");
                scanf("%d",&m);
        }
        pOrder=fun(a,m);
        printf("***** THE RESULT *****\n");
        printf("The top :\n");
        for(i=0; i<m; i++)
                printf(" %s  %d\n",pOrder[i].num , pOrder[i].s);
        free(pOrder);
        grading();
        return 0;
}
void grading()
{
        STU a[N]={ {"A01",81},{"A02",89},{"A03",66}, {"A04",87},{"A05",77},{"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71} };
        STU *pOrder;
        int i, j, k, m;
        FILE *infile,*outfile;
        infile = fopen("in.txt","r");
        outfile = fopen("out.txt","w");
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        for(k=0;k<N;k++)
                        {
                                fscanf(infile, "%d", &m);
                                a[k].s=m%100+1;
                        }
                        pOrder=fun(a,5);
                        fprintf(outfile, "%d ",pOrder[0].s);
                }
                fprintf(outfile, "\n");
        }
}



/* ───────── 参考答案 ─────────
t=(STU *)malloc(sizeof(STU)*m);
		t[k]=b[j];
   ─────────────────────────── */
