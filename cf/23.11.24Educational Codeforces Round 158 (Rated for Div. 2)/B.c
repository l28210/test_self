// B. Chip and Ribbon
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// There is a ribbon divided into 𝑛
//  cells, numbered from 1
//  to 𝑛
//  from left to right. Initially, an integer 0
//  is written in each cell.

// Monocarp plays a game with a chip. The game consists of several turns. During the first turn, Monocarp places the chip in the 1
// -st cell of the ribbon. During each turn except for the first turn, Monocarp does exactly one of the two following actions:

// move the chip to the next cell (i. e. if the chip is in the cell 𝑖
// , it is moved to the cell 𝑖+1
// ). This action is impossible if the chip is in the last cell;
// choose any cell 𝑥
//  and teleport the chip into that cell. It is possible to choose the cell where the chip is currently located.
// At the end of each turn, the integer written in the cell with the chip is increased by 1
// .

// Monocarp's goal is to make some turns so that the 1
// -st cell contains the integer 𝑐1
// , the 2
// -nd cell contains the integer 𝑐2
// , ..., the 𝑛
// -th cell contains the integer 𝑐𝑛
// . He wants to teleport the chip as few times as possible.

// Help Monocarp calculate the minimum number of times he has to teleport the chip.

// Input
// The first line contains one integer 𝑡
//  (1≤𝑡≤104
// ) — the number of test cases.

// Each test case consists of two lines:

// the first line contains one integer 𝑛
//  (1≤𝑛≤2⋅105
// );
// the second line contains 𝑛
//  integers 𝑐1,𝑐2,…,𝑐𝑛
//  (0≤𝑐𝑖≤109
// ; 𝑐1≥1
// ).
// It can be shown that under these constraints, it is always possible to make a finite amount of turns so that the integers in the cells match the sequence 𝑐1,𝑐2,…,𝑐𝑛
// .

// Additional constraint on the input: the sum of values of 𝑛
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, print one integer — the minimum number of times Monocarp has to teleport the chip.

// Example
// inputCopy
// 4
// 4
// 1 2 2 1
// 5
// 1 0 1 0 1
// 5
// 5 4 3 2 1
// 1
// 12
// outputCopy
// 1
// 2
// 4
// 11
// Note
// In the first test case of the example, Monocarp can perform the turns as follows:

// place the chip in the 1
// -st cell; the numbers in the cells are [1,0,0,0]
// ;
// move the chip to the next (2
// -nd) cell; the numbers in the cells are [1,1,0,0]
// ;
// move the chip to the next (3
// -rd) cell; the numbers in the cells are [1,1,1,0]
// ;
// teleport the chip to the 2
// -nd cell; the numbers in the cells are [1,2,1,0]
// ;
// move the chip to the next (3
// -rd) cell; the numbers in the cells are [1,2,2,0]
// ;
// move the chip to the next (4
// -th) cell; the numbers in the cells are [1,2,2,1]
// .

#include<stdio.h>
int cmp(int *a,int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
    }
    return 1;
}
int find(int *a,int *b,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            return i;
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
        scanf("%d",&n);
        int a[200003]={0};
        int b[200003]={0};
        b[0]=1;
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        int cout=0;

        int j=0;
        while(cmp(a,b,n)==0)
        {
            if(a[j+1]<=b[j+1])
            {
                cout++;
                j=find(a,b,n);
                b[j]++;
            }
            else
            {
                j++;
                b[j]++;
            }
        }
        printf("%d\n",cout);
        
    }
    return 0;
}

//可以完成测试，但是超时，需用贪心算法
