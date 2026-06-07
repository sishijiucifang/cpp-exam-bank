/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第6题 （10.0分）
  ------------------------------------------------------------
  题目：
  数据压缩对高效传输和存储大量数据具有重要意义。小F提出了一种
  他认为非常棒的"极简压缩"算法，它将连续的重复字符压缩成一个字
  符的形式，从而减少存储开销。
  例如，"AAAABBCDEE"进行"极简压缩"后为"ABCDE"，
        "aaaBCCeFF11"进行"极简压缩"后为"aBCeF1"。

  函数compress的功能是将字符串进行"极简压缩"，其中参数src是待
  压缩的字符串（仅包含大小写字母和数字，长度不超过100），压缩后的结
  果保存在参数dst中。请完成函数compress的编写。

  提示：可能用到的字符串函数说明如下，
       strlen(char *str)：返回字符串str的长度；
       strcpy(char *dest, char *src)：把字符串src复制到dest；
       strcat(char *dest, char *src)：把字符串src连接到dest后面；
       itoa(int value, char *str, int radix)：将整数value按radix进制转换成字符串str；

  输入格式：
    输入在一行中给出待压缩的字符串。
  输出格式：
    在一行中输出进行"极简压缩"后的字符串。
  输入样例：
    viivvvvo555550
  输出样例：
    vivo50
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <cstring>
using namespace std;

void compress(char* src, char* dst)
{
    /**********Program**********/



    /**********  End  **********/
}

int main()
{
    char s[200], t[200];
    cin >> s;
    compress(s, t);
    cout << t << endl;
    return 0;
}
