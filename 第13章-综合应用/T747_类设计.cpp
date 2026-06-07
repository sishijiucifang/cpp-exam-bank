/*
 * 来源：C++题库 题号747
 * 章节：第13章-综合应用
 * 难度：中
 * 题序：第49题
 *
 * 题目：编写整数集合类IntSet，完成主函数中使用该类所
 */

第49题 （0.1分）        题号:747        难度:中        第13章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写整数集合类IntSet，完成主函数中使用该类所
      要求的功能。
  
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
        IntSet mySet, tSet;        //创建空集合
        int m;
        for(m=10;m>0;m--)
        {
                mySet.add(m); //将m加入到集合mySet中，注意：集合中不包含相同的元素
        }
        tSet.add(1);
        tSet.add(20);
        mySet.add(tSet);  //将集合tSet中的元素合并到集合mySet中
        for(m=0;m<mySet.getSize();m++)   // getSize()获得集合元素个数
                cout<<mySet.getAt(m)<<" "; //getAt(m)获得集合中的第m个元素（从0开始），这里要求从小到大输出
        cout<<endl;
        mySet.clear();  //清空集合
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
        int i,k=8,m,a;
        IntSet mySet, tSet;
        
        ifstream ifile;
        ofstream ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);

        for (i=0;i<8;i++)
        {
                mySet.clear();
                tSet.clear();
                for (m = 0;m<k;m++)
                {
                        ifile>>a;
                        mySet.add(a);
                        ifile>>a;
                        tSet.add(a);
                }
                mySet.add(tSet);
                for(m=0;m<mySet.getSize();m++)
                        ofile<<mySet.getAt(m)<<" ";
                ofile<<endl;
                k++;
        }

        ifile.close();
        ofile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
class IntSet {
public:
	IntSet()
	{
		num = 0;
	}
	bool isIn(int n)
	{
		int i;
		for(i=0;i<num;i++)
			if(a[i] == n)
				return true;
		return false;
	}
	void add(int n)
	{
		if(isIn(n))
			return;
		int i = num-1;
		while(i>=0 && a[i]>n)
		{
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = n;
		num++;
	}
	void add(IntSet & n)
	{
		int i;
		for(i=0;i<n.num;i++)
		{
			this->add(n.getAt(i));
		}
	}
	int getAt(int n)
	{
		if(n>=0 && n<this->num)
			return a[n];
		return 0;
	}
	int getSize()
	{
		return num;
	}
	void clear()
	{
		num = 0;
	}
private:
	int a[1000];
	int num;
};
   ─────────────────────────── */
