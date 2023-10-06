#include<stdio.h>


int maxFood(int a[], int len)
{
    
}

int main()
{
    int a[100];
    int len;
    scanf("%d", &len);
    int i;
    for(i=0; i<len; i++){
    	scanf("%d", &a[i]);
	}
	printf("%d", maxFood(a, len));
    return 0;
}

