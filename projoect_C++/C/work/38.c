// Description
// X国发明一种新的加密方法，通过用机器扫描一串大小写字母和数字组成的密文可以产生对应的原文。机器从左到右扫描所有的字符。每碰上一个数字，就会将数字的值作为翻转字符串的开头位置，当前数字的位置作为翻转字符串的末尾执行字符串翻转操作。字符串的位置从0开始计算。

// 比如说，对于序列aabb1lsi5，机器在扫描到第一个数字1的时候，会对之前的字符串aabb从位置1到最后一个位置进行翻转，得到新字符串abba；在扫描到第二个数字5的时候，会对之前得到的字符串abbalsi从位置5到最后一个位置进行翻转，得到新字符串abbalis。最后得到的新字符串即为原来密文字符串所对应的原文。

// 因为机器的识别原理比较简单，需要严格保密，所以X国委托你来给他们制造这台机器。过来交接的技术人员向你保证，所有机器识别到的数字一定比当前的位置要小，且最终生成的原文不会超过100个字符。

// Input
// 输入一个字符串，表示输入的密文字符串，字符串中仅包含大小写字母和数字，长度不超过100。

// Outupt
// 输出一个字符串，表示机器得到的原文字符串

// Sample Input
// Hel,ol3!dlrow6
// ​
// Sample Output
// Hello,world!


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseSubstring(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char cipher[101];
    scanf("%s", cipher);

    int length = strlen(cipher);
    int i = 0;
    int mark=0;//数字所占位数
    while (i < length) 
    {
        if (isdigit(cipher[i])) 
        {

            int num = cipher[i] - '0';
            int end = i - 1;//结束位置
            int pos=1;//本次数字所占位数
            int j=i;
            while(isdigit(cipher[j+1]))
            {
                pos++;
                num*=10;
                num+=cipher[j+1]-'0';
                j++;
            }
            i=j;
            int start = num+mark;
            
            reverseSubstring(cipher, start, end);
            mark+=pos;
            i++;

        } 
        else 
        {
            i++;
        }
    }
    char m[101];
    sprintf(m,"%s",cipher);
    for(int i=0;i<length;i++)
        {
            if(m[i]<='9'&&m[i]>='0')
            {
                continue;
            }
            else
                printf("%c",m[i]);
        }
    return 0;
}


    

