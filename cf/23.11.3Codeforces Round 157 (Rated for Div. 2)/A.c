// A. Treasure Chest
// time limit per test2 seconds
// memory limit per test512 megabytes
// inputstandard input
// outputstandard output
// Monocarp has found a treasure map. The map represents the treasure location as an OX axis. Monocarp is at 0
// , the treasure chest is at 𝑥
// , the key to the chest is at 𝑦
// .

// Obviously, Monocarp wants to open the chest. He can perform the following actions:

// go 1
//  to the left or 1
//  to the right (spending 1
//  second);
// pick the key or the chest up if he is in the same point as that object (spending 0
//  seconds);
// put the chest down in his current point (spending 0
//  seconds);
// open the chest if he's in the same point as the chest and has picked the key up (spending 0
//  seconds).
// Monocarp can carry the chest, but the chest is pretty heavy. He knows that he can carry it for at most 𝑘
//  seconds in total (putting it down and picking it back up doesn't reset his stamina).

// What's the smallest time required for Monocarp to open the chest?

// Input
// The first line contains a single integer 𝑡
//  (1≤𝑡≤100
// ) — the number of testcases.

// The only line of each testcase contains three integers 𝑥,𝑦
//  and 𝑘
//  (1≤𝑥,𝑦≤100
// ; 𝑥≠𝑦
// ; 0≤𝑘≤100
// ) — the initial point of the chest, the point where the key is located, and the maximum time Monocarp can carry the chest for.

// Output
// For each testcase, print a single integer — the smallest time required for Monocarp to open the chest.

// Example
// inputCopy
// 3
// 5 7 2
// 10 5 0
// 5 8 2
// outputCopy
// 7
// 10
// 9
// Note
// In the first testcase, Monocarp can open the chest in 7
//  seconds with the following sequence of moves:

// go 5
//  times to the right (5
//  seconds);
// pick up the chest (0
//  seconds);
// go 2
//  times to the right (2
//  seconds);
// pick up the key (0
//  seconds);
// put the chest down (0
//  seconds);
// open the chest (0
//  seconds).
// He only carries the chest for 2
//  seconds, which he has the stamina for.

// In the second testcase, Monocarp can pick up the key on his way to the chest.

// In the third testcase, Monocarp can't use the strategy from the first testcase because he would have to carry the chest for 3
//  seconds, while he only has the stamina for 2
//  seconds. Thus, he carries the chest to 7
// , puts it down, moves 1
//  to the right to pick up the key and returns 1
//  left to open the chest.

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int x,y,k;
        scanf("%d %d %d",&x,&y,&k);
        if(y<x)
        {
            printf("%d\n",x);
            continue;
        }
        else if(y<=(x+k)&&y>x)
        {
            printf("%d\n",y);     
            continue;      
        }
        else if(y>x&&y>(x+k))
        {
            printf("%d\n",x+k+2*(y-x-k));
            continue;
        }
    }
    return 0;
}