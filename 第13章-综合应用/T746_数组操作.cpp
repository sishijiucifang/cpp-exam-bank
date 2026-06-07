/*
 * 来源：C++题库 题号746
 * 章节：第13章-综合应用
 * 难度：中
 * 题序：第48题
 *
 * 题目：编写数组类myArray，完成主函数中使用该类所要求
 */

第48题 （0.1分）        题号:746        难度:中        第13章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写数组类myArray，完成主函数中使用该类所要求
      的功能。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

/**********Program**********/


/**********  End  **********/        

int main ()
{
        myArray a(10); //声明包含10个整型数组元素的数组a
        for(int i=0;i<10;i++)  //给数组的元素赋值
                a[i] = i+1;
        for(int i=0;i<10;i++)  //输出数组元素的值
                cout<<a[i]<<" ";
        cout<<endl;
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
        int i,k=8,m;

        ifstream ifile;
        ofstream ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);

        for (i=0;i<8;i++)
        {
                myArray a(k);
                for (m = 0;m<k;m++)
                        ifile>>a[m];
                for (m = 1;m<k;m++)
                        ofile<<a[m]<<" ";
                ofile<<endl;
                k++;
        }

        ifile.close();
        ofile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
class myArray {
public:
	myArray(int n) 
	{
		size = n;
		a = new int[n];
	}
	~myArray()
	{
		delete [] a;
	}
	int & operator[](int n)
	{
		if(n>=0 && n<size)
			return a[n];
//		cout<<"越界"<<endl;
		static int i;
		return i;
	}
private:
	int *a;
	int size;
};
   ─────────────────────────── */
