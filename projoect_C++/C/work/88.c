#include <stdio.h>

int main() {
    int L, M;
    scanf("%d %d", &L, &M);

    int trees[L + 1];
    int i;

    for (i = 0; i <= L; i++) {
        trees[i] = 1; // 初始化每个位置上都有树
    }

    for (i = 0; i < M; i++) {
        int start, end;
        scanf("%d %d", &start, &end);

        for (int j = start; j <= end; j++) {
            trees[j] = 0; // 将区域内的树移走
        }
    }

    int remainingTrees = 0;
    for (i = 0; i <= L; i++) {
        remainingTrees += trees[i];
    }

    printf("%d\n", remainingTrees);

    return 0;
}
