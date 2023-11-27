#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar(); // Consume the newline character after the number of test cases

    while (t--) {
        char s1[45], s2[45];
        fgets(s1, 45, stdin); // Read the first string
        fgets(s2, 45, stdin); // Read the second string

        // Remove the newline characters at the end of the strings
        s1[strcspn(s1, "\n")] = '\0';
        s2[strcspn(s2, "\n")] = '\0';

        int len1 = strlen(s1);
        int len2 = strlen(s2);

        // Concatenate the strings and reverse
        char result[90];
        for (int i = 0; i < len2; i++) {
            result[i] = s2[len2 - i - 1];
        }
        for (int i = 0; i < len1; i++) {
            result[i + len2] = s1[len1 - i - 1];
        }
        result[len1 + len2] = '\0';

        // Print the result
        printf("%s\n", result);
    }

    return 0;
}

