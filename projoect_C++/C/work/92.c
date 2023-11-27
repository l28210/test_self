#include <stdio.h>
#include <string.h>

int main() {
    char s[10001];
    char goal[10001];
    scanf("%s", s);
    scanf("%s", goal);

    if (strlen(s) != strlen(goal)) {
        printf("NO\n");
        return 0;
    }

    int diff1 = -1;
    int diff2 = -1;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != goal[i]) 
        {
            if (diff1 == -1) {
                diff1 = i;
            } else if (diff2 == -1) {
                diff2 = i;
            } else {
                printf("NO\n");
                return 0;
            }
        }
    }

    if (diff1 != -1 && diff2 != -1 && s[diff1] == goal[diff2] && s[diff2] == goal[diff1]) 
    {
        printf("YES\n");
    }
    else if(diff1==diff2)
    {
        int result=0;
        for(int i=0;i<strlen(s);i++)
        {
            for(int j=i+1;j<strlen(s);j++)
            {
                if(s[i]==s[j])
                {
                    result=1;
                    break;
                }
            }
        }
        if(result==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
