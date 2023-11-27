#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("Your amount %d consists of\n", n);
    int dollars = n / 100;
    n %= 100;
    int quarters = n / 25;
    n %= 25;
    int dimes = n / 10;
    n %= 10;
    int nickels = n / 5;
    int pennies = n % 5;

    
    if (dollars > 0) {
        if (dollars == 1)
            printf("%d dollar\n", dollars);
        else
            printf("%d dollars\n", dollars);
    }
    if (quarters > 0) {
        if (quarters == 1)
            printf("%d quarter\n", quarters);
        else
            printf("%d quarters\n", quarters);
    }
    if (dimes > 0) {
        if (dimes == 1)
            printf("%d dime\n", dimes);
        else
            printf("%d dimes\n", dimes);
    }
    if (nickels > 0) {
        if (nickels == 1)
            printf("%d nickel\n", nickels);
        else
            printf("%d nickels\n", nickels);
    }
    if (pennies > 0) {
        if (pennies == 1)
            printf("%d penny\n", pennies);
        else
            printf("%d pennies\n", pennies);
    }

    return 0;
}
