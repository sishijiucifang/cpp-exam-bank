/*
 * 第20题 (题号:226)  难度:较易  第1章
 *
 * 【程序设计】
 * 题目：函数codec判断6位密码是否正确的，若密码正确返
 *       回1，密码不正确返回0，出现错误返回-1。
 *       密码规则是：第i位数字是第i-1位数字加1后的3次
 *       方的个位数（2<=i<=6）。
 *       例如：密码272727中第2位的'7'是第1位的'2'加1后
 *       的3次方的个位数((2+1)的3次方为27，其个位数为7)，
 *       第3位的'2'是第2位的'7'加1后的3次方的个位数
 *       ((7+1)的3次方为512，其个位数为2），以此类推。
 *       完成该函数的编写。
 */

#include <iostream>
#include <fstream>
using namespace std;
void grading();
int cal(int x)
{
        return (x+1)*(x+1)*(x+1)%10;
}
int char2int(char c)
{
        int result;
        if ((c>='0') && (c<='9'))
                result = c-'0';
        else
                result = -1;
        return result;
}
int codec(char * code)
{
        int result = 1;
        int i, k=0;
        int a[6];
        for (i=0; i<6; i++)
                a[i] = char2int(*(code+i));
        for (i=0; i<6; i++)
                if (a[i]==-1)
                        result = -1;
/**********Program**********/
        for(int i=1;i<6;i++)
        {
                if(a[i]!=cal(a[i-1]))
                {
                        result=-1;
                }
        }

/**********  End  **********/
        return result;
}
int main()
{
        int isCorrect = 0;
        char str[7] = "272727";
        isCorrect = codec(str);
        if (isCorrect==1)
                cout << "密码正确!" << endl;
        else if (isCorrect ==0)
                cout << "密码不正确!" << endl;
        else
                cout << "输入密码不符合规则!" << endl;
        grading();
}
//以下忽略阅读
void grading()
{
        char str[7]="";
        int k;
        fstream infile, outfile;
        infile.open("codein.txt", ios::in);
        outfile.open("codeout.txt",ios::out);
        for(k=0;k<50;k++){
                infile >> str;
                outfile << codec(str)<< endl;
        }
        infile.close();
        outfile.close();
}
