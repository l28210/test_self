#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LONG_MAX;
    //为各种类型取最大值
    cout << "int " << sizeof(int) << endl ;
    cout << "short " << sizeof(short) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "long long " << sizeof(long long) << endl ;


    cout << "MAX_value\n" << n_int <<endl;
    cout << n_short << endl;
    cout << n_long << endl;
    cout << n_llong << endl;

    cout << "minium int value" << INT_MIN <<endl;
    cout << "bits per byte " << CHAR_BIT <<endl;//每个字节的bit数

    cout << "int " << sizeof(int) << endl ;
    cout << "short " << sizeof n_short << endl ;//对变量名使用可以不用括号

    int wrens(432);
    cout << wrens << endl;//C++的一种初始化语法
    return 0;
}