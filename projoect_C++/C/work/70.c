#include <stdio.h>

#define ROW 3
#define COL 3
#define N 3
// 输入矩阵
void matrixInput(int *mat) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &mat[i * N + j]);
        }
    }
}

// 输出矩阵
void matrixPrint(int *mat) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", mat[i * N + j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// 相乘矩阵
void matrixMultiply(int *mat1, int *mat2, int *res) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            res[i * N + j] = 0;
            for (int k = 0; k < N; k++) {
                res[i * N + j] += mat1[i * N + k] * mat2[k * N + j];
            }
        }
    }
}

int main()
{
	int mat1[ROW][COL];
	int mat2[ROW][COL];
	int product[ROW][COL];


	/*
	 * Input elements in matrices.
	 */
	// printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
	matrixInput(mat1);

	// printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
	matrixInput(mat2);


	// Call function to multiply both matrices
	matrixMultiply(mat1, mat2, product);


	// Print product of both matrix
	matrixPrint(product);

	return 0;
}