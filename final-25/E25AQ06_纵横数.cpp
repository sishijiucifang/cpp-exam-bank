/*
 * 六、（10分）
 * 完成函数int calc(int n, int m)的功能，参数n和m是一个正整数，表示矩阵matrix的行数和列数，该函数返回矩阵中"纵横数"的个数；
 * 对"纵横数"的定义如下：当某个元素严格大于其所在行的所有其他元素，且严格大于其所在列的所有其他元素时，这样的元素就是一个"纵横数"。
 * 例如，一个全为1的矩阵，无论大小，纵横数数量都为0，因为没有严格最大的数。一个只有1个元素的矩阵，无论数值，都有1个纵横数。
 * 输入格式：
 * 第一行输入2个正整数n和m，其中0<n,m<50，
 * 之后的n行，输入每一行矩阵的元素，每行共有m个元素。
 * 元素的大小在-100到100之间。
 * 输出格式：
 * 在一行中输出"纵横数"的个数。
 *
 * 输入样例1：
 * 4 4
 * 1 0 1 0
 * 0 3 0 1
 * 1 1 3 1
 * 1 1 1 1
 * 输出样例1：
 * 2
 *
 * 输入样例2：
 * 5 5
 * 1 1 1 1 1
 * 1 1 1 1 1
 * 1 1 1 1 1
 * 1 1 1 1 1
 * 1 1 1 1 1
 * 输出样例2：
 * 0
 */

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int matrix[50][50];  // global matrix for calc function

bool check(vector<int> num,int val)
{
    for(int i=0;i<num.size();++i)
    {
        if(num[i]>=val)return false;
    }
    return true;
}

int calc(int n, int m) {
    /********Program********/
    int ans=0;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            int val=matrix[i][j];
            vector<int> r;
            vector<int> c;
            for(int q=0;q<m;++q)
            {
                if(q!=j)r.push_back(matrix[i][q]);
            }
            for(int q=0;q<n;++q)
            {
                if(q!=i)c.push_back(matrix[q][j]);
            }
            if(check(r,val)&&check(c,val))
            {
                ans++;
            }
        }
    }

    return ans;

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
    printf("%d\n", calc(n, m));
    return 0;
}
