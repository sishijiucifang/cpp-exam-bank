/* 来源：文件专项练习 | 章节：第8章-文件操作 */
/*
 * 文件专项练习 1 —— 统计行数、词数、字符数（10分）
 *
 * 题目：
 *   读取 "article.txt" 文件，统计并输出：
 *   1. 总行数
 *   2. 总词数（以空格和换行分隔的单词个数）
 *   3. 总字符数（不含文件末尾可能存在的空行）
 *
 * 输入格式：
 *   无需输入，程序读取 article.txt
 * 输出格式：
 *   在一行中输出三个整数：行数 词数 字符数
 *
 * 输入样例（article.txt 内容）：
 *   Hello World
 *   I am learning C++
 * 输出样例：
 *   2 6 29
 *
 * 提示：
 *   - 使用 ifstream 和 getline 按行读取
 *   - getline 返回 false 表示读到文件尾
 */

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main() {
    /********Program********/
    ifstream file("article.txt");

    char line[100];
    int numLine=0;
    int numChar=0;

    while(file.getline(line,100))
    {
        numLine++;
        numChar+=strlen(line);
    }
    numChar--;

    file.close();

    ifstream file1("article.txt");

    char a[20];
    int numWord=0;

    while(file1>>a)
    {
        numWord++;
    }

    file1.close();

    cout<<numLine<<" "<<numWord<<" "<<numChar<<endl;




    /********  End  ********/
    return 0;
}
