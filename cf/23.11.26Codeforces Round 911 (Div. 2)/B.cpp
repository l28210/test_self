// B. Laura and Operations
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Laura is a girl who does not like combinatorics. Nemanja will try to convince her otherwise.

// Nemanja wrote some digits on the board. All of them are either 1
// , 2
// , or 3
// . The number of digits 1
//  is 𝑎
// . The number of digits 2
//  is 𝑏
//  and the number of digits 3
//  is 𝑐
// . He told Laura that in one operation she can do the following:

// Select two different digits and erase them from the board. After that, write the digit (1
// , 2
// , or 3
// ) different from both erased digits.
// For example, let the digits be 1
// , 1
// , 1
// , 2
// , 3
// , 3
// . She can choose digits 1
//  and 3
//  and erase them. Then the board will look like this 1
// , 1
// , 2
// , 3
// . After that, she has to write another digit 2
// , so at the end of the operation, the board will look like 1
// , 1
// , 2
// , 3
// , 2
// .

// Nemanja asked her whether it was possible for only digits of one type to remain written on the board after some operations. If so, which digits can they be?

// Laura was unable to solve this problem and asked you for help. As an award for helping her, she will convince Nemanja to give you some points.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases 𝑡
//  (1≤𝑡≤105
// ). The description of the test cases follows.

// The first and only line of each test case contains three integers 𝑎
// , 𝑏
// , 𝑐
//  (1≤𝑎,𝑏,𝑐≤100
// ) — the number of ones, number of twos, and number of threes, respectively.

// Output
// For each test case, output one line containing 3
//  integers.

// The first one should be 1
//  if it is possible that after some operations only digits 1
//  remain on the board, and 0
//  otherwise.

// Similarly, the second one should be 1
//  if it is possible that after some operations only digits 2
//  remain on the board, and 0
//  otherwise.

// Similarly, the third one should be 1
//  if it is possible that after some operations only digits 3
//  remain on the board, and 0
//  otherwise.

// Example
// inputCopy
// 3
// 1 1 1
// 2 3 2
// 82 47 59
// outputCopy
// 1 1 1
// 0 1 0
// 1 0 0
// Note
// In the first test case, Laura can remove digits 2
//  and 3
//  and write digit 1
// . After that, the board will have 2
//  digits 1
// . She can make it have only digits 2
//  or 3
//  left by performing a similar operation.

// In the second test case, she can remove digits 1
//  and 3
//  and write a digit 2
// . After performing that operation 2
//  times, the board will have only digits 2
//  left. It can be proven that there is no way to have only digits 1
//  or only digits 3
//  left.

// In the third test case, there is a sequence of operations that leaves only digits 1
//  on the board. It can be proven that there is no way to have only digits 2
//  or only digits 3
//  left.

#include<iostream>
#include<math.h>
using namespace std ;
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
void solve()
{
    int a,b,c;
    int m,n,p;
    cin >> a >> b >> c;
    if(abs(b-c)%2==0)
        m=1;
    else
        m=0;
    if(abs(a-c)%2==0)
        n=1;
    else
        n=0;
    if(abs(a-b)%2==0)
        p=1;
    else
        p=0;
    cout << m << " "
         << n << " "
         << p << " "
         <<endl;
    
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}