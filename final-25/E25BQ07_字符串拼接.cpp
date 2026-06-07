/*
 * 七、（10分）
 * 给定一个主字符串 s，以及两个关键词 t1 和 t2，请将 t1 和 t2 拼接为一个新字符串，拼接时t1在前，t2在后，然后判断拼接后的字符串是否是主串 s 的子串。
 * * 若是，输出 Yes，否则输出 No
 * * 主串和关键词均只包含大小写英文字母，不包含空格或其他字符，长度不超过 1000
 * * 区分大小写，即 'A' 与 'a' 视为不同字符
 * 要求修正现有代码中的错误，使程序实现上述功能（注意：仅在标有"Program"和"End"的注释行之间修改代码）。
 *
 * 输入格式：
 * 第1行：一个字符串，表示主串 s
 * 第2行：两个空格分隔的字符串，分别表示关键词 t1 和 t2
 * 输出格式：
 * 如果拼接结果 t1 + t2 是 s 的子串，输出 Yes
 * 否则输出No
 *
 * 输入样例1：
 * thisisprogrammingfun
 * program ming
 * 输出样例1：
 * Yes
 *
 * 输入样例2：
 * hellocodingworld
 * code ing
 * 输出样例2：
 * No
 *
 * 待改正代码：
 * void checkConcatenation(char *s, char *t1, char *t2) {
 *     char temp[2001];
 *     strcat(temp, t1);
 *     strcat(temp, t2);
 *     if (strcmp(s, temp) == 0)
 *         cout << "Yes" << endl;
 *     else
 *         cout << "No" << endl;
 * }
 */

#include <iostream>
#include <string.h>
using namespace std;

void checkConcatenation(char *s, char *t1, char *t2) {
    /********Program********/
    char temp[2001];
    strcat(temp, t1);
    strcat(temp, t2);

    if (strcmp(s, temp) == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    /********End**********/
}

int main() {
    char s[1001];
    char t1[1001], t2[1001];
    cin >> s >> t1 >> t2;
    checkConcatenation(s, t1, t2);
    return 0;
}
