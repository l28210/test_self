
// 45
// 题目描述
// 根据主函数和头文件提示，编写子函数selectionSort及swap对同学们的成绩按照从高到低的顺序进行排序，总成绩相同则以学号为准升序排列；

// 输入输出
// 输入输出格式
// 输入多行四列数据，每行数据分别为单个同学的学号，三科成绩；

// 输入学号为-1的行数据结束；

// 输出输出样例
// 输入1：

// 202000 85 81 69
// 202001 36 63 64
// 202002 63 54 86
// 202003 53 44 100
// 202004 55 69 39
// 202005 73 83 91
// 202006 41 72 73
// 202007 61 90 60
// 202008 54 90 25
// 202009 67 100 25
// -1 0 0 0
// ​
// 输出1：

// Original grades:
// stuNum   math       english    computer   total
// 202000     85         81         69         235
// 202001     36         63         64         163
// 202002     63         54         86         203
// 202003     53         44         100        197
// 202004     55         69         39         163
// 202005     73         83         91         247
// 202006     41         72         73         186
// 202007     61         90         60         211
// 202008     54         90         25         169
// 202009     67         100        25         192
// ---------------------------------------------------
// descending sort by total grades:
// stuNum    Math      English    Computer   Total
// 202005     73         83         91         247
// 202000     85         81         69         235
// 202007     61         90         60         211
// 202002     63         54         86         203
// 202003     53         44         100        197
// 202009     67         100        25         192
// 202006     41         72         73         186
// 202008     54         90         25         169
// 202001     36         63         64         163
// 202004     55         69         39         163

// Original grades:
// stuNum   math       english    computer   total
// 202000     85         81         69         235
// 202001     36         63         64         163
// 202002     63         54         86         203
// 202003     53         44         100        197
// 202004     55         69         39         163
// 202005     73         83         91         247
// 202006     41         72         73         186
// 202007     61         90         60         211
// 202008     54         90         25         169
// 202009     67         100        25         192
// ---------------------------------------------------
// descending sort by total grades:
// stuNum    Math      English    Computer   Total
// 202005     73         83         91         247
// 202000     85         81         69         235
// 202007     61         90         60         211
// 202002     63         54         86         203
// 202003     53         44         100        197
// 202009     67         100        25         192
// 202006     41         72         73         186
// 202008     54         90         25         169
// 202001     36         63         64         163
// 202004     55         69         39         163

/*
* selectionSortPointer.c
*/

#include <stdio.h>
#define M  60
#define N  3

void selectionSort (int *nu, int(*p)[N], int *tot, int size);

int swap(int *p, int *q);
// 选择排序函数
void selectionSort(int *nu, int (*p)[N], int *tot, int size) {
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            // 首先比较总分，总分相同的情况下比较学号
            if (tot[j] > tot[maxIndex] || (tot[j] == tot[maxIndex] && nu[j] < nu[maxIndex])) {
                maxIndex = j;
            }
        }
        // 交换学号
        swap(&nu[i], &nu[maxIndex]);
        // 交换成绩
        for (int k = 0; k < N; k++) {
            swap(&p[i][k], &p[maxIndex][k]);
        }
        swap(&tot[i], &tot[maxIndex]);
    }
}

// 交换两个整数的函数
int swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
    return 0;
}


int input(int *nu, int(*p)[N], int *tot);
void print(const int *nu, const int(*p)[N], const int *tot, int size);

int main(void)
{
	int stuNumber = 0;
	int stuNum[M], grade[M][N], total[M] = {0};

	//input and total
	//printf("please input number(-1 for ends)");
	//printf("and math,english,computer grade:\n");
	stuNumber = input(stuNum, grade, total);

	if (stuNumber == 0)
		return 0;   

	printf("Original grades:\n");
	printf("stuNum   math       english    computer   total\n");
	print(stuNum, grade, total, stuNumber);
	printf("---------------------------------------------------\n");

	//selection sorting --- goal function
	selectionSort (stuNum, grade, total, stuNumber);

	//output sorting result
	printf("descending sort by total grades:\n");
	printf("stuNum    Math      English    Computer   Total\n");
	print(stuNum, grade, total, stuNumber);

	return 0;
}


int input(int *nu, int(*p)[N], int *tot)
{
	int i = 0, j = 0;
	int n, g[N];

	scanf("%d", &n);        
	for (j = 0; j < N; j++)
		scanf("%d", &g[j]);

	while (n != -1 && i < M)
	{
		*(nu + i) = n; 
		for (j = 0; j < N; j++)
		{
			*(*(p + i) + j) = g[j]; 
			*(tot + i) += g[j];
		}

		i++;

		scanf("%d", &n);    
		for (j = 0; j < N; j++)
			scanf("%d", &g[j]);
	}
	return i;
}


void print(const int *nu, const int(*p)[3], const int *tot, int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		printf("%-10d ", *(nu + i)); 
		for (j = 0; j < N; j++)
			printf("%-10d ", *(*(p + i) + j));
		printf("%-10d ", *(tot + i));
		printf("\n");
	}
}