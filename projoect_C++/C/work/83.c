#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        int swap=x;
        x=y;
        y=swap;
    }
    if(x%2!=0)
        x++;
    int sum=0;
    for(int i=x;i<y;i+=2)
    {
        sum+=i;
    }
    printf("%d",-sum);
    return 0;
}