#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]<='9'&&str[i]>='0')
        {
            printf("%c ",str[i]);
        }
    }
    return 0;
}