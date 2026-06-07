/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：已知，N名学生的成绩已在主函数中放入一个带头节点的链表结构中，
其中h指向链表的头节点。该程序要求实现函数fun，其功能为：求出平均分，
由函数值返回。例如，学生的成绩是：85，76，69，85，91，72，64，87，
则平均分应当是：78.625。


--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#define N 8

struct slist
{
        double s;
        struct slist *next;
};
typedef struct slist STREC;
void grading();

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

void outlist(STREC *h)
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

int main()
{
        double s[N]={85,76,69,85,91,72,64,87},ave;
        STREC *h;
        h=creat(s); outlist(h);
        ave=fun(h);
        printf("ave= %6.3f\n",ave);
        grading();
        return 0;
}

void grading()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
        FILE *in, *out ;
        int i,j ; double s[N],ave;
        STREC *h ;
        in = fopen("in.txt","r");
        out = fopen("out.txt","w");
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
