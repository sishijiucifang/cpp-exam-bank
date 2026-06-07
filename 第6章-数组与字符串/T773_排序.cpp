/*
 * 来源：C++题库 题号773
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第75题
 *
 * 题目：给定程序MODI1.C 中函数fun 的功能是：利用插入排序法
 */

第75题 （0.1分）        题号:773        难度:中        第6章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：给定程序MODI1.C 中函数fun 的功能是：利用插入排序法
      对字符串中的字符按从小到大的顺序进行排序。插入法的
      基本算法是：先对字符串中的头两个元素进行排序。然后
      把第三个字符插入到前两个字符中，插入后前三个字符依然
      有序；再把第四个字符插入到前三个字符中……。待排序的字
      符串已在主函数中赋予。
      
      请改正程序中的错误，使它能得出正确结果。

注意：不要改动main 函数，不得增行或删行，也不得更改程序
      的结构。

-------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#define N 80
void NONO();

void insert(char *aa)
{ 
/**********Program**********/
        int i,j,n; char ch;
/**********found**********/
        n=strlen[aa];
        for(i=1; i<n ;i++) {
/**********found**********/
                c=aa[i];
                j=i-1;
/**********End**********/
                while ((j>=0) && (ch<aa[j])){ 
                        aa[j+1]=aa[j];
                        j--;
                }
                aa[j+1]=ch;
        }
}

main()
{ 
        char a[N]="QWERTYUIOPASDFGHJKLMNBVCXZ";
        printf ("The original string : %s\n", a);
        insert(a);
        printf("The string after sorting: %s\n",a);
        NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
        char s[N];
        FILE *rf, *wf ;
        int i ;
        rf = fopen("in.dat","r");
        wf = fopen("out.dat","w");
        for(i = 0 ; i < 10 ; i++) {
                fscanf(rf, "%s", s);
                insert(s);
                fprintf(wf, "%s\n", s);
        }
        fclose(rf);
        fclose(wf);
}


/* ───────── 参考答案 ─────────
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：给定程序MODI1.C 中函数fun 的功能是：利用插入排序法
      对字符串中的字符按从小到大的顺序进行排序。插入法的
      基本算法是：先对字符串中的头两个元素进行排序。然后
      把第三个字符插入到前两个字符中，插入后前三个字符依然
      有序；再把第四个字符插入到前三个字符中……。待排序的字
      符串已在主函数中赋予。
      
      请改正程序中的错误，使它能得出正确结果。

注意：不要改动main 函数，不得增行或删行，也不得更改程序
      的结构。

-------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#define N 80
void NONO();

void insert(char *aa)
{ 
	int i,j,n; char ch;
/**********found**********/
	n=strlen(aa);
	for(i=1; i<n ;i++) {
/**********found**********/
		ch=aa[i];
		j=i-1;
		while ((j>=0) && (ch<aa[j])){ 
			aa[j+1]=aa[j];
			j--;
		}
		aa[j+1]=ch;
	}
}

main()
{ 
	char a[N]="QWERTYUIOPASDFGHJKLMNBVCXZ";
	printf ("The original string : %s\n", a);
	insert(a);
	printf("The string after sorting: %s\n",a);
	NONO();
}

void NONO ()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
	char s[N];
	FILE *rf, *wf ;
	int i ;
	rf = fopen("in.dat","r");
	wf = fopen("out.dat","w");
	for(i = 0 ; i < 10 ; i++) {
		fscanf(rf, "%s", s);
		insert(s);
		fprintf(wf, "%s\n", s);
	}
	fclose(rf);
	fclose(wf);
}
   ─────────────────────────── */
