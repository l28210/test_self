
// #include <stdio.h>
// #include <string.h>

// int indexOf(const char *s1, const char *s2) {
//     int s1_len = strlen(s1);
//     int s2_len = strlen(s2);

//     for (int i = 0; i <= s2_len; i++) 
//     {
//         if(s2[i]==s1[0])
//         {
//             int m=i;
//             int j=0;
//             for(;s2[m]==s1[j];m++,j++)
//             {
//                 ;
//             }
//             if(j==s1_len)
//             {
//                 return 1;
//             }
//         }
//     }

//     return -1;
// }
#include <stdio.h>
#include <string.h>

int indexOf(const char *s1, const char *s2) {
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);

    for (int i = 0; i <= s2_len - s1_len; i++) {
        int j;
        for (j = 0; j < s1_len; j++) {
            if (s1[j] != s2[i + j]) {
                break;
            }
        }
        if (j == s1_len) {
            return i;
        }
    }

    return -1;
}
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    // Prompt the user to enter a string
    printf("Enter the first string: ");
    char s1[80];
    scanf("%s",s1);
    // Prompt the user to enter a string
    printf("Enter the second string: ");
    char s2[80];
    scanf("%s",s2);
    printf("%d\n", indexOf(s1, s2));
  }
  return 0;
}