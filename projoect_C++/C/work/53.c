#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    scanf("%d",&a);
    int h=a/100;
    int t=(a-h*100)/10;
    int g=a%10;
    if(g!=0)
        printf("%d%d%d",g,t,h);
    else if(t!=0)
        printf("%d%d",t,h);
    else
        printf("%d",h);
    return 0;
}