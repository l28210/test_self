#include<stdio.h>

int test_virus(unsigned int V, int T)
{
    if(T==6)
    {
        unsigned int M = 0x0003C000;
        if(((V&M)^M)==0)
            return 1;
        else
            return 0;
    }
    else
    {
        unsigned int V1,V2;
        if(((1<<31)&V)!=0)
            V1=V<<T;
        else
            V1=V<<1;
        if((1&V)!=0)
            V2=V>>T;
        else
            V2=V>>1;
        return test_virus(V1,T+1) || test_virus(V2,T+1);//****
    }
}

// 函数用于判断感染者是否会在潜伏期结束后梦见猫咪
// int test_virus(unsigned int V, int T) {
//     // 基本情况：如果已经进行了6次变异，则判断梦见猫咪的条件
//     if (T == 6) {
//         unsigned int M = 0x0003C000;
//         if (((V & M) ^ M) == 0) {
//             return 1;  // 满足梦见猫咪的条件
//         } else {
//             return 0;  // 不满足梦见猫咪的条件
//         }
//     } else {
//         // 进行左移变异
//         unsigned int V1;
//         if ((1 << 31) & V) {
//             V1 = V << T;
//         } else {
//             V1 = V << 1;
//         }
        
//         // 进行右移变异
//         unsigned int V2;
//         if (1 & V) {
//             V2 = V >> T;
//         } else {
//             V2 = V >> 1;
//         }
        
//         // 递归调用
//         return test_virus(V1, T + 1) || test_virus(V2, T + 1);
//     }
// }


int main()
{
    unsigned int V;
    scanf("%d",&V);


    int result = test_virus(V,0);
    if(result==1)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}


