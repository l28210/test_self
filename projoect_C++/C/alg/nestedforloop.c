#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/* 双层 for 循环 */
char *nestedForLoop(int n) {
    // n * n 为对应点数量，"(i, j), " 对应字符串长最大为 6+10*2，加上最后一个空字符 \0 的额外空间
    int size = n * n * 26 + 1;
    char *res = malloc(size * sizeof(char));
    // 循环 i = 1, 2, ..., n-1, n
    for (int i = 1; i <= n; i++) {
        // 循环 j = 1, 2, ..., n-1, n
        for (int j = 1; j <= n; j++) {
            char tmp[26];
            snprintf(tmp, sizeof(tmp), "(%d, %d), ", i, j);
            strncat(res, tmp, size - strlen(res) - 1);
        }
    }
    return res;
}
//snprintf() 是一个 C 语言标准库函数，用于格式化输出字符串，并将结果写入到指定的缓冲区
//与 sprintf() 不同的是，snprintf() 会限制输出的字符数，避免缓冲区溢出
//int snprintf ( char * str, size_t size, const char * format, ... );
//str -- 目标字符串，用于存储格式化后的字符串的字符数组的指针。
// size -- 字符数组的大小。
// format -- 格式化字符串。
// ... -- 可变参数，可变数量的参数根据 format 中的格式化指令进行格式化。
//如果格式化后的字符串长度超过了 size-1，则 snprintf() 只会写入 size-1 个字符，并在字符串的末尾添加一个空字符（\0）以表示字符串的结束。




//char* My_strcat(char* dest, const char* src)
//char* My_strncat(char* dest, const char* src, int n)
//strncat用来连接源字符串的前n个字符到目标字符串后


int main()
{
    printf("%s",nestedForLoop(5));
    putchar('\n');
    return 0;
}