/*===========================================================
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
