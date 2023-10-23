// 题目
// 定义一个结构体变量(包括年,月、日)。计算该日在本年中是第几天。

// 输入
// 第一行输入n代表n个日期。
// 接下来输入n行，每行输入 年 月 日 三个数。

// 输出
// 输出n行，每一行相应输出该日期在本年中是第几天。

// 输入样例
// 3
// 1998 08 07
// 2000 09 23
// 2003 12 23

// 输出样例
// 219
// 267
// 357

// 提示
// 注意闰年问题。

#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfYear(struct Date date) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(date.year)) {
        daysInMonth[2] = 29;  // February has 29 days in a leap year
    }

    int dayCount = date.day;
    for (int month = 1; month < date.month; month++) {
        dayCount += daysInMonth[month];
    }

    return dayCount;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        struct Date date;
        scanf("%d %d %d", &date.year, &date.month, &date.day);
        int dayCount = dayOfYear(date);
        printf("%d\n", dayCount);
    }

    return 0;
}
