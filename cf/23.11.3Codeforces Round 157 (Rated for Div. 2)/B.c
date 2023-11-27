// B. Points and Minimum Distance
// time limit per test2 seconds
// memory limit per test512 megabytes
// inputstandard input
// outputstandard output
// You are given a sequence of integers 𝑎
//  of length 2𝑛
// . You have to split these 2𝑛
//  integers into 𝑛
//  pairs; each pair will represent the coordinates of a point on a plane. Each number from the sequence 𝑎
//  should become the 𝑥
//  or 𝑦
//  coordinate of exactly one point. Note that some points can be equal.

// After the points are formed, you have to choose a path 𝑠
//  that starts from one of these points, ends at one of these points, and visits all 𝑛
//  points at least once.

// The length of path 𝑠
//  is the sum of distances between all adjacent points on the path. In this problem, the distance between two points (𝑥1,𝑦1)
//  and (𝑥2,𝑦2)
//  is defined as |𝑥1−𝑥2|+|𝑦1−𝑦2|
// .

// Your task is to form 𝑛
//  points and choose a path 𝑠
//  in such a way that the length of path 𝑠
//  is minimized.

// Input
// The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of testcases.

// The first line of each testcase contains a single integer 𝑛
//  (2≤𝑛≤100
// ) — the number of points to be formed.

// The next line contains 2𝑛
//  integers 𝑎1,𝑎2,…,𝑎2𝑛
//  (0≤𝑎𝑖≤1000
// ) — the description of the sequence 𝑎
// .

// Output
// For each testcase, print the minimum possible length of path 𝑠
//  in the first line.

// In the 𝑖
// -th of the following 𝑛
//  lines, print two integers 𝑥𝑖
//  and 𝑦𝑖
//  — the coordinates of the point that needs to be visited at the 𝑖
// -th position.

// If there are multiple answers, print any of them.

// Example
// inputCopy
// 2
// 2
// 15 1 10 5
// 3
// 10 30 20 20 30 10
// outputCopy
// 9
// 10 1
// 15 5
// 20
// 20 20
// 10 30
// 10 30
// Note
// In the first testcase, for instance, you can form points (10,1)
//  and (15,5)
//  and start the path 𝑠
//  from the first point and end it at the second point. Then the length of the path will be |10−15|+|1−5|=5+4=9
// .

// In the second testcase, you can form points (20,20)
// , (10,30)
// , and (10,30)
// , and visit them in that exact order. Then the length of the path will be |20−10|+|20−30|+|10−10|+|30−30|=10+10+0+0=20
// .


#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[1001];
        for(int j=0;j<2*n;j++)
            scanf("%d",&a[j]);
        for(int p=2*n-1;p>0;p--)
        {
            
            for(int q=0;q<p;q++)
            {
                if(q==2*n-1)
                    continue;
                if(a[q]>a[q+1])
                {
                    int swap=a[q];
                    a[q]=a[q+1];
                    a[q+1]=swap;
                }
            }
        }

        // for(int p=0;p<2*n;p++)
        // {
        //     printf("%d ",a[p]);
        // }

        int sum1,sum2;
        sum1=0;
        sum2=0;
        for(int w=0;w<n-1;w++)
        {
            sum1+=a[w+1]-a[w];
            sum2+=a[w+n+1]-a[w+n];
        }
        int sum=sum1+sum2;
        printf("%d\n",sum);
        for(int w=0;w<n;w++)
        {
            printf("%d %d",a[w],a[w+n]);
            printf("\n");
        }
    }
    return 0;
}