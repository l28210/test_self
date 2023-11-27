#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int value;
    struct ListNode* next;
};

struct ListNode* ReverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;
    struct ListNode* next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev; // 返回新链表的头节点
}

void PrintList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

void FreeList(struct ListNode* head) {
    while (head != NULL) {
        struct ListNode* tmpNode = head;
        head = head->next;
        free(tmpNode);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct ListNode* head = NULL;
    
    while (n--) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d", &(newNode->value));
        newNode->next = head;
        head = newNode;
    }

    head = ReverseList(head);
    PrintList(head);
    FreeList(head);
    
    return 0;
}
