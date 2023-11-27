#include <stdio.h>

#include <stdlib.h>
void swap(int* p, int* q);
void print_array(int* p, int size);
void print_matrix(int** mat, int row, int col);


void swap(int* p, int* q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void print_array(int* p, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void print_matrix(int** mat, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(void){
	int a = 1, b = 2;
	swap(&a, &b);
	printf("%d %d\n", a, b);
	
	int c[5] = {1, 2, 3, 4, 5};
	print_array(c, 5);
	
	int** d = (int**) malloc(sizeof(int*) * 3);
	int i, j;
	for(i = 0; i < 3; i++){
		*(d + i) = (int*) malloc(sizeof(int) * 3);
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			*(*(d + i) + j) = i + j + 1; 
		}
	}
	print_matrix(d, 3, 3);
	for(i = 0; i < 3; i++){
		free(*(d + i));
	}
	return 0;
}