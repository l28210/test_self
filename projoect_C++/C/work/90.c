#include <stdio.h>
#include <string.h>

int main() {
    char A[10001]; // 假设字符串A最多有10000个字符
    int B[10001]; // 假设数列B最多有10000个元素
    int i, j;

    scanf("%s", A);
    getchar(); // 消耗换行符
    char c;
    i = 0;

    for(int i=0;i<strlen(A);i++)
        scanf("%d",&B[i]);

    int A_length = strlen(A);

    for (j = 0; j < A_length; j++) {
        char original_char = A[j];
        char new_char;

        if (original_char >= 'a' && original_char <= 'z') {
            new_char = 'a' + ((original_char - 'a' + B[j]) % 26);
        } else if (original_char >= 'A' && original_char <= 'Z') {
            new_char = 'A' + ((original_char - 'A' + B[j]) % 26);
        } else {
            new_char = original_char;
        }

        A[j] = new_char;
    }

    printf("%s\n", A);

    return 0;
}
