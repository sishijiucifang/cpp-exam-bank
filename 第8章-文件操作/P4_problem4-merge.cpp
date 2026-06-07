/* 来源：文件专项练习 | 章节：第8章-文件操作 */
/*
 * 文件专项练习 4 —— 合并两个排序文件（15分）
 *
 * 题目：
 *   "a.txt" 和 "b.txt" 各存放一组从小到大排好序的整数，每行一个数。
 *   将两组数合并（保持升序）写入 "merge.txt"，每行一个数。
 *   两组文件可能不等长。
 *
 * 输入格式：
 *   无需输入，程序读取 a.txt 和 b.txt
 * 输出格式：
 *   合并后写入 merge.txt，屏幕输出合并后的总数字个数。
 *
 * 输入样例（a.txt）：
 *   1
 *   3
 *   5
 *   7
 * 输入样例（b.txt）：
 *   2
 *   4
 *   6
 * 输出样例（屏幕）：
 *   7
 * 输出样例（merge.txt）：
 *   1
 *   2
 *   3
 *   4
 *   5
 *   6
 *   7
 *
 * 提示：
 *   - 不需要把全部数据读进数组，可以用双指针边读边写
 *   - 注意其中一个文件先读完的情况
 */

#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    /********Program********/
    ifstream file1("a.txt");
    ifstream file2("b.txt");

    vector<int> num;

    int a,b;

    while(file1>>a)
    {
        num.push_back(a);
    }
    while(file2>>b)
    {
        num.push_back(b);
    }

    sort(num.begin(),num.end());

    ofstream file3("merge.txt");

    for(int i=0;i<num.size();++i)
    {
        file3<<num[i];
    }

    cout<<num.size()<<"\n";
    /********  End  ********/
    return 0;
}
