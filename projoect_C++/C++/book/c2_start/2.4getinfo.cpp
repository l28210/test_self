#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a;
    srand((unsigned)time(NULL));
    // srand()函数用于给rand()函数设定种子   void srand (unsigned int seed);
    
    cin >> a;
    cout << a << '\n' <<  sqrt(a) << '\n' << pow(a,a) 
        << '\n'
        << rand()
        //rand() 函数产生的随机数是伪随机数，是根据一个数值按照某个公式推算出来的，这个数值我们称之为“种子”
        //种子在每次启动计算机时是随机的，但是一旦计算机启动以后它就不再变化
        //也就是说，每次启动计算机以后，种子就是定值了，所以根据公式推算出来的结果（也就是生成的随机数）就是固定的
        
        <<  endl;

    return 0;
}