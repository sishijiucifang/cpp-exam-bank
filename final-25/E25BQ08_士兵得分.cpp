/*
 * 八、（10分）
 * 在一次实战演习中，某部共有 n 名士兵参与行动。每名士兵都有以下基本信息：姓名（字符串，无空格）、编号（字符串，无空格）、命中目标数（整型）、被击中次数（整型）、支援次数（整型，表示主动救援队友的次数）。根据上述数据，战术指挥中心根据如下规则评估个人得分：每命中一个目标得 5 分、每被击中一次扣 3 分、每支援一次加 2 分。请使用结构体保存每名士兵的信息，并输出得分最高的士兵的编号（如有并列，输出输入顺序中最先出现的）
 *
 * 输入格式：
 * 第一行：一个整数 n（表示士兵数量，1 ≤ n ≤ 100）
 * 接下来 n 行，每行一个士兵的信息：
 * 姓名 编号 命中数 被击中数 支援数
 * 输出格式：
 * 第一行：得分最高的士兵编号
 *
 * 输入样例1：
 * 3
 * Lee S001 10 2 3
 * Wang S002 8 1 4
 * Zhao S003 12 4 2
 * 输出样例1：
 * S003
 *
 * 输入样例2：
 * 3
 * Alice A001 4 1 4
 * Bob A002 6 3 2
 * Charlie A003 3 2 4
 * 输出样例2：
 * A001
 */

#include <stdio.h>
#include <string.h>

struct Soldier {
    char name[101];
    char id[101];
    int hits;
    int misses;
    int supports;
};

int calcScore(struct Soldier s) {
    return s.hits * 5 - s.misses * 3 + s.supports * 2;
}

void findTopScorer(struct Soldier soldiers[], int n, char* result_id) {
    /********Program********/

    /********End**********/
}

int main() {
    int n;
    scanf("%d", &n);
    struct Soldier soldiers[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d %d", soldiers[i].name, soldiers[i].id,
              &soldiers[i].hits, &soldiers[i].misses, &soldiers[i].supports);
    }
    char best_id[101];
    findTopScorer(soldiers, n, best_id);
    printf("%s\n", best_id);
    return 0;
}
