#include<stdio.h>

/* 递归 */
int recur(int n) {
    // 终止条件
    if (n == 1)
        return 1;
    // // 递：递归调用
    // int res = recur(n - 1);
    // // 归：返回结果
    // return n + res;

    return n+recur(n-1);
    
}
//1+...+n

/* 尾递归 */
int tailRecur(int n, int res) {
    // 终止条件
    if (n == 0)
        return res;
    // 尾递归调用
    return tailRecur(n - 1, res + n);
}


int main()
{
    int x;
    scanf("%d",&x);
    printf("%d\n",recur(x));
    return 0;
}