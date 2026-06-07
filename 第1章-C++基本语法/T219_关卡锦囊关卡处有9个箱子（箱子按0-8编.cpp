/*
 * 来源：C++题库 题号219
 * 章节：第1章-C++基本语法
 * 难度：易
 * 题序：第17题
 *
 * 题目：关卡锦囊：关卡处有9个箱子（箱子按0-8编号），获
 */

第17题 （0.1分）        题号:219        难度:易        第1章
/*--------------------------------------------------
【程序设计】
----------------------------------------------------

题目：关卡锦囊：关卡处有9个箱子（箱子按0-8编号），获
      取一正整数n（0<=n<=255）, 需将数值n破译才可打开
      箱子取得锦囊。破译方法如下：将n转化为二进制，其
      中1的数量即为可打开的箱子编号。函数translate计
      算正整数n转化为二进制后所包含的1的个数。

---------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
---------------------------------------------------*/
#include <iostream>
#include <fstream>
using namespace std;

void grading();
int translate(unsigned int n);
int translate(unsigned int n)
{
/**********Program**********/


                      
/**********  End  **********/
}
int main()
{
        int count,n;
        cout<<"请输入一个正整数[0,255]:";
        cin>>n;
        while(n>255 || n<0)
        {
                cout<<"请输入一个正整数[0,255]:";
                cin>>n;
        }
        count=translate(n);
        cout<<n<<"可以打开第"<<count<<"个箱子。"<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        fstream infile,outfile;
        int i,j,n,count;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>n;
                        n=n%256;
                        count = translate(n);
                        outfile<<count<<' ';
        }
                outfile<<endl;
        }
        infile.close();
        outfile.close();             
}




/* ───────── 参考答案 ─────────
int b,count =0;
	while(n>0)
	{
		b=n%2;
		if(b==1)
			count++;
		n=n/2;
	}
	return count;
   ─────────────────────────── */
