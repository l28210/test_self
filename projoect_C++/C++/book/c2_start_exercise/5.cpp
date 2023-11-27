#include<iostream>
using namespace std;
int main()
{
    float a;
    cout << "Please enter a Celsius value:";

    cin >> a;
    cout << a << " degrees Celsius is " << a*1.8+32.0 << " degrees Fahrenheit" << endl ;

    return 0;
}