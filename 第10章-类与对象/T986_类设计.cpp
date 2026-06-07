/*
 * 来源：C++题库 题号986
 * 章节：第10章-类与对象
 * 难度：中
 * 题序：第118题
 *
 * 题目：编写圆柱体类Column，该类包含两个double类型
 */

第118题 （0.1分）        题号:986        难度:中        第10章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

  题目：编写圆柱体类Column，该类包含两个double类型
  的私有成员r和h，分别表示圆柱体底面积的半径和圆柱
  体的高,同时该类里面还包括三个函数：
  1) 构造函数Column(double _r, double _h)，用_r和_h
     分别初始化Column的r和h;
  2) 计算体积函数double Volume()，该函数返回圆柱体
     的体积π*r*r*h
  3) 计算表面积函数double Surface()，该函数返回圆柱
     体的表面积2*π*r*r+2*π*r*h

  例如，若圆柱体的成员变量r和h分别为3和4，则其体积
  为113.04，其表面积为131.88
  
--------------------------------------------------
        注意：部分源程序给出如下。请勿改动主函数main和其它
        函数中的任何内容，不要修改或删除“program”和
        “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>

using namespace std;

#define pi 3.14

void grading();

class Column
{
/**********Program**********/


/**********  End  **********/
};

int main()
{
        Column column(3, 4);
        cout << "圆柱体的体积是：" << column.Volume() << endl;
        cout << "圆柱体的表面积是：" << column.Surface() << endl;

        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i,j,n,k;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (i=0;i<10;i++)
        {
                int r, h;
                infile >> r >> h;
                r = r % 30;
                h = h % 20;
                Column column(r, h);
                outfile << column.Volume() << " " << column.Surface() << endl;
        }
        infile.close();
        outfile.close();
}




/* ───────── 参考答案 ─────────
private:
	double r;
	double h;

public:
	Column(double _r, double _h)
	{
		r = _r;
		h = _h;
	}

	double Volume()
	{
		return pi * r * r * h;
	}

	double Surface()
	{
		return 2 * pi * r * r + 2 * pi * r * h;
	}
   ─────────────────────────── */
