/*
 * 来源：C++题库 题号758
 * 章节：第12章-继承与模板
 * 难度：较难
 * 题序：第60题
 *
 * 题目：编写战斗班类Team，一个战斗班最多能有10个战士，
 */

第60题 （0.1分）        题号:758        难度:较难        第12章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：编写战斗班类Team，一个战斗班最多能有10个战士，
      并满足程序要求的功能。即实现加入士兵、查找个
      头最高的士兵、清空战斗班等功能。

--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。
------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
int grading();

class Soldier {
public:
        Soldier(){}
        Soldier(int n,double h, double w, double p)
        {
                num = n;
                height = h;
                weight = w;
                power = p;
        }
public:
        int num;        //编号
        double height;  //身高
        double weight;  //体重
        double power;   //战斗力
};
/**********Program**********/


/**********  End  **********/        

int main ()
{
        Soldier  a(1,175,65,1000), b(2,189,78,1200),c(3,167,56,890);
        Team tm;   //创建战斗班tm
        tm.add(a);  //将士兵a加入tm
        tm.add(b);
        tm.add(c);
        Soldier  tall = tm.getTallest();  //获得战斗班中个头最高的士兵
        cout<<"("<<tall.num<<", "<<tall.height<<", "<<tall.weight<<", "<<tall.power<<")\n";
        tm.clear();  //清空战斗班中所有士兵
//忽略阅读
        grading();
//忽略阅读结束
        return 0;
}

//以下忽略阅读
int grading()
{
        int i,k=0,a;
        Soldier  sd[20];
        int n;
        double h,w,p;
        Team tm;
        
        ifstream ifile;
        ofstream ofile;
        ifile.open ("in.txt",ios::in);
        ofile.open ("out.txt",ios::out);

        for (i=0;i<20;i++)
        {
                ifile>>n>>h>>w>>p;
                sd[i] = Soldier(n,h,w,p);
        }
        for(i=0;i<8;i++)
        {
                tm.clear();
                for(a = k;a<k+5;a++)
                        tm.add(sd[a]);
                Soldier  tall = tm.getTallest();
                ofile<<"("<<tall.num<<", "<<tall.height<<", "<<tall.weight<<", "<<tall.power<<")\n";
                k++;
        }

        ifile.close();
        ofile.close();
        return 0;
}



/* ───────── 参考答案 ─────────
class Team {
public:
	Team() {num = 0;}
	void add(Soldier n)
	{
		if (num<10)
			sd[num++] = n;
	}
	Soldier getTallest()
	{
		int i, k=0;
		for(i=1;i<num;i++)
		{
			if(sd[i].height>sd[k].height)
				k = i;
		}
		return sd[k];
	}
	void clear() {num = 0;}
private:
	Soldier sd[10];
	int num;
};
   ─────────────────────────── */
