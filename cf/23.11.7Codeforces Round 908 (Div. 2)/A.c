// A. Secret Sport
// time limit per test3 seconds
// memory limit per test512 megabytes
// inputstandard input
// outputstandard output
// Let's consider a game in which two players, A and B, participate. This game is characterized by two positive integers, 𝑋
//  and 𝑌
// .

// The game consists of sets, and each set consists of plays. In each play, exactly one of the players, either A or B, wins. A set ends when one of the players reaches 𝑋
//  wins in the plays of that set. This player is declared the winner of the set. The players play sets until one of them reaches 𝑌
//  wins in the sets. After that, the game ends, and this player is declared the winner of the entire game.

// You have just watched a game but didn't notice who was declared the winner. You remember that during the game, 𝑛
//  plays were played, and you know which player won each play. However, you do not know the values of 𝑋
//  and 𝑌
// . Based on the available information, determine who won the entire game — A or B. If there is not enough information to determine the winner, you should also report it.

// Input
// Each test contains multiple test cases. The first line contains a single integer 𝑡
//  (1≤𝑡≤104)
//  - the number of test cases. The description of the test cases follows.

// The first line of each test case contains an integer 𝑛
//  (1≤𝑛≤20)
//  - the number of plays played during the game.

// The second line of each test case contains a string 𝑠
//  of length 𝑛
// , consisting of characters 𝙰
//  and 𝙱
// . If 𝑠𝑖=𝙰
// , it means that player A won the 𝑖
// -th play. If 𝑠𝑖=𝙱
// , it means that player B won the 𝑖
// -th play.

// It is guaranteed that the given sequence of plays corresponds to at least one valid game scenario, for some values of 𝑋
//  and 𝑌
// .

// Output
// For each test case, output:

// 𝙰
//  — if player A is guaranteed to be the winner of the game.
// 𝙱
//  — if player B is guaranteed to be the winner of the game.
// ?
//  — if it is impossible to determine the winner of the game.
// Example
// inputCopy
// 7
// 5
// ABBAA
// 3
// BBB
// 7
// BBAAABA
// 20
// AAAAAAAABBBAABBBBBAB
// 1
// A
// 13
// AAAABABBABBAB
// 7
// BBBAAAA
// outputCopy
// A
// B
// A
// B
// A
// B
// A
// Note
// In the first test case, the game could have been played with parameters 𝑋=3
// , 𝑌=1
// . The game consisted of 1
//  set, in which player A won, as they won the first 3
//  plays. In this scenario, player A is the winner. The game could also have been played with parameters 𝑋=1
// , 𝑌=3
// . It can be shown that there are no such 𝑋
//  and 𝑌
//  values for which player B would be the winner.

// In the second test case, player B won all the plays. It can be easily shown that in this case, player B is guaranteed to be the winner of the game.

// In the fourth test case, the game could have been played with parameters 𝑋=3
// , 𝑌=3
// :

// In the first set, 3
//  plays were played: AAA. Player A is declared the winner of the set.
// In the second set, 3
//  plays were played: AAA. Player A is declared the winner of the set.
// In the third set, 5
//  plays were played: AABBB. Player B is declared the winner of the set.
// In the fourth set, 5
//  plays were played: AABBB. Player B is declared the winner of the set.
// In the fifth set, 4
//  plays were played: BBAB. Player B is declared the winner of the set.
// In total, player B was the first player to win 3
//  sets. They are declared the winner of the game.


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         scanf("%d",&n);
//         char a[21];

//         scanf("%s",a);

//         int X=0;
//         int Y=0;
//         for(int X=1;X<n;X++)
//         {
//             for(int Y=1;Y<n;Y++)
//             {
//                 int wina=0;
//                 int winb=0;
//                 int seta=0;
//                 int setb=0;
//                 for(int h=0;h<n;h++)
//                 {
//                     if(a[h]=='A')
//                         wina++;
//                     else
//                         winb++;
//                     if(wina==X||winb==Y)
//                     {
//                         if(wina==X)
//                         {
//                             seta++;
//                         }
//                         else
//                         {
//                             setb++;
//                         }
//                         wina=0;
//                         winb=0;


//                     }
//                 }//判断XY是否合适
//                 int num=fabs(seta-setb);
//                 if(num==1&&(seta+setb)==Y)
//                 {
//                     goto out;
//                 }
//             }
//         }
//         printf("?\n");
//         goto out1;
//         out:


        
//     }
//     out1:
//     return 0;
// }


#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        char a[21];

        scanf("%s",a);
        if(a[n-1]=='A')
            printf("A\n");
        else
            printf("B\n");
    }
    return 0;
}

//傻逼题目