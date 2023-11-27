// C. Torn Lucky Ticket
// time limit per test2 seconds
// memory limit per test512 megabytes
// inputstandard input
// outputstandard output
// A ticket is a non-empty string of digits from 1
//  to 9
// .

// A lucky ticket is such a ticket that:

// it has an even length;
// the sum of digits in the first half is equal to the sum of digits in the second half.
// You are given 𝑛
//  ticket pieces 𝑠1,𝑠2,…,𝑠𝑛
// . How many pairs (𝑖,𝑗)
//  (for 1≤𝑖,𝑗≤𝑛
// ) are there such that 𝑠𝑖+𝑠𝑗
//  is a lucky ticket? Note that it's possible that 𝑖=𝑗
// .

// Here, the + operator denotes the concatenation of the two strings. For example, if 𝑠𝑖
//  is 13, and 𝑠𝑗
//  is 37, then 𝑠𝑖+𝑠𝑗
//  is 1337.

// Input
// The first line contains a single integer 𝑛
//  (1≤𝑛≤2⋅105
// ) — the number of ticket pieces.

// The second line contains 𝑛
//  non-empty strings 𝑠1,𝑠2,…,𝑠𝑛
// , each of length at most 5
//  and consisting only of digits from 1
//  to 9
// .

// Output
// Print a single integer — the number of pairs (𝑖,𝑗)
//  (for 1≤𝑖,𝑗≤𝑛
// ) such that 𝑠𝑖+𝑠𝑗
//  is a lucky ticket.

// Examples
// inputCopy
// 10
// 5 93746 59 3746 593 746 5937 46 59374 6
// outputCopy
// 20
// inputCopy
// 5
// 2 22 222 2222 22222
// outputCopy
// 13
// inputCopy
// 3
// 1 1 1
// outputCopy
// 9


#include<stdio.h>
#include<string.h>
int test(char *arr)
{
    int len=strlen(arr);
    if(len%2!=0)
    {
        return 0;
    }
    else
    {
        int sum1,sum2;
        sum1=0;
        sum2=0;
        for(int i=0;i<len/2;i++)
        {
            sum1+=arr[i];
            sum2+=arr[len-i-1];
        }
        if(sum1==sum2)
            return 1;
        else
            return 0;

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    // for(int i=0;i<n;i++)
    // {
        int a[200001];
        char s[40001][9];
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sprintf(s[j],"%d",a[j]);
        }

        
        for(int p=0;p<n;p++)
        {
            for(int q=0;q<n;q++)
            {
                char str[13]={0};
                strcpy(str,s[p]);
                strcat(str,s[q]);
                // str=s[p][0];
                // strcpy(str,s[q][0]);

                if(test(str)==1)
                    sum++;
            }
        }
                
    // }
    printf("%d\n",sum);
    return 0;
}