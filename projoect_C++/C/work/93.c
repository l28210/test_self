// #include <stdio.h>
// #include<string.h>
// #include <stdlib.h>

// char *multiply(char *num1,char *num2)
// {
//     long long num=atoi(num1)*atoi(num2);
//     char* result = (char*)malloc(1000000000000000* sizeof(char));  // 分配足够的空间来保存乘积的字符串

//     sprintf(result,"%lld",num);
//     return result;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* multiply(const char* num1, const char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len = len1 + len2;

    int* result = (int*)malloc(sizeof(int) * len);
    memset(result, 0, sizeof(int) * len);

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    char* product = (char*)malloc(sizeof(char) * (len + 1));
    int i = 0;
    while (i < len && result[i] == 0) {
        i++;
    }

    if (i == len) {
        product[0] = '0';
        product[1] = '\0';
    } else {
        for (int j = i; j < len; j++) {
            product[j - i] = result[j] + '0';
        }
        product[len - i] = '\0';
    }

    free(result);
    return product;
}

int main(){
	char num1[102];
    char num2[102];
    scanf("%s", num1);
    scanf("%s", num2);
    char* num = multiply(num1, num2);
    printf("%s", num);
    free(num);
	return 0;
}