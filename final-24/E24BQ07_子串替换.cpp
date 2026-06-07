/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第7题 （10.0分）
  ------------------------------------------------------------
  题目：
  读入一个字符串，字符串中最多包含一个 _xyz_ 子串，请将输入字符串中
  的 "_xyz_" 替换为 "_abc_"；若没有进行过满足条件的替换，则输出原
  字符串。注意 _xyz_ 和 _abc_等长。

  输入格式：
    一个字符串，最多包含一个 _xyz_ 子串
  输出格式：
    输出替换后的字符串
  输入样例：
    xyz_xyz_2024-4-27
  输出样例：
    xyz_abc_2024-4-27
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <stdio.h>
#include <string.h>
// BUFSIZ是系统默认的缓冲区大小
// 注意 _xyz_ 和 _abc_等长

// 替换函数
void replaceSubstring(char *original, const char *target, const char *replacement) {
    /********Program**********/


    /**********End**********/

}

int main() {
    char buf[BUFSIZ], str[] = "_xyz_", replacement[] = "_abc_";
    if (scanf("%s", buf) != EOF) {
        replaceSubstring(buf, str, replacement);
        printf("%s\n", buf);
    }
    return 0;
}
