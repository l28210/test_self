// 题目描述
// 编写子函数Transpose，利用指针数组实现矩阵转置功能

// 输入格式
// 输入 3×3 矩阵，矩阵的每个元素都为 int 型。

// 输出格式
// 输出转置后的矩阵 3×3 的矩阵。

// 输入样例1
// 1 2 3
// 4 5 6
// 7 8 9
// ​
// 输出样例1
// 1 4 7
// 2 5 8
// 3 6 9
// ​
// 输入样例2
// -2 3 5
// 8 -4 2
// 0 3 -1
// ​
// 输出样例2
// -2 8 0
// 3 -4 3
// 5 2 -1
// -2 8 0
// 3 -4 3
// 5 2 -1



// #include<stdio.h>

// int main()
// {
//     int m[3][3];
//     for(int i=0;i<3;i++)
//         for(int j=0;j<3;j++)
//             scanf("%d",&m[i][j]);
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)    
//         {
//             printf("%d ",m[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include "stdio.h"
void Transpose(int (*matrix)[3])
{

    int swap=0;
    for (int i = 0; i < 3; i++)
        for (int j = i; j < 3; j++)
        {
            swap=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=swap;
        }
}

int main()
{
	int i, j, a[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	Transpose(a);

	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
