/*
 * 来源：C++题库 题号7
 * 章节：第2章-流程控制
 * 难度：较易
 * 题序：第4题
 *
 * 题目：编写函数tofive，该函数将百分制成绩转换为五分
 */

第4题 （0.1分）        题号:7        难度:较易        第2章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目: 编写函数tofive，该函数将百分制成绩转换为五分
      制成绩并返回，[0,59]为1分，[60,69]为2分，[70,
      79]为3分，[80,89]为4分，[90,100]为5分，其它为
      0分。其中[80,89]表示大于等于80，小于等于89。
        
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/
#include<iostream.h>
#include<fstream.h>

void grading();
/**********Program**********/


/**********  End  **********/
int main()
{
        int mark;
        cout<<"请输入百分制成绩：";
        cin>>mark;
        cout<<"输出五分制成绩："<<tofive(mark)<<endl;
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
void grading()
{
        int num;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (int i=0;i<10;i++)
        {
                infile>>num;
                outfile<<tofive(num);
                infile>>num;
                outfile<<tofive(num)<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int tofive(int m)
{
	if (m>=0 && m<=59)
		return 1;
	if (m>=60 && m<=69)
		return 2;
	if (m>=70 && m<=79)
		return 3;
	if (m>=80 && m<=89)
		return 4;
	if (m>=90 && m<=100)
		return 5;
	return 0;
}
   ─────────────────────────── */
