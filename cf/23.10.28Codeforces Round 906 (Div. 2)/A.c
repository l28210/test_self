// A. Doremy's Paint 3
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// An array 𝑏1,𝑏2,…,𝑏𝑛
//  of positive integers is good if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a 𝑘
//  such that 𝑏1+𝑏2=𝑏2+𝑏3=…=𝑏𝑛−1+𝑏𝑛=𝑘
// .

// Doremy has an array 𝑎
//  of length 𝑛
// . Now Doremy can permute its elements (change their order) however she wants. Determine if she can make the array good.

// Input
// The input consists of multiple test cases. The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains a single integer 𝑛
//  (2≤𝑛≤100
// ) — the length of the array 𝑎
// .

// The second line of each test case contains 𝑛
//  integers 𝑎1,𝑎2,…,𝑎𝑛
//  (1≤𝑎𝑖≤105
// ).

// There are no constraints on the sum of 𝑛
//  over all test cases.

// Output
// For each test case, print "Yes" (without quotes), if it is possible to make the array good, and "No" (without quotes) otherwise.

// You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

// Example
// inputCopy
// 5
// 2
// 8 9
// 3
// 1 1 2
// 4
// 1 1 4 5
// 5
// 2 3 3 3 3
// 4
// 100000 100000 100000 100000
// outputCopy
// Yes
// Yes
// No
// No
// Yes
// Note
// In the first test case, [8,9]
//  and [9,8]
//  are good.

// In the second test case, [1,2,1]
//  is good because 𝑎1+𝑎2=𝑎2+𝑎3=3
// .

// In the third test case, it can be shown that no permutation is good.
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int b[101];
        int n;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[j]);
        }
        if(n==2)
            printf("Yes\n");
        else if(n==3)
        {
            if(b[1]!=b[0]&&b[2]!=b[0]&&b[2]!=b[1])
                printf("No\n");
            else
                printf("Yes\n");
        }
        else
        {
            // if(n%2==0)
            // {

            
            int num=b[0];
            int ui=0;
            for(int m=0;m<n;m++)
            {
                if(b[m]!=num)
                {
                    break;
                    
                    
                }
                if(m==n-1&&b[m]==num)
                {
                    printf("Yes\n");
                    goto out;
                }
            }
            



            // }
            //偶数次
            // else
            // {
                int res=0;
                int num1=b[0];
                int num2=0;
                int count1=0,count2=0;
                for(int m=0;m<n;m++)
                {
                    if(b[m]!=num1)
                    {
                        num2=b[m];
                        break;
                    }
                }
                for(int p=0;p<n;p++)
                {
                    if(b[p]==num1)
                    {
                        count1++;
                    }
                    if(b[p]==num2)
                    {
                        count2++;
                    }
                    if(b[p]!=num1&&b[p]!=num2)
                    {
                        printf("No\n");
                        res=1;
                        goto out1;
                    }

                }
                int va=count1-count2;
                if((va==1||va==-1)&&res==0)
                    printf("Yes\n");
                else if(va==0&&res==0)
                    printf("Yes\n");
                else
                    printf("No\n");
            // }
            //奇数次
        }
        out:
        ;
        out1:
        ;

    }
    
    return 0;
}