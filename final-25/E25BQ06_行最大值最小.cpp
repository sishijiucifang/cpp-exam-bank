/*
 * 六、（10分）
 * 完成函数int find_min_of_max(int n, int m)的功能，参数n和m是一个正整数，表示矩阵matrix的行数和列数，该函数返回矩阵中行最大值中的最小值。
 * 例如，给定矩阵：
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * 每行的最大值分别是3,6,9，其中的最小值是3。
 * 输入格式：
 * 第一行输入2个正整数n和m，其中0<n,m<50，
 * 之后的n行，输入每一行矩阵的元素，每行共有m个元素。
 * 元素的大小在-100到100之间。
 * 输出格式：
 * 输出行最大值中的最小值。
 *
 * 输入样例1：
 * 3 3
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * 输出样例1：
 * 3
 * 输入样例2：
 * 2 2
 * 5 5
 * 5 5
 * 输出样例2：
 * 5
 */

#include <stdio.h>

int matrix[50][50];

int find_min_of_max(int n, int m) {
    /********Program********/

    /********End**********/
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d\n", find_min_of_max(n, m));
    return 0;
}
