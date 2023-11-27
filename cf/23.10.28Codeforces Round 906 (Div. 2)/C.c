// C. Qingshan Loves Strings 2
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Qingshan has a string 𝑠
//  which only contains 𝟶
//  and 𝟷
// .

// A string 𝑎
//  of length 𝑘
//  is good if and only if

// 𝑎𝑖≠𝑎𝑘−𝑖+1
//  for all 𝑖=1,2,…,𝑘
// .
// For Div. 2 contestants, note that this condition is different from the condition in problem B.

// For example, 𝟷𝟶
// , 𝟷𝟶𝟷𝟶
// , 𝟷𝟷𝟷𝟶𝟶𝟶
//  are good, while 𝟷𝟷
// , 𝟷𝟶𝟷
// , 𝟶𝟶𝟷
// , 𝟶𝟶𝟷𝟷𝟶𝟶
//  are not good.

// Qingshan wants to make 𝑠
//  good. To do this, she can do the following operation at most 300
//  times (possibly, zero):

// insert 𝟶𝟷
//  to any position of 𝑠
//  (getting a new 𝑠
// ).
// Please tell Qingshan if it is possible to make 𝑠
//  good. If it is possible, print a sequence of operations that makes 𝑠
//  good.

// Input
// The input consists of multiple test cases. The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains a single integer 𝑛
//  (1≤𝑛≤100
// ) — the length of string 𝑠
// , respectively.

// The second line of each test case contains a string 𝑠
//  with length 𝑛
// .

// It is guaranteed that 𝑠
//  only consists of 𝟶
//  and 𝟷
// .

// Output
// For each test case, if it impossible to make 𝑠
//  good, output −1
// .

// Otherwise, output 𝑝
//  (0≤𝑝≤300
// ) — the number of operations, in the first line.

// Then, output 𝑝
//  integers in the second line. The 𝑖
// -th integer should be an index 𝑥𝑖
//  (0≤𝑥𝑖≤𝑛+2𝑖−2
// ) — the position where you want to insert 𝟶𝟷
//  in the current 𝑠
// . If 𝑥𝑖=0
// , you insert 𝟶𝟷
//  at the beginning of 𝑠
// . Otherwise, you insert 𝟶𝟷
//  immediately after the 𝑥𝑖
// -th character of 𝑠
// .

// We can show that under the constraints in this problem, if an answer exists, there is always an answer that requires at most 300
//  operations.

// Example
// inputCopy
// 6
// 2
// 01
// 3
// 000
// 4
// 1111
// 6
// 001110
// 10
// 0111001100
// 3
// 001
// outputCopy
// 0

// -1
// -1
// 2
// 6 7
// 1
// 10
// -1
// Note
// In the first test case, you can do zero operations and get 𝑠=𝟶𝟷
// , which is good.

// Another valid solution is to do one operation: (the inserted 𝟶𝟷
//  is underlined)

// 𝟶𝟶𝟷⎯⎯⎯⎯𝟷
// and get 𝑠=𝟶𝟶𝟷𝟷
// , which is good.

// In the second and the third test case, it is impossible to make 𝑠
//  good.

// In the fourth test case, you can do two operations:

// 𝟶𝟶𝟷𝟷𝟷𝟶𝟶𝟷⎯⎯⎯⎯
// 𝟶𝟶𝟷𝟷𝟷𝟶𝟶𝟶𝟷⎯⎯⎯⎯𝟷
// and get 𝑠=𝟶𝟶𝟷𝟷𝟷𝟶𝟶𝟶𝟷𝟷
// , which is good.



//思路：对于首尾不同的字符串，直接缩进，去掉首部和尾部
//相同时：都为1在开头插入01去掉尾部
//都为0,在尾部插入01去掉头部

#include<stdio.h>
//在k处插入01
void insert(char *str,int n,int k)
{
    //将k之后的字符后移两位
    for(int m=n-1;m>k;m--)
    {
        str[m+2]=str[m];

    }
    str[k+1]='0';
    str[k+2]='1';

}
int test(char *str,int n)
{
    for(int m=0;m<n/2;m++)
    {
        if(str[m]==str[n-m+1])
        {
            return 0;//不是good
        }
        
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        char str[100];
        scanf("%d",&n);
        scanf("%s",str);
        int start=0;
        int end=n-1;
        //奇数时
        if(n%2!=0)
            printf("-1\n");
        else
        {

        }
    }
    return 0;
}