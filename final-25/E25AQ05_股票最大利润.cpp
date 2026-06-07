/*
 * 五、（10分）
 * 在股票交易策略研究中，我们经常需要评估单次交易的最佳时机。假设给定一个包括n个元素的数组 prices，
 * 其中每个元素 prices[i]代表某支股票在第 i 天的市场价格，请你编写一段代码求在这n天买卖的最大利润，
 * 利润计算方法为卖出日的股票价格减去买入日的股票价格，即利润=卖出当日价格-买入当日价格。具体规则如下：
 * （1）整个交易周期最多只允许完成一次完整的买卖操作，即仅能买入一次并卖出一次；
 * （2）卖出操作日期必须发生在买入操作之后，确保交易时序合理；
 * （3）特别需要注意的是，如果市场持续低迷导致所有可能的交易组合都无法产生正利润（即最大利润为零或负数），算法应直接返回0作为结果。
 *
 * 输入格式：
 * 第一行：一个正整数n，表示股票交易的天数
 * 第二行：n个非负整数，由空格分隔，依次表示每天的股票价格 prices[i]
 * 输出格式：
 * 一个整数，表示可以获得的最大利润值。
 *
 * 输入样例1：
 * 6
 * 7 1 5 3 6 4
 * 输出样例1：
 * 5
 *
 * 输入样例2：
 * 5
 * 7 6 4 3 1
 * 输出样例2：
 * 0
 */

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int prices[], int n) {
    /********Program********/
    int ans=0;
    for(int i=0;i<n;++i)
    {
        int in=prices[i];

        int out=*max_element(prices+i+1,prices+n);

        ans=max(ans,out-in);
    }

    return ans;
    /********End**********/
}

int main() {
    int n;
    scanf("%d", &n);
    int prices[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    printf("%d\n", maxProfit(prices, n));
    return 0;
}
