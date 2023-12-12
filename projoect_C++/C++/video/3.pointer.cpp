#include<iostream>

using namespace std;

int main()
{
    // cout << sizeof(int *) << endl;
    // cout << sizeof(float *) << endl;
    // cout << sizeof(double *) << endl;
    // cout << sizeof(long *) << endl;
    //指针变量在64位操作系统所占空间都是8

    //空指针
    //1.给指针变量初始化
    // int *p = NULL;
    //2.空指针不可以进行访问
    // *p=100;
    //程序崩溃
    //原因：0-255的内存编号是系统占用的，不可访问


    //野指针
    //指针变量指向非法的内存空间,要避免
    // int *q=(int *)0x1100;
    // cout << *q << endl;
    //空指针和野指针都不是自己申请的空间，要避免

    int a=10;
    int b=10;
    //const修饰指针——常量指针
    const int *p=&a;
    //常量指针
    //特点：指针的指向可以修改，指针指向的值不可以修改
    // *p=20;
    // 错误的，const修饰指针，指向的值不可修改
    p=&b;
    //正确




    //const修饰常量——指针常量
    int * const m=&a;
    //指针常量
    //指针的指向不可以修改，指向的值可以修改，
    //m=&b;
    //错误
    *m=20;
    //正确

    //const即修饰指针又修饰常量
    const int * const n=&a;
    //指向和指向的值都不可修改
}