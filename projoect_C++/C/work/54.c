#include<stdio.h>
int main()
{
    int a,b;
    int sum=0;
    for(int i=0;i<2;i++)
    {
        scanf("%d %d",&a,&b);
        sum=sum+a*b;
    }
    printf("%d",sum);
    return 0;
}