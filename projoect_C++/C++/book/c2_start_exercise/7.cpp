#include<iostream>
using namespace std;
void print(int h,int m)
{
    cout << "Time: " << h << ":" << m << endl ;

}
int main()
{
    int h,m;
    cout << "Enter the number of hout:";
    cin >> h;
    cout << "Enter the number of minutes:";
    cin >> m;
    print(h,m);
    return 0;
}