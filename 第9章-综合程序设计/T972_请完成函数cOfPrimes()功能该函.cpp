/*
 * 来源：C++题库 题号972
 * 章节：第9章-综合程序设计
 * 难度：中
 * 题序：第108题
 *
 * 题目：请完成函数cOfPrimes()功能，该函数原型如下：
 */

第108题 （0.1分）        题号:972        难度:中        第9章
/*------------------------------------------------
【程序设计】
--------------------------------------------------
题目：请完成函数cOfPrimes()功能，该函数原型如下：
      int cOfPrimes(int m, int n);
      对于给定的数正整m和n，函数cOfPrimes()返回m~n
      （包括m、n）中素数的个数。 
      例如，m=5，n=2，函数的返回值为3. 
提示：1不是素数，m和n的大小关系不确定。
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除"Program"和
      "End"两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();

int cOfPrimes(int m, int n);
/**********Program**********/


/**********  End  **********/

int main()
{   
    int m, n;
    cout << "测试请输入两个正整数：";
    cin >> m >> n;
    cout << "结果为："<< cOfPrimes(m, n) << endl;
//忽略阅读
    grading();
    system("pause");
//忽略阅读结束
    return 0;
}

//以下忽略阅读
void grading()
{   
    int m, n;
    ifstream inF("in.txt");
    ofstream outF("out.txt");
    for (int i=0;i<10;i++)
    {   
        inF>>m>>n;            
        outF<<cOfPrimes(m, n)<<endl;
    }    
}



/* ───────── 参考答案 ─────────
int cOfPrimes(int m, int n)
{   
	int c=0;
	if (m>n) 
		swap(m,n);
	for(int i=m; i<=n; i++)
	{   
		bool t=true;
		for (int j=2; j<i; j++)
		if(i % j == 0)  
			t = false;
		if (i<2) 
			t = false;
		if (t)
			c++;
	}
	return c;
}
   ─────────────────────────── */
