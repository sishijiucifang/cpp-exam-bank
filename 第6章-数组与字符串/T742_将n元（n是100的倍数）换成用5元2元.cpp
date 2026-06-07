/*
 * 来源：C++题库 题号742
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第44题
 *
 * 题目：将n元（n是100的倍数）换成用5元、2元的组合（其中之一可取0）
 */

第44题 （0.1分）        题号:742        难度:中        第6章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：将n元（n是100的倍数）换成用5元、2元的组合（其中之一可取0）
，编写函数int getNum（int n）求共有多少种组合方法，返回组合数目。
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
                           cout<<"输入钱的数目n（n为100的倍数）:";
                           cin>>n;
                           cout<<"n分成5元和2元的组合方法数目为"<<getNum(n)<<endl;
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
                myfile<<getNum(n)<<endl;
        }
                inFile.close();
                myfile.close();
}



/* ───────── 参考答案 ─────────
int getNum(int n)
{
	int num=0;
	int x,y;
	for(x=0;x<=(n/5);x++)
		for(y=0;y<=(n/2);y++)
		{
			if(x*5+y*2==n)
			{
				num++;
				break;
			}

		}
	return num;
}
   ─────────────────────────── */
