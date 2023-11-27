// 题目
// 一日，有一个人前来买瓜，他骑着摩托来到了水果摊前面，问摊主：“哥们儿，你这瓜多少钱一斤啊？” “两块钱一斤。”摊主的回答脱口而出，然后心里一紧，发现这场景似曾相识。
// “给我挑一个，它的重量x要满足ax 
// 2
//  +bx+c=0的。”
// 摊主问：“你这人是不是故意找茬”
// “你要是能挑出一个（有且仅有一个）瓜，那我肯定买”
// 摊主再三思索还是决定算出x来，但他算不出来，于是请求上过小学二年级的你来帮忙。
// PS:这是一个魔法的世界，负数重量的瓜是存在的

// 问题输入
// 三个整数a, b, c, 含义见题目
// （数据范围：1≤∣a∣,∣b∣,∣c∣,≤1000，且b 
// 2
//  −4ac>0）

// 问题输出
// 满足ax 
// 2
//  +bx+c=0的x 
// 1
// ​
//  和x 
// 2
// ​
//  ，保留两位小数，两个根不相等时先输出小的。

// 样例输入
// 1 2 1
// ​
// 样例输出
// -1.00 -1.00
// ​
// 提示
// 算开平方可以使用数学库函数，具体可以自己运行下面这段程序

// #include<math.h>
// #include<stdio.h>

// int main() {
// 	printf("9的0.5次方=%.2lf\nsqrt(9)=%.1lf",pow(9,0.5),sqrt(9));
// }
// ​

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive
    if (discriminant >= 0) {
        // Calculate the two roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        double temp=0;
        if(x1>x2)
        {
            temp=x2;
            x2=x1;
            x1=temp;
        }
        // Print the roots with two decimal places
        printf("%.2lf %.2lf\n", x1, x2);
    } else {
        // If the discriminant is non-positive, it means there are no real roots
        printf("No real roots\n");
    }

    return 0;
}
