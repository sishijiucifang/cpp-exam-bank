/*
 * 来源：C++题库 题号776
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第78题
 *
 * 题目：给定程序的功能是调用fun 函数建立班级通讯录
 */

第78题 （0.1分）        题号:776        难度:中        第6章
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：给定程序的功能是调用fun 函数建立班级通讯录。通讯
      录中记录每位学生的编号、姓名和电话号码。班级的人数和
      学生的信息从键盘读入，每个人的信息作为一个数据块写到
      名为myfile5.dat 的二进制文件中。

      请在程序的下划线处填入正确的内容并把下划线删除，
      使程序得出正确的结果。

注意：源程序存放在考生文件夹下的BLANK1.C中。
      不得增行或删行，也不得更改程序的结构。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
-------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct
{ 
        int num;
        char name[10];
        char tel[10];
}STYPE;
void NONO();

/**********Program**********/
/**********found**********/
int fun(__1__ std)
{
/**********found**********/
        __2__; 
        int i;
        if((fp=fopen("myfile5.dat", "wb"))==NULL)
                return(0);
        printf("\nOutput data to file!\n");
        for(i=0; i<N; i++)
/**********found**********/
        fwrite(&std[i], sizeof(STYPE),1, __3__);
        fclose(fp);
        return (1);
/**********End**********/
}

main()
{
        STYPE s[10]={ {1,"aaaaa","111111"}, {1,"bbbbb","222222"},
                      {1,"ccccc", "333333"},{1,"ddddd","444444"}, {1,"eeeee", "555555"}};
        int k;
        k=fun(s);
        if (k==1) { printf("Succeed!"); NONO();}
        else
                printf("Fail!");
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
        FILE *fp,*r; int i;
        STYPE s[10];
        if((fp=fopen("myfile5.dat", "rb"))==NULL)
        { printf("Fail !!\n"); exit(0);}
        r=fopen("out.dat", "w");
        printf("\nRead file and output to screen :\n");
        printf("\n num name tel\n");
        for(i=0; i<N; i++){ 
                fread(&s[i],sizeof(STYPE),1, fp);
                printf("%6d %s %s\n",s[i].num, s[i].name,s[i].tel);
                fprintf(r,"%6d %s %s\n",s[i].num, s[i].name,s[i].tel);
        }
        fclose(fp);
        fclose(r);
}



/* ───────── 参考答案 ─────────
/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：给定程序的功能是调用fun 函数建立班级通讯录。通讯
      录中记录每位学生的编号、姓名和电话号码。班级的人数和
      学生的信息从键盘读入，每个人的信息作为一个数据块写到
      名为myfile5.dat 的二进制文件中。

      请在程序的下划线处填入正确的内容并把下划线删除，
	  使程序得出正确的结果。

注意：源程序存放在考生文件夹下的BLANK1.C中。
      不得增行或删行，也不得更改程序的结构。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
-------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct
{ 
	int num;
	char name[10];
	char tel[10];
}STYPE;
void NONO();

/**********found**********/
int fun(STYPE *std)
{
/**********found**********/
	FILE *fp; 
        int i;
	if((fp=fopen("myfile5.dat", "wb"))==NULL)
		return(0);
	printf("\nOutput data to file!\n");
	for(i=0; i<N; i++)
/**********found**********/
	fwrite(&std[i], sizeof(STYPE),1, fp);
	fclose(fp);
	return (1);
}

main()
{
	STYPE s[10]={	{1,"aaaaa","111111"}, {1,"bbbbb","222222"},
					{1,"ccccc", "333333"},{1,"ddddd","444444"}, {1,"eeeee", "555555"}};
	int k;
	k=fun(s);
	if (k==1) { printf("Succeed!"); NONO();}
	else
		printf("Fail!");
}

void NONO()
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
	FILE *fp; int i;
	STYPE s[10];
	if((fp=fopen("myfile5.dat", "rb"))==NULL)
	{ printf("Fail !!\n"); exit(0);}
	printf("\nRead file and output to screen :\n");
	printf("\n num name tel\n");
	for(i=0; i<N; i++){ 
		fread(&s[i],sizeof(STYPE),1, fp);
		printf("%6d %s %s\n",s[i].num, s[i].name,s[i].tel);
	}
	fclose(fp);
}
   ─────────────────────────── */
