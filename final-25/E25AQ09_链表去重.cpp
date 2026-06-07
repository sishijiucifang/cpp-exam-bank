/*
 * 九、（10分）
 * 给出一个升序排序的链表（链表节点的值按照从小到大顺序），删除链表中的所有重复出现的元素，只保留原链表中只出现一次的元素。
 * 例如：
 * 给出的链表为1→2→3→3→4→4→5， 返回1→2→5。
 * 给出的链表为1→1→1→2→3，返回2→3。
 *
 * 输入格式：
 * 第一行输入一个正整数 n，表示链表节点数。
 * 第二行输入 n 个整数，依次为链表每个节点的值。
 * 输出格式：
 * 输出删除操作后链表的所有节点值。
 *
 * 输入样例1：
 * 5
 * 1 1 1 2 3
 * 输出样例1：
 * List: 2->3
 *
 * 输入样例2：
 * 7
 * 1 2 3 3 4 4 5
 * 输出样例2：
 * List: 1->2->5
 */

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    /********Program********/
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* prev = &dummy;

    while (prev->next != NULL) {
        struct ListNode* cur = prev->next;
        if (cur->next != NULL && cur->next->val == cur->val) {
            int val = cur->val;
            while (cur != NULL && cur->val == val) {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        } else {
            prev = cur;
        }
    }

    return dummy.next;
    /********End**********/
}

struct ListNode* createList(int arr[], int n) {
    if (n == 0) return NULL;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = arr[0];
    head->next = NULL;
    struct ListNode* cur = head;
    for (int i = 1; i < n; i++) {
        cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        cur = cur->next;
        cur->val = arr[i];
        cur->next = NULL;
    }
    return head;
}

void printList(struct ListNode* head) {
    printf("List:");
    struct ListNode* p = head;
    while (p != NULL) {
        printf(" %d", p->val);
        if (p->next != NULL) printf("->");
        p = p->next;
    }
    printf("\n");
}

void freeList(struct ListNode* head) {
    struct ListNode* p = head;
    while (p != NULL) {
        struct ListNode* temp = p;
        p = p->next;
        free(temp);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    struct ListNode* head = createList(arr, n);
    head = deleteDuplicates(head);
    printList(head);
    freeList(head);
    return 0;
}
