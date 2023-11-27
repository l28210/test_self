#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char s1[20],s2[20];
    sprintf(s1,"%d",a);
    sprintf(s2,"%d",b);
    // printf("%s",s1);
    // printf("%s",s2);
    char swap;
    swap=s1[1];
    s1[1]=s2[1];
    s2[1]=swap;
    printf("%s %s",s1,s2);
    return 0;
}