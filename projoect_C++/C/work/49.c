// 题目
// 某某公司非常感谢您对贵公司工资系统开发提供的帮助，现公司需要进行员工信息系统升级，以帮助管理员工信息，功能接口如下：
// 1 添加员工
// 2 删除员工：删除指定id的员工，当员工id不存在时不进行处理
// 3 员工最大年龄，没有员工时，返回0。
// 4 员工平均薪资(输出向下取整的整数)，没有员工时,返回0。
// 5 员工总人数
// 总共有n条指令（0<n<=100）,对于添加、删除员工指令结束后系统都会输出当前公司员工数量。

// 输入
// 输入n代表有n条指令(0<n<=100)
// 接下来有n条指令的相关操作 order（1<=order<=5）,当order为1或2时会有额外的录入，具体如下：
// order 为1：输入员工信息（员工id（保证id不重复），员工年龄，员工工资，员工姓名（姓名长度不超过10））。
// order 为2：输入id号

// 输出
// 由main函数中定义输出，同学接口过程不需要进行数据输出。

// 输入样例
// 6
// 1
// 969 26 13472 GFDuB
// 3
// 1
// 938 30 13056 iroAEjwc
// 4
// 5
// 2
// 969
// ​
// 输出样例
// 员工总数：1
// 员工最高年龄：26
// 员工总数：2
// 员工平均薪资：13264
// 员工总数：2
// 员工总数：1
// ​
// 提示
// 本示例中有6条指令，分别为添加员工、获取平均年龄、添加员工、获取平均薪资、获取员工总数、删除员工。
// 对于第二条指令，当orer为1时，输入员工信息 969 26 13472 GFDuB
// 对于第六条指令，order为2时，输入需要删除员工的员工号 969


#include <stdio.h>
#include<stdlib.h>

#ifndef _TEST_H
#define _TEST_H

typedef struct Staff{
    int id;
    int age;
    int wages;
    char name[11];
    struct Staff *next;
}staff;
void insertStaff(staff *head);
void deleteStaff(staff *head,int id);
int getTotalStaff(staff *head);
int getAvgWages(staff *head);
int getMaxAge(staff *head);

#endif


int main()
{
    int orderCount;
    int id;
    scanf("%d",&orderCount);
    staff *head = (staff *)malloc(sizeof(staff)),*p,*q;
    head->next = NULL;
    //输入基本员工树
    while(orderCount--){
        int order;
        scanf("%d",&order);
        switch(order){
        case 1:
            //录入员工
            insertStaff(head);
            printf("员工总数：%d\n",getTotalStaff(head));
            break;
        case 2:
            scanf("%d",&id);
            //删除员工
            deleteStaff(head,id);
            printf("员工总数：%d\n",getTotalStaff(head));
            break;
        case 3:
            //最高年龄
            printf("员工最高年龄：%d\n",getMaxAge(head));
            break;
        case 4:
            //平均薪资,
            printf("员工平均薪资：%d\n",getAvgWages(head));
            break;
        case 5:
            //员工总数
            printf("员工总数：%d\n",getTotalStaff(head));
        }
    }
    p = head->next;
    while(p!=NULL){
        q = p;
        p = p->next;
        free(q);
    }
    if(head!=NULL) free(head);
    return 0;
}
