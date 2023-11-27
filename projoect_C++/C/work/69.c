#include <stdio.h>
#include<string.h>
#include<stdlib.h>
char *insert(char *s1, char *s2, int n)
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // s1=malloc(sizeof(char)*(len1+len2+1));
    // 字符串后移

        for (int i = len1-1; i >=n; i--) 
        {
            s1[i+len2]=s1[i];
        }



    // 逐个字符复制 s1 的剩余部分到结果字符串
    for (int i = n,j=0; j < len2; i++,j++) {
        s1[i] = s2[j];
    }



    return s1;
}

int main()
{
	int n = 0;
	char s1[100] = {0};
	char s2[100] = {0};

	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%d", &n);

	char *ss = insert(s1, s2, n);
	printf("%s", ss);

	return 0;
}