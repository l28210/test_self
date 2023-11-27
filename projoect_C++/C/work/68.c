#include <stdio.h>
#include <string.h>

void intToRoman(char roman[], int num, char removeStr[])
{
    // Arrays to store Roman numeral symbols and their corresponding values
    char* symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Resulting Roman numeral as a string
    roman[0] = '\0'; // Initialize it as an empty string

    // Loop through the symbols and values arrays
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            // Append the current symbol to the result
            strcat(roman, symbols[i]);
            // Subtract the corresponding value from the number
            num -= values[i];
        }
    }

    // Remove the specified invalid characters from the Roman numeral
    for (int i = 0; i < strlen(removeStr); i++) {
        for (int j = 0; j < strlen(roman); j++) {
            if (roman[j] == removeStr[i]) {
                for (int k = j; k < strlen(roman); k++) {
                    roman[k] = roman[k + 1];
                }
                j--; // Recheck the current position after removing the character
            }
        }
    }
}
int main(){
    int num;
    char ch[4];
    char roman[30];
    // freopen("test.txt","r",stdin);
    // freopen("ans2.txt","w",stdout);
    memset(roman,0,sizeof(roman));
    scanf("%d",&num);
    scanf("%s",ch);
    intToRoman(roman,num,ch);
    printf("%s\n",roman);
    return 0;
}