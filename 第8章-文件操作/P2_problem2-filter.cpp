/* 来源：文件专项练习 | 章节：第8章-文件操作 */
/*
 * 文件专项练习 2 —— 筛选及格学生并写入新文件（10分）
 *
 * 题目：
 *   读取 "students.txt" 文件，每行格式为：姓名 成绩（成绩为整数）。
 *   筛选出成绩 ≥ 60 的学生，将其姓名和成绩写入 "pass.txt"，
 *   每行格式同样为：姓名 成绩。
 *
 * 输入格式：
 *   无需输入，程序读取 students.txt
 * 输出格式：
 *   将及格学生写入 pass.txt，同时在屏幕输出及格人数。
 *
 * 输入样例（students.txt 内容）：
 *   Alice 85
 *   Bob 45
 *   Charlie 72
 *   David 58
 *   Eve 90
 * 输出样例（屏幕）：
 *   3
 * 输出样例（pass.txt 内容）：
 *   Alice 85
 *   Charlie 72
 *   Eve 90
 *
 * 提示：
 *   - 用 ifstream 读取，ofstream 写入
 *   - ofstream 打开文件时默认覆盖已有内容
 */

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
    /********Program********/
    ifstream file1("students.txt");
    ofstream file2("pass.txt");

    char name[20];
    int score;
    int num=0;

    while(file1>>name>>score)
    {
        if(score>=60)
        {
            num++;
            file2<<name<<score;
            file2<<"\n";
        }
    }

    cout<<num<<endl;
    /********  End  ********/
    return 0;
}
