/*
 * 九、（10分）
 * 给出一个链表的头节点 head 和一个整数 val，请你删除链表中所有满足 Node.val == val 的节点，并返回删除后链表的头节点指针。
 * 例如：
 * 给出的链表为 1→2→6→3→4→5→6，val = 6，返回 1→2→3→4→5。
 * 给出的链表为 7→7→7→7，val = 7，返回空链表。
 *
 * 输入格式：
 * 第一行输入一个正整数 n，表示链表节点数。
 * 第二行输入 n 个整数，依次为链表每个节点的值。
 * 第三行输入一个整数 val，表示要删除的值。
 * 输出格式：
 * 输出删除操作后链表的所有节点值。
 *
 * 输入样例1：
 * 7
 * 1 2 6 3 4 5 6
 * 6
 * 输出样例1：
 * List: 1->2->3->4->5
 *
 * 输入样例2：
 * 4
 * 7 7 7 7
 * 7
 * 输出样例2：
 * List:
 */

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    /********Program********/

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
    int val;
    scanf("%d", &val);
    struct ListNode* head = createList(arr, n);
    head = removeElements(head, val);
    printList(head);
    freeList(head);
    return 0;
}
