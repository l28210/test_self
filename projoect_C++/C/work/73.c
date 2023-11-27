// 题目描述
// 时间复杂度是用来衡量算法操作次数和输入规模之间的关系的指标，在计算机科中，时间复杂度是一个函数，它定性描述该算法的运行时间。时间复杂度常用T(n)符号表述,常见的O(n)称为算法运行时间的上界，也就是最坏情况下的时间复杂度。若对于一个算法，T(n)的上界与输入大小无关，则称其具有 常数时间 ，记作O(1)时间。一个例子是访问数组中的单个元素，因为访问它只需要一条指令。但是，找到无序数组中的最小元素则不是，因为这需要遍历所有元素来找出最小值，这时T(n)的上界就是O(n)。请你在线性时间复杂度O(n)内(即要求遍历一趟链表)，实现删除链表倒数第k个结点。

// 输入输出
// 输入输出格式
// 输入为两行

// 第一行有两个整数，链表结点个数n，被删除结点位序k

// 第二行有n个ElementType型数据

// 输入输出样例
// 输入1：

// 4 3
// -1 2 4 6
// ​
// 输出1：

// -1 4 6
// ​
// 输入2：

// 6 3
// 1 3 7 2 -10 5
// ​
// 输出2：

// 1 3 7 -10 5
// ​
// 提示
// 时间限制在500ms，请尽量用时间复杂度为O(n)的算法实现
#include <stdio.h>
#include <stdlib.h>

# include <stdbool.h>

typedef int ElementType;// typedef在C语言中可用来为数据类型定义别名
//typedef double ElementType;
typedef struct LNode* List;   
struct LNode{
    ElementType data; // 此处等价于int Data；
    List next;
};

/*基本操作集*/
List makeEmpty();//初始化一个空的链表，生成仅含第0个节点为头空结点的空链表
List findKth (int k, List ptrL);//根据位序k，返回相应结点指针，k的范围[0,length(ptrL)]
List findX(ElementType X, List ptrL);//链表ptrL中查找X的第一次出现的结点指针
bool deleteKth(int k, List ptrL); //删除指定位序k的结点,k的范围[1,length(ptrL)]
bool insert(ElementType X, int k, List ptrL); //在位序k前插入一个新结点，使新结点在位序k, k的范围[1,length(ptrL)+1]
int length(List L);//返回线性表L的长度n，头空结点不计入长度

/*其他操作（可由基本操作集实现）*/
List createLink(int n, ElementType* arr); // 将arr数组中的n个数按位序从小到大顺序创建链表
void destroyLink(List ptrL);//销毁链表，释放内存
void printLink(List ptrL);//按从头至尾的顺序输出链表每个节点的val值
bool deleteKthEnd(int k, List ptrL);

// 删除指定位序 k 的结点，k 的范围 [1, length(ptrL)]
bool deleteKth(int k, List ptrL) {
    if (k < 1 || k > length(ptrL)) {
        return false; // 无效的 k 值
    }

    List prev = findKth(k - 1, ptrL); // 找到位序 k 前一个节点
    List curr = prev->next; // 待删除节点

    prev->next = curr->next; // 删除节点

    free(curr); // 释放删除的节点

    return true;
}

// 在位序 k 前插入一个新节点，使新节点在位序 k，k 的范围 [1, length(ptrL)+1]
bool insert(ElementType X, int k, List ptrL) {
    if (k < 1 || k > length(ptrL) + 1) {
        return false; // 无效的 k 值
    }

    List prev = findKth(k - 1, ptrL); // 找到位序 k 前一个节点

    List newNode = (List)malloc(sizeof(struct LNode));
    newNode->data = X;
    newNode->next = prev->next;
    prev->next = newNode;

    return true;
}

// 删除链表倒数第 k 个节点
bool deleteKthEnd(int k, List ptrL) {
    int len = length(ptrL);

    if (k < 1 || k > len) {
        return false; // 无效的 k 值
    }

    int kFromStart = len - k + 1; // 计算从头开始的位序

    return deleteKth(kFromStart, ptrL);
}

/*基本操作集*/

/*初始化一个空的链表，第0个节点为空节点*/
List makeEmpty(){
    List L;
    L = (List)malloc(sizeof(struct LNode));
    L->next = NULL;
    return L;
}
/*按位序查找，根据位序K，返回相应结点指针,有效值为[0,length(ptrL)]*/
List findKth (int k, List ptrL){
    List p = ptrL;
    int i = 0;
    //int n = length(List);
    if(k < 0 || k > length(ptrL)){//k 的有效值为[0,length(ptrL)]
		return NULL;
    }
	if(k == 0)
		return ptrL;
	while(p->next != NULL)
    {
        p = p->next;
        ++i;
        if(i==k)
        	return p;
    }
    return NULL;
}
/*按值查找，在链表ptrL中查找X的第一次的结点指针*/
List findX(ElementType X, List ptrL)
{
	int i = 0;
	List p;
	p = ptrL;
	while(p->next != NULL)
	{
		p = p->next;
		++i;
		if(p->data == X)
			return p;
	}	
	return NULL;//链表L中未出现X
}
/*返回线性表L的长度n*/
int length(List ptrL)//只有头结点的链表为空
{
	int i = 0;
	List p;
	p = ptrL;
	while(p->next != NULL)
	{
		p = p->next;
		++i;
	}
	return i;
}


/*其他操作（可由基本操作集实现）*/

/*将arr数组中的n个数按位序从小到大创建链表*/
List createLink(int n, ElementType* arr)
{
	List L = makeEmpty();//创建空链表
	int i;
	List p = L;
	for(i = 0; i < n; i++)
	{
		List s = (List)malloc(sizeof(struct LNode));
		s->data = arr[i];
		s->next = NULL;
		p->next = s;
		p = s;
	}
	return L;
}

/*销毁链表，释放内存*/
void destroyLink(List ptrL)
{
	List p = ptrL;
	List s = p->next;
	while(s != NULL){
		free(p);
		p = s;
		s = s->next;	
	}
	free(p);
}

/*按从头至尾的顺序输出链表每个结点的data值*/
void printLink(List ptrL)
{
	List p = ptrL;
	int n = length(ptrL);
	while(n--)
	{
		p = p->next;
		printf("%d ", p->data);	
	}
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int* arr = (int*) malloc(sizeof(int)*n);
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
    }
    List ptrL = createLink(n,arr);
    deleteKthEnd(k,ptrL);
    printLink(ptrL);
    free(arr);
    destroyLink(ptrL);
    return 0;
}