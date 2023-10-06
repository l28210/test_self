#include<stdio.h>
#include<string.h>

int betterBookForReaderA(int book1,int book2);

int find6(int a);

int betterBookForReaderB(int book1,int book2);

int isPalindromic(int a);

int betterBookForReaderC(int book1,int book2);

int betterBookForReaderA(int book1,int book2)
{
    char str1[12],str2[12];
    sprintf(str1,"%d",book1);
    sprintf(str2,"%d",book2);
    if(strlen(str1)!=strlen(str2))
    {
        if(strlen(str1)>strlen(str2))
            return 2;
        else
            return 1;
    }
    else
        return (book1>book2)?1:2;
}
//int sprintf(char *str, const char *format, ...);
//sprintf 是C标准库中的一个函数，它的作用是将格式化的数据转换为字符串

int find6(int a)
{
    int res=a;
    int remain;
    for(;res>0;)
    {
        remain=res%10;
        if(remain==6)
            return 1;
        res/=10;
    }
    return 0;
}
//寻找是否有6

int betterBookForReaderB(int book1,int book2)
{
    if(find6(book1)==1&&find6(book2)==1)
        return 1;
    else if(find6(book1)==1&&find6(book2)==0)
        return 1;
    else if(find6(book2)==1&&find6(book1)==0)
        return 2;
    else 
        return -1;
    
}

int isPalindromic(int a)
{
    char str[12];
    sprintf(str,"%d",a);
    int len=strlen(str);
    for(int i=0;i<=len-1;i++,len--)
    {
        if(str[i]!=str[len-1])
        {
            return 0;
        }
    }
    return 1;
}
//判断回文

int betterBookForReaderC(int book1,int book2)
{
    if(isPalindromic(book1)==1&&isPalindromic(book2)==1)
        return 1;
    else if(isPalindromic(book1)==0&&isPalindromic(book2)==1)
        return 2;
    else if(isPalindromic(book1)==1&&isPalindromic(book2)==0)
        return 1;
    else
        return -1;
}

void printChoice(int choose,int book1,int book2)
{
    if(choose==-1)
        printf("Sorry. Neither of those books.\n");
    else if(choose==1)
        printf("I guess you will prefer: %d\n",book1);
    else if(choose==2)
        printf("I guess you will prefer: %d\n",book2);

}

int main()
{
    char c;
    int book1, book2;
    scanf("%c%d%d", &c, &book1, &book2);
    int choose;
    if(c == 'A')
        choose = betterBookForReaderA(book1, book2);
    else if(c == 'B')
        choose = betterBookForReaderB(book1, book2);
    else if(c == 'C')
        choose = betterBookForReaderC(book1, book2);

    printChoice(choose, book1, book2);
    return 0;
}


