
// 47
// 题目
// 某某公司近期在进行工资统计，需要统计n位员工中的工资信息，邀请你帮忙写出一个程序，帮助其输出最高工资信息，并将该员工的信息放到表头，其他员工信息的相对位置不发生改变。

// 输入
// 输入n代表n位员工(0<n<100)
// 接下来输入n行，每行输入员工id（保证id不重复），员工年龄，员工工资（保证工资不重复），员工姓名（姓名长度不超过10）

// 输出
// 总共输出n+1行，第一行n位员工中的最高工资。
// 接下来的n行输出最新名单的员工id号。

// 输入样例

// 3
// 1 44 12270 NUtrS
// 3 38 12411 VZnkV
// 2 41 14368 RmtIT

// ​
// 输出样例

// 14368
// 2
// 1
// 3

// ​
// 提示
// 输出的末尾行应当包含一个换行符（\n）；
// 以样例1为例，输入员工信息的id依次为 1,3,2。最高工资员工id为2，因此调整到表头前，id号1和3的相对位置不变，因此输出 2 1 3。





#include <stdio.h>
#include <stdlib.h>
#ifndef _TEST_H
#define _TEST_H
typedef struct Staff{
    int id;
    int age;
    int wages;
    char name[11];
    struct Staff *next;
}staff;
void registerStaff(int n,staff *head);
void getMaxWages(staff *head);

// 创建员工链表
void registerStaff(int n, staff* head) {
    staff* tail = head;

    for (int i = 0; i < n; i++) {
        staff* newStaff = (staff*)malloc(sizeof(staff));//这个内存块用于存储新员工的信息，每次循环开始重新定义一个新地址
        scanf("%d %d %d %s", &newStaff->id, &newStaff->age, &newStaff->wages, newStaff->name);
        newStaff->next = NULL;//在创建新员工节点后，将其 next 指针初始化为 NULL，以确保它成为链表的最后一个节点
        //以上创建了一个新员工信息
        tail->next = newStaff;//将新员工节点 newStaff 添加到链表中
        tail = newStaff;//将 tail 指针移动到新员工节点 newStaff
        //将新员工信息加入链表
    }
}

// 找到工资最高的员工并移到表头
void getMaxWages(staff* head) {
    staff* maxWagesStaff = NULL;
    staff* current = head->next;

    while (current != NULL) {
        if (maxWagesStaff == NULL || current->wages > maxWagesStaff->wages) {
            maxWagesStaff = current;
        }
        current = current->next;
    }

    // 如果找到了工资最高的员工
    if (maxWagesStaff != NULL) {
        //创建一个名为 prev 的辅助指针，初始化为链表的头节点 head。prev 的目的是在链表中找到 maxWagesStaff 的前一个节点，以便将其从链表中断开
        staff* prev = head;
        while (prev->next != maxWagesStaff) {
            prev = prev->next;
        }
        //将 prev->next 指向 maxWagesStaff 的下一个节点，断开链表
        prev->next = maxWagesStaff->next;
        //将 maxWagesStaff 的 next 指针指向原来表头节点 head 的下一个节点，将 maxWagesStaff 插入到表头之前，以便它成为新的表头
        maxWagesStaff->next = head->next;
        //将 head->next 指向 maxWagesStaff，确保 maxWagesStaff 成为新的链表表头
        head->next = maxWagesStaff;
    }
}
#endif
int main()
{
    int n;
    staff *head = (staff*)malloc(sizeof(staff));
    head->next = NULL;
    staff *p;
    staff *q;
    scanf("%d",&n);
    registerStaff(n,head);
    getMaxWages(head);
    p = head->next;
    printf("%d\n",p->wages);
    while(p!=NULL){
        printf("%d\n",p->id);
        q = p;
        p = p->next;
        free(q);
    }
    free(head);
    return 0;
}