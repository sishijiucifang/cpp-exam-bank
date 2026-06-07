/*
 * 来源：C++题库 题号743
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第45题
 *
 * 题目：完成函数bool isjishu(int n)的编写，该函数判断
 */

第45题 （0.1分）        题号:743        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：完成函数bool isjishu(int n)的编写，该函数判断
      n是否是奇数且是3，5，9的倍数，是则返回true，否
      则返回false。

       --------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
          请勿改动主函数main和其它任何已有内容。
------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>
void writeinfile( );
/**********Program**********/


/**********  End  **********/
int main(){
    int n;
    cout<<"输入一个数：";
    cin>>n;
    if(isjishu(n))
        cout<<n<<"是奇数且是3,5, 9的倍数"<<endl;
    else
        cout<<n<<"不是奇数或不是3,5, 9的倍数"<<endl;
    writeinfile();
    return 0;
}
 
void writeinfile( )
{
    ifstream inFile("in.txt", ios::in | ios::nocreate);
    if(!inFile)
    {
        cerr<<"无法打开数据文件in.txt。需要核查！"<<endl;
        return ;
    }
    fstream myfile;
    myfile.open("out.txt",ios::out);
    if(!myfile.is_open())
    {
        cerr<<"无法打开数据文件out.txt。需要核查！"<<endl;
        return ;
    }
    int n;
    for(int i=0; i<15; i++)
    {
        inFile>>n;
        myfile<<isjishu(n)<<endl;
    }
    inFile.close();
    myfile.close();
}



/* ───────── 参考答案 ─────────
bool isjishu(int n)
{
	if(n%2!=0&&n%5==0&&n%9==0)
		return true;
	else
		return false;
}
   ─────────────────────────── */
