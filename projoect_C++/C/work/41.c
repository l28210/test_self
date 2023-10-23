// 41
// 题目描述
// 根据主函数和头文件提示，编写子函数char *revStr(char *s);，其功能为：将字符串 s 逆序。

// 输入格式
// 输入一个长度不超过100的字符串 s。

// 输出格式
// 输出字符串 s 的逆序。

// 输入样例1
// apple
// ​
// 输出样例1
// elppa
// ​
// 输入样例2
// programming
// ​
// 输出样例2
// gnimmargrop
// ​
// 提示
// 若需要返回局部变量地址，需将其定义为static类型；

#include <stdio.h>
#include<string.h>
#define MAX_SIZE 100 // Maximum string size


char *revStr(char *s) {
    int length = strlen(s);
    for (int i = 0; i < length / 2; i++) {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
    return s;
}

int main()
{
	char str[MAX_SIZE];
	char *s = str;
	char *sr;

	/* Input string from user */
	// printf("Enter the string: ");
    scanf("%s",s);

	sr = revStr(s);

	printf("%s", sr);

	return 0;
}