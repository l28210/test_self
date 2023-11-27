// Description
// 之前大家学习过结构体的简单应用了。现在要开始学习结构体的一些高级应用了——链表。

// 链表的定义依赖于下列结构体：

// struct Node {
// 	struct Node* next;
// 	int value;
// };
// ​
// 链表是依靠一个一个节点连接而成：

//  _ _    _ _    _ _
// |v|n|->|v|n|->|v|n|->
// ​
// 其中v代表value,n存储着下一个节点的地址。

// 给出一串数字，大家要有序地插入到链表中。举个例子：5 1 3 4 在链表中的顺序为1 3 4 5。

// 函数的声明已经给出，请大家补全。

// void insert(struct Node** head, int num);

// void print_linklist(struct Node* head);

// void delete_linklist(struct Node* head);

// ​
// 其中insert是用来插入元素到链表中，print_linklist是从链表头输出到链表尾，delete_linklist是删除链表。

// 输入的第一行是数字个数 N。第二行是该串数字。输出链表的元素。1<=N<=1000

// Sample Input
// 4
// 5 1 3 4
// ​
// Sample Output
// 1 3 4 5
// 1 3 4 5
#include <stdio.h>
#include <stdlib.h> 
struct Node {
	struct Node* next;
	int value;
};

void insert(struct Node** head, int num);

void print_linklist(struct Node* head);

void delete_linklist(struct Node* head);

void insert(struct Node** head, int num) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = num;
    newNode->next = NULL;

    if (*head == NULL || num <= (*head)->value) {
        newNode->next = *head;
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL && current->next->value < num) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}
void print_linklist(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}

void delete_linklist(struct Node* head) {
    while (head != NULL) {
        struct Node* current = head;
        head = head->next;
        free(current);
    }
}

int main(void) {
	int n, num;
	scanf("%d", &n);

	struct Node* head = NULL;
	while (n--) {
		scanf("%d", &num);
		insert(&head, num);
	}
	print_linklist(head);
	delete_linklist(head);

}
