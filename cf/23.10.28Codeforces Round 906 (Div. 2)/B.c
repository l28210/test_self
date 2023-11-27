// B. Qingshan Loves Strings
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Qingshan has a string 𝑠
// , while Daniel has a string 𝑡
// . Both strings only contain 𝟶
//  and 𝟷
// .

// A string 𝑎
//  of length 𝑘
//  is good if and only if

// 𝑎𝑖≠𝑎𝑖+1
//  for all 𝑖=1,2,…,𝑘−1
// .
// For example, 𝟷
// , 𝟷𝟶𝟷
// , 𝟶𝟷𝟶𝟷
//  are good, while 𝟷𝟷
// , 𝟷𝟶𝟶𝟷
// , 𝟶𝟶𝟷𝟷𝟶𝟶
//  are not good.

// Qingshan wants to make 𝑠
//  good. To do this, she can do the following operation any number of times (possibly, zero):

// insert 𝑡
//  to any position of 𝑠
//  (getting a new 𝑠
// ).
// Please tell Qingshan if it is possible to make 𝑠
//  good.

// Input
// The input consists of multiple test cases. The first line contains a single integer 𝑡
//  (1≤𝑡≤2000
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains two integers 𝑛
//  and 𝑚
//  (1≤𝑛,𝑚≤50
// ) — the length of the strings 𝑠
//  and 𝑡
// , respectively.

// The second line of each test case contains a string 𝑠
//  of length 𝑛
// .

// The third line of each test case contains a string 𝑡
//  of length 𝑚
// .

// It is guaranteed that 𝑠
//  and 𝑡
//  only contain 𝟶
//  and 𝟷
// .

// Output
// For each test case, print "YES" (without quotes), if it is possible to make 𝑠
//  good, and "NO" (without quotes) otherwise.

// You can print letters in any case (upper or lower).

// Example
// inputCopy
// 5
// 1 1
// 1
// 0
// 3 3
// 111
// 010
// 3 2
// 111
// 00
// 6 7
// 101100
// 1010101
// 10 2
// 1001001000
// 10
// outputCopy
// Yes
// Yes
// No
// No
// No
// Note
// In the first test case, 𝑠
//  is good initially, so you can get a good 𝑠
//  by doing zero operations.

// In the second test case, you can do the following two operations (the inserted string 𝑡
//  is underlined):

// 𝟷𝟶𝟷𝟶⎯⎯⎯⎯⎯⎯𝟷𝟷
// 𝟷𝟶𝟷𝟶𝟷𝟶𝟷𝟶⎯⎯⎯⎯⎯⎯𝟷
// and get 𝑠=𝟷𝟶𝟷𝟶𝟷𝟶𝟷𝟶𝟷
// , which is good.

// In the third test case, there is no way to make 𝑠
//  good after any number of operations.


#include<stdio.h>
#include<string.h>
int test(char *t,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(t[i]==t[i+1])
        {
            return 0;//不是good
        }

    }
    return 1;
}
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        char s[50],t[50];
        int m,n;
        scanf("%d %d",&m,&n);
        scanf("%s",s);
        scanf("%s",t);
        //s为good
        if(test(s,m)==1)
            printf("Yes\n");
        //t首尾不同或本身不是good时，无法插入,需要s本身good
        else if(t[0]!=t[n-1]||test(t,n)==0)
        {
            printf("No\n");
        }
        //t首尾相同且为good
        else
        {
            char split=t[0];//分割字符
            for(int j=0;j<m-1;j++)
            {
                //找到重复位置
                if(s[j]==s[j+1])
                {
                    if(s[j]==split)
                    {
                        printf("No\n");
                        break;
                    }
                }
                if(j==m-2)
                {
                    printf("Yes\n");
                }
            }
        }
    }
    return 0;
}