/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第7题 （10.0分）
  ------------------------------------------------------------
  题目：
  输入以空格分隔的字符串s和t，将s中与t匹配的所有子串逆置后再输出s，
  当s中无与t匹配的子串时直接输出字符串s。已经匹配的字符不会再重复
  匹配，但是s中可能有多个字串t。
  函数strstr(p, substr)在字符串p中查找第一次出现字符串substr的位置。

  输入格式：
    以空格分隔的字符串s和t
  输出格式：
    输出逆置后的字符串s
  输入样例：
    helloworld wor
  输出样例：
    hellorowld
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <stdio.h>
#include <string.h>

void rev(char *first, char *last)
{
    /********Program**********/


    /**********End**********/
}

int main()
{
    char str[BUFSIZ], substr[BUFSIZ], *p = str;
    scanf("%s%s", str, substr);
    while ((p = strstr(p, substr)) != NULL)
    {
        rev(p, p + strlen(substr) - 1);
        p = p + strlen(substr);
    }
    puts(str);

    return 0;
}
