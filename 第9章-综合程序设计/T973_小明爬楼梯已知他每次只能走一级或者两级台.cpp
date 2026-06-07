/*
 * 来源：C++题库 题号973
 * 章节：第9章-综合程序设计
 * 难度：中
 * 题序：第109题
 *
 * 题目：小明爬楼梯，已知他每次只能走一级或者两级台阶，
 */

第109题 （0.1分）        题号:973        难度:中        第9章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：小明爬楼梯，已知他每次只能走一级或者两级台阶，
      要求实现递归函数waysOfClimbing(int n)，功能为：
      输入楼梯的级数n，输出一共有多少种不同的走法数。
      例：假设楼梯一共有3级，他可以每次都走一级，即1 1 1，
      或者第一次走一级，第二次走两级，即1 2，也可以
      第一次走两级，第二次走一级，即2 1，一共3种方法。
提示：小明的最后一步只有2种走法，走一级或走两级。 
    
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"Program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

void grading();

int waysOfClimbing(int n)
{
/**********Program**********/
    
    
/**********  End  **********/
}


int main()
{
    int n = 3;
    int numOfWays = waysOfClimbing(n);
    cout << "楼梯级数为" << n << "时一共有" << numOfWays << "种不同走法." << endl;
//忽略阅读
    grading();
    system("pause");
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{
    fstream infile, outfile;
    int n;
    infile.open("in.txt",ios::in);
    outfile.open("out.txt",ios::out);
    for (int i = 0; i < 10; i++) 
    {
        infile >> n;
        outfile << waysOfClimbing(n) << endl;
    }
    infile.close();
    outfile.close();
}



/* ───────── 参考答案 ─────────
if (n == 1) 
		return 1;
	else if (n == 2) 
		return 2;
	else
		return waysOfClimbing(n-1) + waysOfClimbing(n-2);
   ─────────────────────────── */
