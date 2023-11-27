#include <stdio.h>

int count_ones(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}

int main() {
    int x;
    scanf("%d", &x);
    
    int ones = count_ones(x);
    
    printf("%d\n", ones);

    return 0;
}
