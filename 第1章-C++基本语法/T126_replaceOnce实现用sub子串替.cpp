/*
 * 第12题 (题号:126)  难度:中  第1章
 *
 * 【程序设计】
 * 题目：函数replaceOnce实现用sub子串替换长串src内第
 *       一次出现的obj子串。
 *       完成该函数的编写。
 *
 * 注意：sub串与obj串的长度不一定相等。
 *
 * 提示：可使用的库函数
 *       char *strstr(char *str1, const char *str2);
 *           返回str1中str2的第一次出现。
 *       char*strncpy(char*dest,char*src,size_t n);
 *           将src中前n个字符拷贝到dest指向的空间。
 *       char *strcat(char *dest,char *src);
 *           将src指向的字符串链接到dest指向的字符串后面。
 *       unsigned int strlen(char *s);
 *           获取字符串s的长度并返回。
 */

#include <iostream>
#include <fstream>
using namespace std;
#include <string.h>

void grading();
//src -- 要被替换的长串
//obj -- src中要被替换的子串
//sub -- 用来替换obj的子串
void replaceOnce(char src[], char obj[], char sub[]);

/**********Program**********/
void replaceOnce(char src[], char obj[], char sub[])
{
        char* p = strstr(src, obj);
        if (p == NULL) return;

        char temp[1000] = "";

        strncpy(temp, src, p - src);      // 拷贝 obj 前面的部分
        temp[p - src] = '\0';

        strcat(temp, sub);                 // 接上替换串
        strcat(temp, p + strlen(obj));     // 接上 obj 后面的部分

        strcpy(src, temp);                 // 写回 src
}




/**********  End  **********/

int main()
{
        cout<<"输入长串：";
        char src[1000];
        cin.getline(src, 999);
        cout<<"输入将被替换的子串：";
        char obj[50];
        cin.getline(obj, 49);
        cout<<"输入用来替换的子串：";
        char sub[50];
        cin.getline(sub, 49);
        replaceOnce(src, obj, sub);
        cout<<"替换结果是："<<src<<endl;
        grading();
        return 0;
}

//以下忽略阅读
void grading()
{
        char t[1024],s[1000],obj[50],sub[50];
        int i,n;
        fstream infile,outfile;
        infile.open("in.txt", ios::in);
        outfile.open("out.txt", ios::out);
        for(i=0; i<1000; i++)
        {
                infile>>n;
                t[i]=n%26+'a';
        }
        t[1000]=0;
        for(i=0;i<10;i++)
        {
                strncpy(s,t+i*33,50);
                s[50]=0;
                strncpy(obj,s+i,20);
                obj[20]=0;
                strncpy(sub,s+i+8,21);
                sub[21]=0;
                replaceOnce(s,obj,sub);
                outfile<<s<<endl;
        }
        infile.close();
        outfile.close();
}
