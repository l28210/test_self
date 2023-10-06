// #include<stdio.h>

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++)
//     {
//         int t,k;
//         scanf("%d%d",&t,&k);
//         int num[100];
//         for(int j=0;j<t;j++)
//             scanf("%d",&num[j]);
//     }
//     return 0;
// }

#include <stdio.h>

// Function to check if there exists a subsegment with k as the most common element
int has_most_common_subsegment(int n, int k, int arr[]) {
    int max_count = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        } else {
            count = 0;
        }

        max_count = (count > max_count) ? count : max_count;
    }

    return max_count > 0;
}

int main() {
    int t;
    scanf("%d", &t);

    // Iterate through each test case
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        if (has_most_common_subsegment(n, k, a)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
