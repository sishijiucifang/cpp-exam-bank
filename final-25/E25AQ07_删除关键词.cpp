/*
 * 七、（10分）
 * 给定一个主字符串s，以及若干关键词字符串t1 t2 t3...（用空格分隔），请删除主串中所有完全匹配的关键词子串（区分大小写），输出结果字符串。
 * 修正现有代码中的错误，使程序实现上述功能（注意：仅在标有"Program"和"End"的注释行之间修改代码）。
 *
 * 输入格式：
 * 第一行输入主串s
 * 第二行输入关键词串，每个关键词用空格分隔（不超过5个）
 * 主串和关键词均不超过1000字符，关键词不包含空格。
 * 输出格式：
 * 删除关键词后的主串
 *
 * 输入样例 1：
 * abcdef
 * 输出样例 1：
 * bacdef
 *
 * 输入样例 2：
 * abcde
 * 输出样例 2：
 * badce
 *
 * 提示：
 * strtok(char *str, const char *delim)：分解字符串str为一组字符串，delim为分隔符。
 * strcat(char *dest, const char *src)：把src所指向的字符串追加到dest所指向的字符串的结尾
 * strcpy(char *dest, const char *src)：把src所指向的字符串复制到dest
 * strstr(const char *haystack, const char *needle)：在字符串haystack中查找第一次出现字符串needle的位置，不包含终止符'\0'
 * strlen(const char *str)：获取字符串长度
 */

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void swapAdjacent(char *s) {
    /********Program********/
    char *p = s;
    while (*p != '\0') {
        char tmp = *p;
        *p = *(p + 1);
        *(p + 1) = tmp;
        p++;
    }
    /********End**********/
}

int main() {
    char s[1001];
    cin >> s;
    swapAdjacent(s);
    cout << s << endl;
    return 0;
}
