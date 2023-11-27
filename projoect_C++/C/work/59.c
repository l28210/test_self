#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int sum = 0;

    if(x>y)
    {
        int temp=0;
        temp=x;
        x=y;
        y=temp;
    }
    if(x%2==0)
        x++;
    for (int i = x; i <= y; i += 2) 
    {
        sum += i;
    }

    printf("%d\n", sum);

    return 0;
}
