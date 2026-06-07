/*
 * 来源：C++题库 题号757
 * 章节：第12章-继承与模板
 * 难度：较难
 * 题序：第59题
 *
 * 题目：编写模板delEven，将不同类型数组的序号为偶数
 */

第59题 （0.1分）        题号:757        难度:较难        第12章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写模板delEven，将不同类型数组的序号为偶数
      的元素删除，空出来的地方在后面补0（如果0不能
      进行赋值，则进行类型转换）。如数组中包含0-9
      十个元素，去偶后，该数组的元素变为1,3,5,7,9,
      0,0,0,0,0。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

template <class SomeType>
/**********Program**********/




/**********  End  **********/        

int main ()
{
        int i;
        char a[]="Hunan University";
        int b[11] = {1,2,3,4,5,6,7,8,9,10,11};
        delEven(a,strlen(a));
        delEven(b,11);
        cout<<a<<endl;
        for(i=0;i<11;i++)
                cout<<b[i]<<" ";
        cout<<endl;
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
        int i,k=8,m,a;
        double da[100];
        char ca[100];
        int ia[100];
        
        ifstream ifile;
        ofstream ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);

        for (i=0;i<3;i++)
        {
                for (m = 0;m<k;m++)
                {
                        ifile>>a;
                        da[m] = (double)a;
                        ifile>>a;
                        ca[m] = (char)('a'+a%26);
                        ifile>>a;
                        ia[m] = (int)a;
                }
                delEven(da,k);
                delEven(ca,k);
                delEven(ia,k);
                for(m=0;m<k;m++)
                        ofile<<da[m]<<" ";
                ofile<<endl;
                for(m=0;m<k;m++)
                        ofile<<ca[m]<<" ";
                ofile<<endl;
                for(m=0;m<k;m++)
                        ofile<<ia[m]<<" ";
                ofile<<endl;
                k++;
        }

        ifile.close();
        ofile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
void delEven(SomeType a[], int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		if (i<n/2)
			a[i] = a[2*i+1];
		else
			a[i] = (SomeType)0;
	}
}
   ─────────────────────────── */
