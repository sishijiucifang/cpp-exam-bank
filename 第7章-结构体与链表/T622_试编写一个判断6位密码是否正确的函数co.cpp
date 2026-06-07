/*
 * 来源：C++题库 题号622
 * 章节：第7章-结构体与链表
 * 难度：中
 * 题序：第16题
 *
 * 题目：试编写一个判断6位密码是否正确的函数codec，
 */

第16题 （0.1分）        题号:622        难度:中        第7章
/*------------------------------------------------
【程序设计】
--------------------------------------------------

题目：试编写一个判断6位密码是否正确的函数codec，
      若密码正确返回1，密码不正确返回0，出现错误返回-1。
      密码规则是：第i位数字是第i-1位数字加1后的3次方的个位数（2<=i<=6）。
      比如：密码272727中第2位的'7'是第1位的'2'加1后的3次方的个位数
      （(2+1)的3次方为27，其个位数为7），第3位的'2'是第2位的'7'加1后的3次方
      的个位数（(7+1)的3次方为512，其个位数为2），以此类推。

--------------------------------------------------

注意：部分源程序给出如下。请勿改动主函数main和其它
      函数中的任何内容，仅在函数的花括号中填入所编
      写的若干语句。

------------------------------------------------*/

#include <iostream.h>
#include <fstream.h>

//若字符是0-9之间的字符，则将其转换为对应的整数值并返回，
//否则，返回-1。
int char2int(char c)
{
        int result;

        if ((c>='0') && (c<='9')) result = c-'0';
        else result = -1;
        
        return result;
}

//判断6位密码是否正确，若正确返回1；不正确返回0，密码格式有错返回-1。
int codec(char * code)
{
        int result = 1;
        int i, k=0;

        int a[6];

        for (i=0; i<6; i++)
                a[i] = char2int(*(code+i));
        for (i=0; i<6; i++)
                if (a[i]==-1) result = -1; 

/**********Program**********/






/**********  End  **********/

        return result;
}
void wwjt();
void main()
{
        int isCorrect = 0;
        char str[7] = "272727";

        isCorrect = codec(str);

        if (isCorrect==1) cout << "密码正确!" << endl;
        else if (isCorrect ==0) cout << "密码不正确!" << endl;
        else cout << "输入密码不符合规则!" << endl;

//忽略阅读
    wwjt();
//忽略阅读结束
}
//以下忽略阅读
void wwjt()
{

        char str[7];
        int k;

        for (k=0;k<7;k++) str[k]='\0'; 

        fstream infile, outfile;
        infile.open("in.txt", ios::in);
        outfile.open("out.txt",ios::out);
        for(k=0;k<10;k++){
                infile >> str;
                outfile << codec(str)<< endl;
        }
        infile.close();
        outfile.close();
}



/* ───────── 参考答案 ─────────
if (result != -1)
		for (i=1; i<6; i++)
			if (a[i]!=((a[i-1]+1)*(a[i-1]+1)*(a[i-1]+1))%10) result =0;
   ─────────────────────────── */
