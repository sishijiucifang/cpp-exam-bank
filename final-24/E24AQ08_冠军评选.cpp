/*===========================================================
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
