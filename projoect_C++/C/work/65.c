#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isBeautifulString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[101];
    scanf("%s", str);

    if (isBeautifulString(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
