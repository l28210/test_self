// C. Matching Arrays
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// You are given two arrays 𝑎
//  and 𝑏
//  of size 𝑛
// . The beauty of the arrays 𝑎
//  and 𝑏
//  is the number of indices 𝑖
//  such that 𝑎𝑖>𝑏𝑖
// .

// You are also given an integer 𝑥
// . Determine whether it is possible to rearrange the elements of 𝑏
//  such that the beauty of the arrays becomes 𝑥
// . If it is possible, output one valid rearrangement of 𝑏
// .

// Input
// Each test contains multiple test cases. The first line contains the number of test cases 𝑡
//  (1≤𝑡≤104
// ). The description of the test cases follows.

// The first line of each test case contains two integers 𝑛
//  and 𝑥
//  (1≤𝑛≤2⋅105
// , 0≤𝑥≤𝑛
// ) — the size of arrays 𝑎
//  and 𝑏
//  and the desired beauty of the arrays.

// The second line of each test case contains 𝑛
//  integers 𝑎1,𝑎2,…,𝑎𝑛
//  (1≤𝑎𝑖≤2𝑛
// ) — the elements of array 𝑎
// .

// The third line of each test case contains 𝑛
//  integers 𝑏1,𝑏2,…,𝑏𝑛
//  (1≤𝑏𝑖≤2𝑛
// ) — the elements of array 𝑏
// .

// It is guaranteed that the sum of 𝑛
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, output "NO" if it is not possible to rearrange 𝑏
//  to make the beauty of the arrays equal to 𝑥
// .

// Otherwise, output "YES". Then, on the next line, output 𝑛
//  integers which represent the rearrangement of 𝑏
// .

// If there are multiple solutions, you may output any of them.

// You can output "YES" and "NO" in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

// Example
// inputCopy
// 7
// 1 0
// 1
// 2
// 1 1
// 1
// 2
// 3 0
// 2 4 3
// 4 1 2
// 3 1
// 2 4 3
// 4 1 2
// 3 2
// 2 4 3
// 4 1 2
// 3 3
// 2 4 3
// 4 1 2
// 5 2
// 6 4 5 6 2
// 9 7 9 1 1
// outputCopy
// YES
// 2
// NO
// NO
// YES
// 2 4 1
// YES
// 4 1 2
// NO
// YES
// 1 9 9 7 1
// Note
// In test cases 1 and 2, the beauty of the arrays has to be 0
//  since 𝑎1=1≤2=𝑏1
// .

// In test cases 3, 4, 5 and 6, the only possible beauty of the arrays is 𝑥=1
//  and 𝑥=2
// . In particular, if 𝑏
//  is rearranged to [2,4,1]
// , then 𝑎3=3>1=𝑏3
// , so the beauty of the arrays is 1
// . If 𝑏
//  is kept in the same order as given the input, then 𝑎2=4>𝑏2=1
//  and 𝑎3=3>2=𝑏3
// , so the beauty of the arrays is 2
// .
#include<iostream>
using namespace std;
void solve()
{
    int n,x;
    cin >> n;
    cin >> x;
    int a[200001]={0};
    int b[200001]={0};
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];   
    int max,min;
    max=a[0];
    min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }

    }
    int cout_max=0;
    int cout_min=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]<min)
        {
            cout_min++;
        }
        if(b[i]<max)
        {
            cout_max++;
        }
    }
    if(x<=cout_max&&x>=cout_min)
    {
        cout << "YES" <<endl;
        
    }
    else
    {
        cout << "NO" << endl; 
    }
     
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