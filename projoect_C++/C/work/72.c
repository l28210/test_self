# include <stdio.h>
#include<string.h>
#include<stdlib.h>
int compareVersion(char *version1, char *version2) {
    int i = 0, j = 0;
    while (version1[i] != '\0' || version2[j] != '\0') {
        long long num1 = 0, num2 = 0;
        while (version1[i] != '\0' && version1[i] != '.') {
            num1 = num1 * 10 + version1[i] - '0';
            i++;
        }
        while (version2[j] != '\0' && version2[j] != '.') {
            num2 = num2 * 10 + version2[j] - '0';
            j++;
        }
        if (num1 > num2) return 1;
        else if (num1 < num2) return -1;
        if (version1[i] != '\0') i++;
        if (version2[j] != '\0') j++;
    }
    return 0;
}
int main()
{
	int rst = 0;
	char ver1[101];
	char ver2[101];

	scanf("%s %s", ver1, ver2);
	rst = compareVersion(ver1, ver2);		//goal function

	switch (rst)
	{
		case 0:
			printf("The same version.");
			break;
		case 1:
			printf("%s is the new version.", ver1);
			break;
		case -1:
			printf("%s is the new version.", ver2);
			break;
		default:
			printf("invalid!");
			break;
	}

	return 0;
}