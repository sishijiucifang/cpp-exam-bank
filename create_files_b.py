import sys, os
sys.stdout.reconfigure(encoding='utf-8')

base = r'D:\finalReview\final-24'
os.makedirs(base, exist_ok=True)

# ---- B-Q1: ridgeDepth ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第1题 （10.0分）
  ------------------------------------------------------------
  题目：
  利用大西洋某点的深度及其与脊的距离可计算脊的深度，公式如下：

  D = w + C * X^2 / u

  其中，D为大西洋中脊的深度，w为某处的海底深度（单位为km），
  C为给定的常数，X为该处与大西洋中脊的水平距离，u为海底减薄速率
  （单位为km/Myr）。假设C已知（程序中定义为常量）。
  请补全完成函数ridgeDepth(double w, double X, double u)，根据输入的
  w、X和u，计算并返回脊的深度D。

  输入格式：
    输入在一行中给出w、X、u。
  输出格式：
    该处的脊深度D。
  输入样例：
    -4 1200 50
  输出样例：
    -4.000
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <math.h>
#include <iomanip>
#define C 0.11
using namespace std;

double ridgeDepth(double w, double X, double u)
{
    /********Program********/


    /********  End  ********/
}

int main()
{
    double w, X, u;
    cin >> w >> X >> u;
    cout << fixed << setprecision(3) << ridgeDepth(w, X, u) << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-1.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-1.cpp')

# ---- B-Q2: f(x) piecewise ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第2题 （10.0分）
  ------------------------------------------------------------
  题目：
  已知有如下函数：

  f(x) = sin(x)             (x < 0)
  f(x) = sqrt(x + 3)        (x >= 0)

  补全函数 f(x)，该函数的功能是利用上述公式计算 x 对应的 y 值。

  输入格式：
    x值
  输出格式：
    y值。
  输入样例：
    -1
  输出样例：
    1.819
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
with open(os.path.join(base, 'final-24-B-2.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-2.cpp')

# ---- B-Q3: rNAvg ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第3题 （10.0分）
  ------------------------------------------------------------
  题目：
  函数rNAvg(int a[], int len, int n)能够对于给定的整型正数数组a，
  计算最后n个元素的平均值并返回；若n为0或大于数组a的元素个数len，
  则返回-1.0；
  补全函数rNAvg(int a[], int len, int n)。

  输入格式：
    a数组长度、待查找元素n、a数组的所有元素。
  输出格式：
    双精度浮点型平均数。
  输入样例：
    3 3 1 2 3
  输出样例：
    2.000
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include<iomanip>

using namespace std;

double rNAvg(int a[], int len, int n)
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
    cout << fixed << setprecision(3) << rNAvg(a, len, n) << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-3.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-3.cpp')

# ---- B-Q4: countScore ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第4题 （10.0分）
  ------------------------------------------------------------
  题目：
  学员队发放10份干部满意度问卷调查，要求按 0 - 5 的分值闭区间打分
  （打分为整数），输入打分结果并保存在数组score[10]中，
  若出现0或1分，即打印"0"；
  然后若最低分是2分，即打印"1"；
  然后若平均值大于等于4分，即打印"3"；
  否则打印"2"。
  函数countScore(int scores[])统计10份问卷的数据并打印最终结果。
  补全函数countScore(int scores[])。

  输入格式：
    scores打分数组。
  输出格式：
    最终结果
  输入样例：
    2 3 2 3 4 5 5 2 3 3
  输出样例：
    1
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <string>
using namespace std;

int countScore(int scores[])
{
    /********Program********/



    /********  End  ********/
}

int main()
{
    int scores[10];
    for (int i = 0; i < 10; ++i)
    {
        cin >> scores[i];
    }
    cout << countScore(scores);
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-4.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-4.cpp')

# ---- B-Q5: validMountainArray ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第5题 （10.0分）
  ------------------------------------------------------------
  题目：
  给定一个整数数组 arr（元素个数不超过20个），如果它是有效的山脉数组
  就返回 true，否则返回 false。
  如果 arr 满足下述条件，那么它是一个山脉数组：

  arr.length >= 3
  在 0 < i < arr.length - 1 条件下，存在 i 使得：
    (1) arr[0] < arr[1] < ... arr[i-1] < arr[i]
    (2) arr[i] > arr[i+1] > ... > arr[arr.length - 1]

  输入格式：
    一行，第一个数为数组元素的个数n，后面n个数分别为数组元素。
  输出格式：
    一行，该数组是否为山脉数组的结果，如果是则输出 true，否则 false。
  示例 1：
    输入：2 2 1
    输出：false
  示例 2：
    输入：3 3 5 5
    输出：false
  示例 3：
    输入：4 0 3 2 1
    输出：true
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
using namespace std;

bool validMountainArray(int num, int *arr)
{
    /********Program********/



    /********  End  ********/
}

int main()
{
    int n;
    cin >> n;
    int array[20];
    for (int i =0; i<n; i++)
    {
        cin >> array[i];
    }
    cout <<boolalpha << validMountainArray(n, array) << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-5.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-5.cpp')

# ---- B-Q6: calc extreme numbers in matrix ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第6题 （10.0分）
  ------------------------------------------------------------
  题目：
  完成函数int calc(int n, int m)的功能，参数n和m是一个正整数，
  表示矩阵matrix的行数和列数（注意数据起始下标为1，见main函数），
  该函数返回矩阵中"极端数"的个数；
  对"极端数"的定义如下：某个元素的相邻四个元素都存在，且该元素
  的值比相邻四个元素的值都要大，这样的元素就是一个"极端数"。
  例如，一个1x3的矩阵和一个2x2的矩阵，矩阵中"极端数"的个数都是0，
  因为矩阵中的每个元素都不满足"相邻四个元素都存在"的条件。

  输入格式：
    第一行输入2个正整数n和m，其中0<n,m<50，
    之后的n行，输入每一行矩阵的元素，每行共有m个元素。
    元素的大小在-100到100之间。
  输出格式：
    在一行中输出"极端数"的个数。
  输入样例：
    4 4
    1 0 1 0
    0 3 0 1
    1 1 3 1
    1 1 1 1
  输出样例：
    2
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
using namespace std;

int matrix[100][100];

int calc(int n, int m)
{
    /********Program********/



    /********  End  ********/
}


int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << calc(n, m) << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-6.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-6.cpp')

# ---- B-Q7: replaceSubstring ----
content = '''/*===========================================================
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
        printf("%s\\n", buf);
    }
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-7.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-7.cpp')

# ---- B-Q8: SelectWinner ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第8题 （10.0分）
  ------------------------------------------------------------
  题目：
  B大学正在评选本学期的奖学金获得者，因为这学期大家只有课程成绩能
  作为评定的标准。受限于名额，本次奖学金只有一位获得者，所以奖学金
  将颁发给总成绩最高的学生。一共有n名学生参与评选奖学金，且本学期
  总共有7门课，每门课的成绩在0分到100分之间，如果出现成绩相同的情况，
  则返回姓名的字典顺序最大的学生，比如a<aa，所以aa的字典顺序最大。

  完成函数void SelectWinner(int n, Student StuLst[], char* WinnerName)，
  根据n名学生的信息，计算并将获得奖学金的同学的姓名保存到参数WinnerName中。

  每位学生的信息用一个结构体Student表示，其中name表示学生的姓名，长度
  不超过10位，scores表示学生的7门课程的成绩，每门课的成绩在0分到100分之间。

  提示：可能用到的字符串函数说明如下，
       strlen(char *str)：返回字符串str的长度；
       strcpy(char *dest, char *src)：把字符串src复制到dest；
       strcat(char *dest, char *src)：把字符串src连接到dest后面；
       int strcmp(const char *str1, const char *str2);
       strcmp函数用于比较两个字符串并根据比较结果返回整数。

  输入格式：
    第一行输入1个正整数n，其中0<n<=15，
    之后的n行，每一行先输入学生的姓名，然后输入7门课程的成绩。
  输出格式：
    在一行中输出获得奖学金的学生的姓名。
  输入样例：
    5
    Alice 0 83 90 80 92 87 70
    Bob 82 87 78 93 83 85 60
    Celly 83 85 93 84 83 90 80
    Deft 90 84 91 85 81 84 60
    Ery 99 99 91 94 85 80 100
  输出样例：
    Ery
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <cstring>

using namespace std;

struct Student
{
    char name[15];
    int scores[7];
};
Student StuLst[50];

void SelectWinner(int n, Student StuLst[], char* WinnerName)
{
    /********Program********/



    /********  End  ********/
}


int main()
{
    int n;
    cin >> n;
    char Winner_Name[15];
    for(int i = 0; i < n; i++)
    {
        cin >> StuLst[i].name;
        for(int j = 0; j < 7; j++)
            cin >> StuLst[i].scores[j];
    }
    SelectWinner(n, StuLst, Winner_Name);
    cout << Winner_Name << endl;
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-8.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-8.cpp')

# ---- B-Q9: Length (linked list even nodes) ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第9题 （10.0分）
  ------------------------------------------------------------
  题目：
  完成Length(Node *L)函数，计算单链表中data为偶数的节点个数并返回。

  输入格式：
    第一行输入链表的元素个数n
    第二行输入链表中的元素
  输出格式:
    第一行输出data为偶数的节点个数
  输入样例：
    8
    1 2 3 6 7 8 0 2
  输出样例：
    5
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}Node;


Node *CreatList(void)
{
    int val, i, n;
    Node *phead, *p, *q;
    phead = (Node *)malloc(sizeof(Node));
    q=phead;
    q->next=NULL;
    scanf("%d", &n);
    for(i=0; i<n; ++i)
    {
        scanf("%d", &val);
        p = (Node *)malloc(sizeof(Node));
        p->data=val;
        q->next=p;
        p->next=NULL;
        q=p;
    }
    return phead;
}

int Length(Node *L)
{
    Node *p;
    p = L->next;  // L头节点不存数据
    /******** Program *********/


    /**********  End  **********/
}

int main(void)
{
    Node *phead;
    phead = CreatList();
    printf("%d", Length(phead));
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-9.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-9.cpp')

# ---- B-Q10: countMax ----
content = '''/*===========================================================
  国防科技大学 2023-2024学年 春季学期
  《大学计算（下B）》考试试卷（B卷）
  第10题 （10.0分）
  ------------------------------------------------------------
  题目：
  "scores.txt"文件存放了国防科技大学2014-2016三年各省的录取分数线数据，
  数据的各列属性如下：
  各属性的含义分别为年份、省份、一本线、技术类最高分、技术类最低分、
  技术类平均分、合训类最高分、合训类最低分、合训类平均分。
  函数countMax(const char* fileName, char* province, char* attr)能够
  读取该文件，根据用户输入的省份和分数线项（ybx、jslMax、jslMin、
  jslAvg、hxlMax、hxlMin、hxlAvg）计算相应省份不同年相应属性的分数
  数据的最大值及年份。
  注意：
  1）"scores.txt"文件不含属性行只含数据；
  2）部分年份下缺失了特定省份的数据，在计算时不计入这年；
  3）年份与分数最大值为整型；
  4）打印信息均为英文字符且不包含空格。

  输入格式：
    省份，分数线项。
  输出格式：
    相应省份不同年相应属性的分数数据平均值。
  输入样例：
    Hunan ybx
  输出样例：
    2015:526
  注意：仅在标有"Program"和"End"的注释行之间补充填写代码。
        请勿改动主函数main和其它任何已有内容。
===========================================================*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

void countMax(const char* fileName, char* province, char* attr)
{
    /********Program********/


    /********  End  ********/
}

int main()
{

    char prov[20], attr[20];
    cin >> prov >> attr;
    countMax("scores.txt", prov, attr);
    return 0;
}
'''
with open(os.path.join(base, 'final-24-B-10.cpp'), 'w', encoding='utf-8') as f:
    f.write(content.lstrip('\n'))
print('Created: final-24-B-10.cpp')
