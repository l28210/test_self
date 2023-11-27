#include<stdio.h>
int main()
{
    int a,b;
    int c,d;
    scanf("%d %d",&a,&b);
    c=a/100;
    d=b/100;
    a=a%100+d*100;
    b=b%100+c*100;
    printf("%d %d",a,b);
    return 0;
}