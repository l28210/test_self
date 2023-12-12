#include<iostream>
#include<cstdlib>
#include<time.h>//系统时间
#include<ctime>//同上

using namespace std;

void fun()
{
    srand(time(NULL));
    //srand(seed) 用来设置 rand() 产生随机数时的随机数种子。参数 seed 必须是个整数，如果每次 seed 都设相同值，rand() 所产生的随机数值每次就会一样
    //所在头文件:stdlib.h
    // for(int i=0;;i++)
    // {
    //     //cout << "time:" << time(NULL) << endl;
    //     //C 库函数 time_t time(time_t *seconds) 返回自纪元 Epoch（1970-01-01 00:00:00 UTC）起经过的时间，以秒为单位。
    //     //如果 seconds 不为空，则返回值也存储在变量 seconds 中
    //     // cout << rand() << endl;
    //     //rand() 的内部实现是用线性同余法做的，它不是真的随机数，因其周期特别长，故在一定的范围里可看成是随机的

    // }
    int num=rand()%100+1;
    int n;
    cin >> n;
    while(n!=num)
    {
        if(num>n)
            cout << "larger" << endl;
        else
            cout << "smaller" << endl;
        cin >> n;
        
    }
    cout << "congratulation!!!!!!" << endl;

}
int main()
{
    fun();
    return 0;
}