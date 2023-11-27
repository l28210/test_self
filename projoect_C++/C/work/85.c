#include <stdio.h>
int get_len(int m)
{
    int count=1;
    while(m!=1)
    {
    if(m%2==0)
        m/=2;
    else    
        m=m*3+1;
        count++;    
    }

    return count;
    
}

int main() {
    int i, start, end, max = 0, tmp;
    scanf("%d%d", &start, &end);
    for (i = start; i <= end; i++) {
        tmp = get_len(i);
        max = tmp > max ? tmp : max;
    }
    printf("%d\n", max);
    return 0;
}
