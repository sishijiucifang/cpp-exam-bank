/*
 * 三、（10分）
 * 在特种作战训练中，教官需要为len名士兵组成的战术编队进行分组训练。每名士兵都有一个战斗值评估分数（存储在数组a中）。为了确保训练安全，教官规定：
 * 1. 每组必须由连续的士兵组成
 * 2. 组内不能有任何士兵的战斗值超过安全阈值n（否则训练风险过高）
 * 作为作战参谋，你需要编写一个算法，找出所有安全编组中最长的那个组的长度，用于制定最佳训练方案。
 * 补全函数：CombatSafeRange(int a[], int len, int n)。
 *
 * 输入格式：
 * 数组长度len、安全阈值n
 * 士兵战斗值数组a中所有元素
 * 输出格式：
 * 输出一个整数，表示满足条件的连续士兵编组最大长度。若无安全编组，输出0。
 *
 * 输入样例1：
 * 5 85
 * 75 80 82 78 76
 * 输出样例1：
 * 5
 *
 * 输入样例2：
 * 5 85
 * 90 85 88 92 86
 * 输出样例2：
 * 1
 */

#include <stdio.h>
#include <algorithm>

int CombatSafeRange(int a[], int len, int n) {
    /********Program********/
    int ans=0;int sum=0;
    for(int r=0;r<len;++r)
    {
        if(a[r]<=n)
        {
            sum++;
        }
        else
        {
            ans=std::max(ans,sum);
            sum=0;
        }
    }

    ans=std::max(ans,sum);
    return ans;
    /********End**********/
}

int main() {
    int len, n;
    scanf("%d %d", &len, &n);
    int* a = new int[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }
    int result = CombatSafeRange(a, len, n);
    printf("%d\n", result);
    delete[] a;
    return 0;
}
