#include <stdio.h>

int main() {
    int scores[3][3];
    double total[3] = {0.0, 0.0, 0.0};

    // Read input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[i][j]);
            total[i] += scores[i][j];
        }
    }

    // Calculate the average scores
    double avg[4] = {0.0, 0.0, 0.0, 0.0};
    for (int i = 0; i < 3; i++) {
        avg[0] += total[i];
        avg[1] += scores[i][0];
        avg[2] += scores[i][1];
        avg[3] += scores[i][2];
    }

    for (int i = 0; i < 4; i++) {
        avg[i] /= 3.0;
    }

    // Print the results
    for (int i = 0; i < 3; i++) {
        printf("%.2lf ", total[i]);
    }
    printf("\n");

    for (int i = 0; i < 4; i++) {
        printf("%.2lf ", avg[i]);
    }
    printf("\n");

    return 0;
}
