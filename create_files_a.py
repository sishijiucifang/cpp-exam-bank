import sys, os
sys.stdout.reconfigure(encoding='utf-8')

base = r'D:\finalReview\final-24'
os.makedirs(base, exist_ok=True)

# ---- A-Q1: seaDepth ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第1题 （10.0分）
  ------------------------------------------------------------
  题目：利用大西洋中脊可计算海洋某处的海底深度，公式如下：

  w = D - C * X^2 / u

  其中，w为某处的海底深度，D为大西洋中脊的深度（单位为km），
  C为给定的常量，X为该处与大西洋中脊的水平距离，u为海底减薄速率
  （单位为km/Myr）。假设D和u已知，D=2.5km、u=50km/Myr。

  请补全完成函数seaDepth(double C, double X)，根据输入的C和X，
  计算并返回某点海底深度w。

  输入格式：
    输入在一行中给出C和X。
  输出格式：
    该处的海底深度w。
  输入样例：
    0.11 1200
  输出样例：
    -4.204
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double seaDepth(double C, double X)
{
    double D = 2.5;
    double u = 50.0;
    /********Program********/


    /********  End  ********/
}

int main()
{
    double C, X;
    cin >> C >> X;
    cout << fixed << setprecision(3) << seaDepth(C, X) << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-A-1.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-1.cpp')

# ---- A-Q2: f(x) piecewise ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第2题 （10.0分）
  ------------------------------------------------------------
  题目：
  已知有如下函数：

         | 2x + 1      (x > 0)
  f(x) = | 0           (x = 0)
         | x^2 + 3x + 1 (x < 0)

  补全函数 f(x)，该函数的功能是利用上述公式计算 x 对应的 y 值。

  输入格式：
    x值
  输出格式：
    y值。
  输入样例：
    -1
  输出样例：
    2.828
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double f(double x)
{
    /********Program********/


    /********  End  ********/
}

int main()
{
    double x;
    cin >> x;
    cout << fixed << setprecision(3) << f(x) << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-A-2.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-2.cpp')

# ---- A-Q3: rFind ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第3题 （10.0分）
  ------------------------------------------------------------
  题目：
  函数rFind(int a[], int len, int n)能够对于给定的整型数组a，逆向查找
  n在a的首次出现并返回首次出现的下标（正向从0开始标号），若a中没有
  出现n，则返回-1。参数len是数组a的长度。
  补全函数rFind(int a[], int len, int n)。

  输入格式：
    a数组长度、待查找元素n、a数组的所有元素。
  输出格式：
    数组下标。
  输入样例：
    3 3 1 2 3
  输出样例：
    2
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>

using namespace std;

int rFind(int a[], int len, int n)
{
    /********Program********/


    /********  End  ********/
}

int main()
{
    int len, i, n;
    cin >> len >> n;
    int* a = new int[len];
    for (i = 0; i < len; ++i)
    {
        cin >> a[i];
    }
    cout << rFind(a, len, n) << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-A-3.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-3.cpp')

# ---- A-Q4: countScore ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第4题 （10.0分）
  ------------------------------------------------------------
  题目：
  学员队发放10份干部满意度问卷调查，要求按 0 - 5 的分值闭区间打分
  （打分为整数），输入打分结果并保存在数组score[10]中，函数
  countScore(int scores[])统计每个分值的人数并保存在数组 counter[6]中。
  请按顺序输出每个分值及打分为该分值的人数，用英文冒号连接，不同分值
  数据用英文下划线连接，输出结果以英文下划线结尾。
  补全函数countScore(int scores[])。

  输入格式：
    scores打分数组。
  输出格式：
    统计结果
  输入样例：
    0 1 2 3 4 5 1 2 3 2
  输出样例：
    0:1_1:2_2:3_3:2_4:1_5:1_
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
using namespace std;

void countScore(int scores[], int counter[])
{
    /********Program********/


    /********  End  ********/
}

int main()
{
    int scores[10];
    int counter[6] = { 0 };
    for (int i = 0; i < 10; ++i)
    {
        cin >> scores[i];
    }
    countScore(scores, counter);
    for (int j = 0; j < 6; ++j)
    {
        cout << j << ':' << counter[j] << "_";
    }
    return 0;
}
'''
with open(os.path.join(base, 'final-24-A-4.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-4.cpp')

# ---- A-Q5: avg trim 5% ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第5题 （10.0分）
  ------------------------------------------------------------
  题目：
  给定一个整型数组，数组的大小numSize是20的倍数，且小于1000。
  要求对该数组进行以下操作：去掉数组中位置位于前5%的元素和后5%的
  元素，求该数组新的平均数（精确到小数点后五位）并输出。

  输入格式：
    第一行输入数组长度numsSize
    第二行输出数组元素nums
  输出格式：
    第一行输出结果
  输入样例：
    20
    1 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 3
  输出样例：
    2.00000
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <cstdio>
using namespace std;

double avg(int nums[], int numSize)
{
    /********Program********/



    /********  End  ********/
}

int main()
{
    int n;
    cin >> n;
    int array[1000];
    for(int i =0; i < n; i++)
    {
        cin >> array[i];
    }
    double result = avg(array, n);
    printf("%.5f\\n", result);
    return 0;
}
'''
with open(os.path.join(base, 'final-24-A-5.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-5.cpp')

# ---- A-Q6: compress ----
content = '''/*===========================================================
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
'''
with open(os.path.join(base, 'final-24-A-6.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-6.cpp')

# ---- A-Q7: rev substring ----
content = '''/*===========================================================
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
'''
with open(os.path.join(base, 'final-24-A-7.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-7.cpp')

# ---- A-Q8: ChampionInfo ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第8题 （10.0分）
  ------------------------------------------------------------
  题目：
  A大学举办了校园歌手的比赛，决赛总共有n位参赛选手，但是冠军只有一位。
  总共有8位评委，比赛的赛制比较特殊，最终成绩的计算方法是去掉一个最高
  分和一个次高分，然后再取平均值（分数为0~100分），最后成绩最高的选手
  将获得冠军。如果有多个最高成绩，按序号大小排序最小的选手为冠军。

  完成函数Competitor ChampionInfo(int n, Competitor CmptLst[])，根据8
  位评委的打分，计算并返回获得冠军的选手信息。

  每位选手的信息用一个结构体Competitor表示，其中id表示选手的序号，这是
  一个不超过9位的正整数，scores表示对该选手的8位评委打分。

  输入格式：
    第一行输入1个正整数n，其中0<n<50，
    之后的n行，每一行先输入选手的序号id，然后输入8位评委的打分。
  输出格式：
    在一行中输出获得冠军选手的序号id。
  输入样例：
    4
    100001 86 83 90 80 92 87 84 100
    100002 82 87 78 93 83 85 82 80
    100003 83 85 93 84 83 90 89 70
    100004 90 84 91 85 81 84 85 95
  输出样例：
    100001
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>

using namespace std;

struct Competitor
{
    int id;
    int scores[8];
};
Competitor CmptLst[100];

struct Competitor ChampionInfo(int n, Competitor CmptLst[])
{
    /********Program********/


    /********  End  ********/
}



int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> CmptLst[i].id;
        for(int j = 0; j < 8; j++)
            cin >> CmptLst[i].scores[j];
    }
    Competitor Champion = ChampionInfo(n, CmptLst);
    cout << Champion.id << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-A-8.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-8.cpp')

# ---- A-Q9: Josephus (count) ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第9题 （10.0分）
  ------------------------------------------------------------
  题目：
  有 n 个人围成一圈做游戏，编号为1 至 n 。从第一个人开始顺序报号
  1, 2, 3。凡报到 3 者退出圈子。最后留在圈子中的人，即为最后的赢家。
  编号是一开始的编号，整个过程保持不变。完成函数int count(int n)，
  返回赢家编号。

  输入：一个大于 2 的正整数，表示有 n 个人。
  输出：输出最后的赢家的编号。
  输入样例：
    3
  输出样例：
    2
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include<stdio.h>
#include<stdlib.h>
#define Len sizeof(struct number)
struct number
{
    int num;
    struct number*next;
};
int main()
{
    int n, winner;
    int count(int n);
    scanf("%d", &n);
    winner = count(n);
    printf("%d", winner);
    return 0;
}
int count(int n)
{

    struct number*head, *p1, *p2, *tail;
    int i;
    head = p1 = p2 = (struct number*)malloc(Len);
    p2->num = 1;
    for (i = 2; i < n; i++)
    {
        p1 = (struct number*)malloc(Len);
        p2->next = p1;
        p1->num = i;
        p2 = p1;
    }
    tail = (struct number*)malloc(Len);
    p2->next = tail;
    tail->num = n;
    tail->next = head;
    /********Program**********/

    /**********End**********/
}
'''
with open(os.path.join(base, 'final-24-A-9.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-9.cpp')

# ---- A-Q10: countAvg ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（A卷）
  第10题 （10.0分）
  ------------------------------------------------------------
  题目：
  "scores.txt"文件存放了国防科技大学2014-2016三年各省的录取分数线数据，
  数据的各列属性如下：
  各属性的含义分别为年份、省份、一本线、技术类最高分、技术类最低分、
  技术类平均分、合训类最高分、合训类最低分、合训类平均分。
  函数countAvg(const char* fileName, char* province, char* attr)能够
  读取该文件，根据用户输入的省份和分数线项（ybx、jslMax、jslMin、
  jslAvg、hxlMax、hxlMin、hxlAvg）计算相应省份不同年相应属性的分数
  数据平均值。
  注意：
  1）"scores.txt"文件不含属性行只含数据；
  2）部分年份下缺失了特定省份的数据，在算平均值时不计入这年；
  3）平均值为double类型。

  输入格式：
    省份，分数线项。
  输出格式：
    相应省份不同年相应属性的分数数据平均值。
  输入样例：
    Hunan ybx
  输出样例：
    521.667
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

double countAvg(const char* fileName, char* province, char* attr)
{
    /********Program********/


    /********  End  ********/
}

int main()
{

    char prov[20], attr[20];
    cin >> prov >> attr;
    cout << fixed << setprecision(3) << countAvg("scores.txt", prov, attr);
    return 0;
}
'''
with open(os.path.join(base, 'final-24-A-10.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-A-10.cpp')
