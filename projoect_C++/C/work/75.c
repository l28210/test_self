#include <stdio.h>

int main() {
    int money, count;
    
    scanf("%d", &money);
    
    scanf("%d", &count);

    int rooster, hen, chick;


    int solution_found = 0;  // 用于标记是否找到解

    for (rooster = count ; rooster >= 0; rooster--) 
    {

        for (hen = (count-rooster) ; hen >= 0; hen--) {
            chick = count - rooster - hen;

            if (5 * rooster + 3 * hen + chick / 3 == money && chick % 3 == 0) {
                printf("%d %d %d\n", rooster, hen, chick);
                solution_found = 1;  // 找到解
            }
        }
    }

    if (!solution_found) {
        printf("no answer\n");
    }
    return 0;
}
