/*
 * 八、（10分）
 * 某电脑城接到一笔采购订单，每种商品有以下信息：商品名称（字符串，无空格）、单价（整型）、当前库存数量（整型）、订单需求数量（整型）。
 * 如果订单的需求数量大于库存数量，商家需要进货。请你使用指针访问结构体中的各类商品，编写函数，返回需要进货数量最多的商品的指针；
 * 若所有商品库存充足，则返回空指针。注意：(1)若存在多个商品的进货数量相同，仅返回输入顺序中最先出现的那一个。(2)main函数会根据返回的指针，输出商品名称和进货金额。
 *
 * 输入格式：
 * 第一行：一个整数 n（表示商品种类数，1 ≤ n ≤ 100）
 * 接下来的 n 行，每行输入：
 * 商品名称 单价 当前库存数量 订单需求数量
 * 输出格式：
 * 第一行：（需要进货数量最多的）商品名称、进货金额
 *
 * 输入样例1：
 * 4
 * Monitor 800 10 12
 * Mouse 40 100 100
 * Keyboard 120 50 60
 * SSD 300 30 25
 * 输出样例1：
 * Keyboard 1200
 *
 * 输入样例2：
 * 3
 * CPU 2000 10 10
 * GPU 3000 5 3
 * RAM 600 20 18
 * 输出样例2：
 * Sufficient stock
 */

#include <stdio.h>
#include <string.h>

struct Product {
    char name[101];
    int price;
    int current_stock;
    int ordered_qty;
};

struct Product* findMaxCost(struct Product products[], int n) {
    /********Program********/
    Product* ans=NULL;
    int num=0;

    for(int i=0;i<n;++i)
    {
        int tmp=products[i].ordered_qty-products[i].current_stock;
        if(tmp>0)
        {
            if(tmp>num)
            {
                ans=products+i;
                num=tmp;
            }
        }
    }

    return ans;

    /********End**********/
}

int main() {
    int n;
    scanf("%d", &n);
    struct Product products[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", products[i].name, &products[i].price,
              &products[i].current_stock, &products[i].ordered_qty);
    }
    struct Product* p = findMaxCost(products, n);
    if (p == NULL) {
        printf("Sufficient stock\n");
    } else {
        int cost = (p->ordered_qty - p->current_stock) * p->price;
        printf("%s %d\n", p->name, cost);
    }
    return 0;
}
