// A. Cover in Water
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// Filip has a row of cells, some of which are blocked, and some are empty. He wants all empty cells to have water in them. He has two actions at his disposal:

// 1
//  — place water in an empty cell.
// 2
//  — remove water from a cell and place it in any other empty cell.
// If an empty cell is between two cells with water, it gets filled with water itself.

// Find the minimum number of times he needs to perform action 1
//  in order to fill all empty cells with water.

// Note that you don't need to minimize the use of action 2
// . Note that blocked cells neither contain water nor can Filip place water in them.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases 𝑡
//  (1≤𝑡≤100
// ). The description of the test cases follows.

// The first line of each test case contains a single integer 𝑛
//  (1≤𝑛≤100
// ) — the number of cells.

// The next line contains a string 𝑠
//  of length 𝑛
// . The 𝑖
// -th character of 𝑠
//  is '.' if the cell 𝑖
//  is empty and '#' if cell 𝑖
//  is blocked.

// Output
// For each test case, output a single number — the minimal amount of actions 1
//  needed to fill all empty cells with water.

// Example
// inputCopy
// 5
// 3
// ...
// 7
// ##....#
// 7
// ..#.#..
// 4
// ####
// 10
// #...#..#.#
// outputCopy
// 2
// 2
// 5
// 0
// 2
// Note
// In the first test case, Filip can put water in cells 1
//  and 3
// . As cell 2
//  is between 2
//  cells with water, it gets filled with water too.

// In the second case, he can put water sources in cells 3
//  and 5
// . That results in cell 4
//  getting filled with water. Then he will remove water from cell 5
//  and place it into cell 6
// . As cell 5
// 's neighbors, cell 4
//  and cell 6
// , have water in them, cell 5
//  also gets filled with water. You can see the illustration of this case below.

// In the third case, he can put water in all the empty cells. That requires 5
//  actions of type 1
// .

// In the fourth case, there are no empty cells. Therefore, he does not have to put any water in them.

// In the fifth test case, there exists a sequence of actions that requires only 2
//  type 1
//  actions.

#include<iostream>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum =0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            if(s[i+1]=='.'&&s[i+2]=='.')
            {
                sum=2;
                goto out;
            }
            else if(s[i+1]=='.')
                sum+=2;
            else
                sum++;
            for(;i<n;i++)
            {
                if(s[i]=='#')
                    break;
            }
        }
    }
    out:
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}