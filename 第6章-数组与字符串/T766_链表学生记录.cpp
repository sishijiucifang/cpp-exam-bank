/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：N名学生的成绩已在主函数中放入一个带头节点的链表结构中，
      h指向链表的头节点。
      请编写函数fun，它的功能是：求出平均分，由函数值返回。

例如，若学生的成绩是：85，76，69，85，91，72，64，87，
      则平均分应当是：78.625。
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
-------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define N 8

struct slist
{
        double s;
        struct slist *next;
};
typedef struct slist STREC;
void NONO ();

double fun(STREC *h)
{

/**********Program**********/



/**********  End  **********/

}

STREC * creat(double *s)
{
        STREC *h,*p,*q; int i=0;
        h=p=(STREC*)malloc(sizeof(STREC));p->s=0;
        while(i<N)
        {
                q=(STREC*)malloc(sizeof(STREC));
                q->s=s[i]; i++; p->next=q; p=q;
        }
        p->next=0;
        return h;
}

outlist(STREC *h)
{
        STREC *p;
        p=h->next; printf("head");
        do
        {
                printf("->%4.1f",p->s);
                p=p->next;
        }
        while(p!=0);
        printf("\n\n");
}

main()
{
        double s[N]={85,76,69,85,91,72,64,87},ave;
        STREC *h;
        h=creat(s); outlist(h);
        ave=fun(h);
        printf("ave= %6.3f\n",ave);
        NONO();
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
        FILE *in, *out ;
        int i,j ; double s[N],ave;
        STREC *h ;
        in = fopen("in.dat","r");
        out = fopen("out.dat","w");
        for(i = 0 ; i < 10 ; i++) {
                for(j=0 ; j < N; j++)
                        fscanf(in, "%lf,", &s[j]);
                h=creat(s);
                ave=fun(h);
                fprintf(out, "%6.3lf\n", ave) ;
        }
        fclose(in);
        fclose(out);
}
