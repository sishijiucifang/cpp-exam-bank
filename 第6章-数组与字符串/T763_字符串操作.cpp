/*
 * 来源：C++题库 题号763
 * 章节：第6章-数组与字符串
 * 难度：中
 * 题序：第65题
 *
 * 题目：编写函数int atoi(char s[ ])，将字符串s转化
 */

第65题 （0.1分）        题号:763        难度:中        第6章
/*-----------------------------------------------
【程序设计】
-------------------------------------------------
题目：编写函数int atoi(char s[ ])，将字符串s转化
      为整型数返回。注意负数处理方法。例如s为"-123",
      则函数返回-123,s为"45",则函数返回45.
        
--------------------------------------------------
注意：仅在标有"Program"和"End"的注释行之间补充填
      写代码。请勿改动主函数main和其它任何已有内
      容。
------------------------------------------------*/

#include<iostream>
#include<fstream>
using namespace std;
void grading();

/*******Program*******/




/*******  End  *******/

void main()
{
        char num1[20] = "-123";
        char num2[20] = "456";
        cout<<atoi(num1)<<'\n';
        cout<<atoi(num2)<<'\n';
        //忽略阅读
        grading();
        //忽略阅读结束
        return ;
}

//忽略阅读
void grading()
{
        char m[20];
        int d;
        fstream infile, outfile;
        infile.open ("in.txt",ios::in);
        outfile.open("out.txt",ios::out);
        for (int i=0;i<4;i++)
        {
                m[0]='-';
                infile>>d;
                m[1]=((d+8)/2)%10+'0';
                infile>>d;
                m[2]=((d+8)/2)%10+'0';
                m[3]=0;
                outfile<<atoi(m)<<endl;
                infile>>d;
                m[0]=((d+8)/2)%10+'0';
                infile>>d;
                m[1]=((d+8)/2)%10+'0';
                m[2]=0;
                outfile<<atoi(m)<<endl;
        }
        infile.close();
        outfile.close(); 
}
//忽略阅读结束



/* ───────── 参考答案 ─────────
int atoi(char s[]){
	int temp=0,f=1,i=0;
	while(s[i]!='\0'&&s[i]!='-'&&(s[i]<'0'||s[i]>'9')) i++;//去除串前部无效字符
	if(s[i]=='-'){//读负号
		f=-1;
		i++;
	}
	if(s[i]<'0'||s[i]>'9') cout<<"error!"<<endl;//串非法时，输出提示，返回0
	while(s[i]>='0'&&s[i]<='9'){//转换数字串
		temp=temp*10+s[i]-48;
		i++;
	}
	return f*temp;
}
   ─────────────────────────── */
