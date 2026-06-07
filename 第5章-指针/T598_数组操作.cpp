/*
 * 来源：C++题库 题号598
 * 章节：第5章-指针
 * 难度：易
 * 题序：第77题
 *
 * 题目：完成下面函数reverse的编写,该函数将数组a中的
 */

第77题 （0.1分）        题号:598        难度:易        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目： 完成下面函数reverse的编写,该函数将数组a中的
       所有元素逆序排列，参数len是数组a中元素的个
           数。

--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/

#include<fstream>
#include<iostream>
using namespace std;
void grading();

void reverse(int a[], int len)
{
/**********Program**********/


/**********  End  **********/        
}

int main()
{
        int a[6] = {2,4,3,7,5,8};
        reverse(a,6);
        for (int i=0;i<6;i++)
        {
                cout<<a[i]<<"  ";
        }
        cout<<endl;
// [评分函数已省略]
        return 0;
}
//以下忽略阅读
void grading()
{
    fstream infile, outfile;
    int a[10],i,k;
    infile.open("in.txt",ios::in);
    outfile.open("out.txt",ios::out);
    for(k=0; k<10; k++)
        {
                for (i=0;i<10;i++)
                infile>>a[i];
                reverse(a,10);
                for (i=0;i<10;i++)
                    outfile<<a[i];
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
for(int i=0;i<len/2;i++)
	{
		int t = a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=t;
	}
   ─────────────────────────── */
