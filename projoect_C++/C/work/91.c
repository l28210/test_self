#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char str1[10001], str2[10001];
        scanf("%s", str1);
        scanf("%s", str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int maxMatchLength = 0;
        int matchLength = 0;

        for (int i = 0; i < len1; i++) 
        {
            // for (int j = 0; j < len2; j++) 
            // {
                
                if (str1[i] == str2[0]) 
                {
                    int p1 = i;
                    int p2 = 0;
                    matchLength = 0;

                    while (p1 < len1 && p2 < len2 && str1[p1] == str2[p2]) 
                    {
                        if(p2==len2-1)
                        {
                            p2=0;
                        }
                        else
                            p2++;                        
                        p1++;
                        // p2++;
                        matchLength++;

                    }
                    if(matchLength<strlen(str2))
                        matchLength=0;
                    if (matchLength > maxMatchLength) {
                        maxMatchLength = matchLength;
                    }
                }
            // }
        }

        printf("%d\n", maxMatchLength);
    }

    return 0;
}
