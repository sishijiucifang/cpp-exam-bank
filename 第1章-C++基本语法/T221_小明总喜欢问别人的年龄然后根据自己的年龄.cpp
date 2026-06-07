/*
 * 来源：C++题库 题号221
 * 章节：第1章-C++基本语法
 * 难度：较易
 * 题序：第18题
 *
 * 题目：小明总喜欢问别人的年龄，然后根据自己的年龄和
 */

第18题 （0.1分）        题号:221        难度:较易        第1章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：小明总喜欢问别人的年龄，然后根据自己的年龄和
      生肖计算别人的生肖，编写函数shengxiao帮助小明
      完成该功能。
      注：十二生肖的顺序是：猪、狗、鸡、猴、羊、马、
      蛇、龙、兔、虎、牛、鼠，即如果小明8岁属猪，则
      如果小张9岁就属狗，小王12岁属羊
          鼠、牛、虎、兔、龙、蛇、
      马、羊、猴、鸡、狗、猪
  
--------------------------------------------------
注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，不要修改或删除“Program”和
      “End”两行注释，仅在其中填入所编写的代码。
--------------------------------------------------*/

#include <iostream>
#include <fstream>
using namespace std;
void grading();
//myage -- 自己的年龄
//mysx -- 自己的生肖，1-12分别代表生肖猪到鼠
//age -- 对方的年龄
//返回值：对方的生肖，1-12分别代表生肖猪到鼠
int shengxiao(int myage, int mysx, int age);

/**********Program**********/




/**********  End  **********/

int main()
{
        int mysx,myage,sx,age;
        cout<<"1-12分别代表生肖‘猪狗鸡猴羊马蛇龙兔虎牛鼠’"<<endl;
        cout<<"请输入自己的年龄、自己的生肖、对方的年龄:";
        cin>>myage>>mysx>>age;
        sx = shengxiao(myage,mysx,age);
        char s[33]="猪狗鸡猴羊马蛇龙兔虎牛鼠";
        s[sx*2]=0;
        cout<<"对方的生肖是："<<(s+sx*2-2)<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        int i, j, mysx,myage,sx,age;
        fstream infile,outfile;
        infile.open("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for(i=0;i<10;i++)
        {
                for(j=0;j<10;j++)
                {
                        infile>>myage>>mysx>>age;
                        myage=myage%66+1;
                        mysx=mysx%12+1;
                        age = age%100+1;
                        sx=shengxiao(myage,mysx,age);
                        outfile<<sx<<" ";
                }
                outfile<<endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
int shengxiao(int myage, int mysx, int age)
{
	int sx;
	while (age<myage)
		age+=12;
	sx = age-myage+mysx;
	if (sx%12==0)
		return 12;
	return sx%12;
}
   ─────────────────────────── */
