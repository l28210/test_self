#include <stdio.h>
int convertOctalToDecimal(int octalNumber) {
    int decimalNumber = 0;
    int base = 1;

    while (octalNumber > 0) {
        int lastDigit = octalNumber % 10;
        decimalNumber += lastDigit * base;
        base *= 8;
        octalNumber /= 10;
    }

    return decimalNumber;
}

int main() {
    int octalNumber;
    scanf("%d", &octalNumber);
    printf("%d", convertOctalToDecimal(octalNumber));
    return 0;
}