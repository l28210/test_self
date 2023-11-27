// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100];
//     scanf("%s",str1);
//     int len=strlen(str1);
//     for(int i=0;i<len;i+=2)
//         printf("%c",str1[i]);
//     return 0;
// }


#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    scanf("%s",str1);    
    int len=strlen(str1);
    for(int i=len-1;i>0;i--)
    {
        if(str1[i]=='\\')
            str1[i]='\0';
        else
            break;
    }
    printf("%s",str1);
    return 0;
}