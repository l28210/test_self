#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int swap=0;
    if(b<c)
    {
        swap=b;
        b=c;
        c=swap;
    }
    if(a<b)
    {
        swap=a;
        a=b;
        b=swap;
    }
        if(b<c)
    {
        swap=b;
        b=c;
        c=swap;
    }

    printf("%d %d %d\n",a,b,c);
    return 0;
}