#include<sstream>
#include<iostream>


using namespace std ;

string nestedforloop(int n)
{
    ostringstream res;
    for(int i=1 ; i<=n ; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            res << "(" << i <<  "," << j << "),";

        }
        
    }
    return res.str();

}

int main()
{
    cout << nestedforloop(5) << endl ;
    return 0;
}