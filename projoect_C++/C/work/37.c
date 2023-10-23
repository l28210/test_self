// Description
// split是许多编程语言中字符串的常用函数。给定一个字符串和一个分隔符号，split函数能够根据分隔符将原字符串切片。

// 题目保证给定的原字符串长度不会超过200，分割符长度不会超过10，分割之后的字符串数量不会超过20个。要求输出所有切分后的分割字符串。

// Input
// 两行。第一行为一个字符串，表示原字符串；第二行为一个字符串，表示分割字符串。字符串内的字符可能为大小写字母、数字以及空格。

// Outupt
// n行，每一行为原字符串根据分隔符切片后的结果。如果为空，则输出空行。

// Sample Input
// oossoo1oo56oo667oo3124oo41
// oo
// ​
// Sample Output

// ss
// 1
// 56
// 667
// 3124
// 41

// ss
// 1
// 56
// 667
// 3124
// 41

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N1 201 // 字符串长度最长为200
#define N2 11 // 分隔符最长为10
#define COUNT 20 // 分隔后字符串数量最多为20

/*
函数：split
输入：原字符串origin，分隔符sep，以及存放结果的二维输入result
    result的使用方法：例如strcpy(result[i],aimStr)可以将aimStr的值导入到result的第i个位置，其中aimStr为计算出的字符串。之后调整i即可
输出：分隔出的字符串的数量。
功能：
    根据分隔符sep切分给定的原字符串origin，并返回分隔后的字符串的数量。
    举个例子："123045607890"，分隔符为"0"，则返回值为4，result={"123","456","789",""}
*/
int split(char origin[], char sep[],char (*result)[N1])
{

    //分割符为单个字符
    // char *token = strtok(origin, sep);
    // int count = 0;
    // while (token != NULL && count < COUNT) {
    //     strcpy(result[count], token);
    //     token = strtok(NULL, sep);//指向下一个子字符串
    //     count++;
    // }
    // return count;



    //分割符为多个字符
    int count = 0;
    char *token = strstr(origin, sep);

    while (token != NULL && count < COUNT) {
        strncpy(result[count], origin, token - origin);
        result[count][token - origin] = '\0';
        origin = token + strlen(sep);
        token = strstr(origin, sep);
        count++;
    }

    if (count < COUNT) {
        strcpy(result[count], origin);
        count++;
    }

    return count;
}

int main(void){
    // freopen("test.txt","r",stdin);
    // freopen("ans2.txt","w",stdout);
    char origin[N1];
    char sep[N2];
    char result[COUNT][N1];

    scanf("%s %s",origin,sep);
    int n_result = split(origin,sep,result);
    int i;
    for(i=0;i<n_result;i++){
        printf("%s\n",result[i]);
    }
    return 0;
}
