#include <stdio.h>
#include <string.h>

int main() {
    char input[105]; // Assuming the input string has a maximum length of 100
    scanf("%s",input); // Read the input string with possible leading/trailing spaces

    int len = strlen(input);

    int start = 0, end = len - 1;

    // Find the first non-space character from the start
    while (input[start] == input[start+1] && start < len) {
        start++;
    }
    start++;

    // Find the first non-space character from the end
    while (input[end] == input[end-1] && end >= 0) {
        end--;
    }
    end--;
    // Check if there are any non-space characters left
    if (start <= end) {
        for (int i = start; i <= end; i++) {
            printf("%c", input[i]);
        }
        printf("\n");
    }

    return 0;
}
