/*------------------------------------------------------------------------------
【程序设计】
--------------------------------------------------------------------------------

题目：编写函数copy(sfile,dfile)，以文本方式把一个文本文件（考生目录中的s.txt）的
      前十行拷贝到一个新的文件（a.txt）中。

参数：sfile为输入源文件，dfile为目标文件。

--------------------------------------------------------------------------------
注意：
1.部分源程序给出如下。请勿改动主函数main和其它函数中的任何内容，仅在*program*
  和*end*所标记的区域内完成题干要求的函数功能。
2.//标记开始与//标记结束内的程序可以忽略阅读。
------------------------------------------------------------------------------*/
#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;
void wwjt();

//编写Copy函数
/**********Program**********/



/**********  End  **********/

int main(){

        char filename[256];
        fstream sfile,dfile;
        cout<<"输入源文件路径名:"<<endl;
        cin>>filename;//输入s.txt 对路径各方面而言空格是无关紧要的,否则要用getline()等成员函数
        sfile.open(filename,ios::in);//打开一个已存在的文件
        while(!sfile){
                cout<<"源文件找不到,请重新输入路径名:"<<endl;
                sfile.clear(0);//出错后，状态必须清0
                cin>>filename;
                sfile.open(filename,ios::in);
        }
        cout<<"输入目标文件路径名:"<<endl;//请用d.txt
        cin>>filename; //只能创建文件，不能建立子目录，如路径不存在则失败
        dfile.open(filename,ios::out);
        if(!dfile){
                cout<<"目标文件创建失败"<<endl;
                return 1;
        }
        copy(sfile,dfile);
        sfile.close();
        dfile.close();
        //忽略阅读
        wwjt();
        //忽略阅读结束
        return 0;

}
//忽略阅读
void wwjt()
{
        fstream infile, outfile;
    infile.open ("in.dat",ios::in);
    outfile.open("out.dat",ios::out);
        copy(infile,outfile);
        infile.close();
        outfile.close();
}
//忽略阅读结束
