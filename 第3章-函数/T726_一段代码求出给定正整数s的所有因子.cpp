/*
 * 来源：C++题库 题号726
 * 章节：第3章-函数
 * 难度：易
 * 题序：第173题
 *
 * 题目：请编写一段代码，求出给定正整数s的所有因子，
 */

第173题 （0.1分）        题号:726        难度:易        第3章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：请编写一段代码，求出给定正整数s的所有因子，
      并按从小到大的顺序存放在数组factor中。
例如：24的因子是1、2、3、4、6、8和12，因子个数是7。

--------------------------------------------------

注意：部分源程序给出如下。仅在标有"Program"和"End"
      的注释行之间补充代码，请勿改动其它内容。

------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;

void grading(int factor[],int n);

int main()
{ 
        int s=336;
        int *factor=new int[s/2];  //动态分配s/2个整数存储空间
        int count=0;
        
        /**********Program**********/        
        





        /**********  End  **********/

        for(int i=0;i<count;i++)
                cout<<factor[i]<<" ";
        cout << endl;

//忽略阅读
        grading(factor, count);
        delete []factor;
//忽略阅读结束

        return 0;
}

//以下忽略阅读
void grading(int factor[],int n)
{
        fstream myfile;
        myfile.open("out.txt",ios::out);
        if(!myfile)
        {
                cout<<"无法打开数据文件out.txt,需核查。"<<endl;
                return;
        }
        for(int i=0;i<n;i++)
                myfile << factor[i] << " ";
        myfile << endl;
        myfile.close();
}



/* ───────── 参考答案 ─────────
for(int j=1;j<=s/2;j++)
	{
		if(s%j==0)
		{
			factor[count]=j;
			count++;
		}
		
	}
   ─────────────────────────── */
