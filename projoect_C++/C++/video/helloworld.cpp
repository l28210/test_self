#include <iostream>
#include<string>
using namespace std;
#define day 7//宏常量

int main()
{
    // int a=10;//int类型为-2^31到2^31+1
    // // cout << "a=" << a << endl;
    // // cout << "per week:" << day << endl;
    // short b=32768;
    // const int month=12;
    // cout << month << endl ;
    // cout << b << endl;

    // cout << sizeof(short)
    //      << '\n'
    //      << sizeof(int)
    //      << '\n'
    //      << sizeof(long)
    //      << '\n'
    //      << sizeof(long long)
    //      << endl;

    //默认情况输出6位小数
    // float num=3.14f;//不加f时，3.14默认为double，加了f后则为float
    // double num1=3.14;
    // cout << sizeof(float)
    //      << '\n'
    //      << sizeof(double)
    //      << endl;
    // float f=3e2;
    // float d=3e-2;
    // cout << f
    //      << '\n'
    //      << d
    //      << endl;


    // char ch='a';
    // cout << ch 
    //      << '\n'
    //      << (int)ch
    //      << endl;


    // cout << "aaa\the\n"
    //      << "aaaaa\the\n"
    //      << "a\the"
    //      << endl;
    //\t用于水平对齐，占用8个位置


    //C++字符串
    // string str = "qwerasd";
    // cout << str <<endl;

    //bool数据类型
    // bool flag =false;
    // cout << flag << endl;
    // cout << sizeof(bool)<<endl;
    // cin >> flag;//非0为真
    // cout << flag << endl ;

    // float f1=3.14;
    // float f2=1.1;
    // cout << f1%f2 <<endl;//小数和小数不可以取模

    int a=20;
    int b=10;
    (a>b?a:b)=100;//C++的三目操作符返回变量可以继续赋值，注意用括号
    cout << a << '\n' << b <<endl;



    return 0;
}