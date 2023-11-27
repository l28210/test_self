/**
 * C program to sort an array using pointers.
 */

#include <stdio.h>
#include<stdlib.h>




// 常量定义
#define MAX_SIZE 100

// 输入数组
void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// 输出数组
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

// 升序排序比较函数
int Ascending(const void *num1, const void *num2) {
    return (*(int*)num1 - *(int*)num2);
}

// 降序排序比较函数
int Descending(const void *num1, const void *num2) {
    return (*(int*)num2 - *(int*)num1);
}

// 排序数组
void sort(int *arr, int size, int (*compare)(const void *, const void *)) {
    qsort(arr, size, sizeof(int), compare);
}



int main()
{
	int arr[MAX_SIZE];
	int size;

	/*
	 * Input array size and elements.
	 */
	//printf("Enter array size: ");
	scanf("%d", &size);
	//printf("Enter elements in array: ");
	inputArray(arr, size);


	printf("Elements before sorting: ");
	printArray(arr, size);


	// Sort and print sorted array in ascending order.
	printf("\nArray in ascending order: ");
	sort(arr, size, Ascending);
	printArray(arr, size);


	// Sort and print sorted array in descending order.
	printf("\nArray in descending order: ");
	sort(arr, size, Descending);
	printArray(arr, size);


	return 0;
}

