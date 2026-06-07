/*
 * 来源：C++题库 题号785
 * 章节：第5章-指针
 * 难度：中
 * 题序：第185题
 *
 * 题目：体重指数
 */

第185题 （0.1分）        题号:785        难度:中        第5章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：体重指数。男女标准体重有点不一样。
      男士标准体重=(身高cm-100)*0.9(KG)，
      女士标准体重=(身高cm-100)*0.9(KG)-2.5(KG)
      正常体重：标准体重加减10%（含等于）
      轻度胖瘦：标准体重加减(10%,20%]（含20%，不含10%）
      中度胖瘦：标准体重加减(20%,40%]（含40%，不含20%）
      重度胖瘦：标准体重加减超过40%（不含40%）
      函数f根据一个人的信息计算体重指数。其返回值为：
      0 - 正常体重；1 - 轻度胖；-1 - 轻度瘦；2 - 中
      度胖; -2 - 中度瘦；3 - 重度胖；-3 - 重度瘦。
      例如一个60kg的176cm的男性为轻度瘦，一个60kg的
      176cm的女性则为正常体重。
      完成函数f的编写。
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
struct Person {
        char name[10];
        int sex; //0-女；1-男
        double tops; //身高cm
        double weight; //体重kg
};
void grading();
int f(Person a);

/**********Program**********/


/**********  End  **********/

int main()
{
        char s[][10]={"重度瘦","中度瘦","轻度瘦","正常体重","轻度胖","中度胖","重度胖"};
        Person a;
        cout<<"请输入一个人的名字、性别(0-女，1-男)、身高、体重:";
        cin>>a.name>>a.sex>>a.tops>>a.weight;
        int k=f(a);
        cout<<s[k+3]<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        Person a;
        int sex=0;
        int i,j,n,m;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        sex=(sex+1)%2;
                        a.sex=sex;
                        a.name[0]=0;
                        infile>>m>>n;
                        a.tops=150+m%50;
                        a.weight=40+n%60;
                        outfile<<f(a)<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int f(Person a)
{
	double bz;
	if(a.sex)//男
		bz = (a.tops-100)*0.9;
	else
		bz = (a.tops-100)*0.9-2.5;
	if(a.weight>=bz)
	{
		if(bz*1.1>=a.weight)
			return 0;
		if(bz*1.2>=a.weight)
			return 1;
		if(bz*1.4>=a.weight)
			return 2;
		return 3;
	}
	else
	{
		if(bz*0.9<=a.weight)
			return 0;
		if(bz*0.8<=a.weight)
			return -1;
		if(bz*0.6<=a.weight)
			return -2;
		return -3;
	}
}
   ─────────────────────────── */
