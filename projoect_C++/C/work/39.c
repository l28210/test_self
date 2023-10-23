// Description
// 正则表达式描述了一种字符串匹配的模式，可以用来检查一个串是否含有某种子串等。而本题要求判断给定的简单正则表达式是否能与给定的字符串完全匹配（相当于正则表达式在开头加入^，结尾加入$）。

// 简单正则表达式只会涉及到以下特殊符号：

// +，匹配前面的字符一次或多次；
// *，匹配前面的字符零次或多次；
// ?，匹配前面的字符零次或一次。
// 给定的字符串将保证不会出现除了大小写英文字母与数字之外的其他字符，长度不会超过200。正则表达式中的特殊字符匹配前面的字符的次数不会超过10次（比如说在成功的匹配中，s*不会匹配到11个s，最多只会匹配到10个s）。如果能够完全匹配，返回1；否则返回0。

// 在文件test2.c中，已经完成了对?情况的实现question_result。请参考该实现与tool.h中的说明，在tool.c中完成下列函数的补全：

// void tail_string(char ch1[], char ch2[], int pos)
// void try_concatenate(char cache[],char afterward[],char ch,int num)
// int plus_result(char afterward[], char str[], char ch,int (*judge)(char *, char *))
// int star_result(char afterward[], char str[], char ch,int (*judge)(char *, char *))
// Note: 对于plus_result和star_result，请不用在意函数指针judge的原理，参考test2.c中的question_result函数直接调用即可。

// Input
// 两行，分别有两个字符串。第一个字符串为简单正则表达式，第二个字符串为给定的字符串

// Output
// 一行，如果能够完全匹配，则返回1，否则返回0。

// Sample Input 1
// s+tk*j?
// sssst
// ​
// Sample Output 1
// 1
// ​
// Sample Input 2
// kkl?a34?
// kklla34
// ​
// Sample Output 2
// 0



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define MAXN 201 // 最大字符串长度不超过100
# define MAXCOUNT 10 // 匹配次数不超过10次

// 提示：请自行设计测试用例，确保所实现的函数功能符合预期

// /*
// 函数：try_concatenate
// 输入：字符串cache，字符串afterStr，字符ch，整数num
// 输出：无
// 功能：需要在字符串cache中产生num个字符ch，并于字符串afterStr进行拼接
//     例如try_concatenate("","3456",'2',5)，cache的值在调用之后应当为"222223456"
// */
// void try_concatenate(char cache[], char afterStr[], char ch, int num) {
//     int len = strlen(cache);
//     for (int i = 0; i < num; i++) {
//         cache[len + i] = ch; // 注意，这里的索引应该从 len 开始，以追加字符到 cache 的末尾
//     }
//     for (int i = num, j = 0; j < strlen(afterStr); j++, i++) {
//         cache[len + i] = afterStr[j];
//     }
//     cache[len + num + strlen(afterStr)] = '\0'; // 在 cache 末尾添加 null 终止字符
// }


// /*
// 函数：tail_string
// 输入：字符串ch1，字符串ch2，位置变量pos
// 输出：无
// 功能：将字符串ch2从位置pos及以后的字符拷贝到ch1中。
//     例如tail_string("","01234567",3)，ch1的值在调用之后应当为"34567"
//     题目保证，字符串ch1的长度足够长
// 补充：数组ch2的值不可发生任何更改。
// */
// void tail_string(char ch1[], char ch2[], int pos) {
//     int i = 0,j=0;
//     int len2 = strlen(ch2);
//     if (pos >= 0 && pos < len2) {
//         for (i = pos, j = 0; i < len2; j++, i++) {
//             ch1[j] = ch2[i];
//         }
//     }
//     ch1[i] = '\0'; // 添加 null 终止字符以正确结束字符串
// }


// /*
// 函数：plus_result
// 输入：字符串afterStr，字符串str，字符ch，函数指针judge
// 输出：如果能够匹配，则返回1；否则，返回0.
// 功能：
//     该函数用于判断模糊匹配+的时候是否完全匹配，比如说对于给定正则表达式reg="1+23"和目标字符串str="1123"。
//     此时，afterStr为之后的字符"23"，str即为要匹配的目标字符串；ch为模糊匹配符前的字符，这里为'1'，judge为一个能够判断给定的两个字符是否完全匹配的函数，详情见test.c中的question_result函数
//     实现思路与question_result类似，但是+能够匹配1个到多个（最多为10个）字符
// */
// int plus_result(char afterStr[], char str[], char ch,int (*judge)(char *, char *))
// {
//     int result = 0;
//     int len = strlen(afterStr);
//     for (int i = 0; i <= len; i++) {
//         char cache[MAXN];
//         strcpy(cache, afterStr);
//         try_concatenate(cache, afterStr, ch, i);
//         if (judge(cache, str)) {
//             result = 1;
//             break;
//         }
//     }
//     return result;
// }

// /*
// 函数：star_result
// 输入：字符串afterStr，字符串str，字符ch，函数指针judge
// 输出：如果能够匹配，则返回1；否则，返回0.
// 功能：
//     该函数用于判断模糊匹配*的时候是否完全匹配，比如说对于给定正则表达式reg="1*23"和目标字符串str="1123"。
//     此时，afterStr为之后的字符"23"，str即为要匹配的目标字符串；ch为模糊匹配符前的字符，这里为'1'，judge为一个能够判断给定的两个字符是否完全匹配的函数，详情见test.c中的question_result函数
//     实现思路与question_result类似，但是*能够匹配0个到多个（最多为10个）字符
// */
// int star_result(char afterStr[], char str[], char ch,int (*judge)(char *, char *))
// {
//     int result = 0;
//     int len = strlen(afterStr);
//     char cache[MAXN];
//     strcpy(cache, afterStr);
//     for (int i = 0; i <= MAXCOUNT; i++) {
//         try_concatenate(cache, afterStr, ch, i);
//         if (judge(cache, str)) {
//             result = 1;
//             break;
//         }
//         strcpy(cache, afterStr);
//     }
//     return result;
// }

// /*
// 函数：question_result
// 输入：字符串afterStr，字符串str，字符ch，函数指针judge
// 输出：如果能够匹配，则返回1；否则，返回0.
// 功能：
//     该函数用于判断模糊匹配?的时候是否完全匹配，比如说对于给定正则表达式reg="1?23"和目标字符串str="123"。
//     此时，afterStr为之后的字符"23"，str即为要匹配的目标字符串；ch为模糊匹配符前的字符，这里为'1'，judge为一个能够判断给定的两个字符是否完全匹配的函数，具体实现见下面的judge函数（judge的实现细节与要实现的函数没有关系）
//     实现思路为将模糊匹配转换为精确匹配，再逐个比较（暴力递归）
//     具体思路见内部注释
// */



// 函数：tail_string
// 输入：字符串ch1，字符串ch2，位置变量pos
// 输出：无
// 功能：将字符串ch2从位置pos及以后的字符拷贝到ch1中。
void tail_string(char ch1[], char ch2[], int pos) {
    size_t len2 = strlen(ch2);
    if (pos < len2) {
        strcpy(ch1, ch2 + pos);
    } else {
        ch1[0] = '\0';  // 空字符串
    }
}

// 函数：try_concatenate
// 输入：字符串cache，字符串afterward，字符ch，整数num
// 输出：无
// 功能：需要在字符串cache中产生num个字符ch，并于字符串afterward进行拼接
void try_concatenate(char cache[], char afterward[], char ch, int num) {
    for (int i = 0; i < num; i++) {
        cache[i] = ch;
    }
    strcpy(cache + num, afterward);
}

// 函数：plus_result
// 输入：字符串afterward，字符串str，字符ch，函数指针judge
// 输出：如果能够匹配，则返回1；否则，返回0.
// 功能：判断模糊匹配+的时候是否完全匹配
int plus_result(char afterward[], char str[], char ch, int (*judge)(char *, char *)) {
    for (size_t i = 0; i <= strlen(afterward); i++) {
        char cache[MAXN];
        strcpy(cache, afterward);
        try_concatenate(cache, afterward, ch, i);
        if (judge(cache, str)) {
            return 1;
        }
    }
    return 0;
}

// 函数：star_result
// 输入：字符串afterward，字符串str，字符ch，函数指针judge
// 输出：如果能够匹配，则返回1；否则，返回0.
// 功能：判断模糊匹配*的时候是否完全匹配
int star_result(char afterward[], char str[], char ch, int (*judge)(char *, char *)) {
    char cache[MAXN];
    strcpy(cache, afterward);
    for (int i = 0; i <= MAXCOUNT; i++) {
        try_concatenate(cache, afterward, ch, i);
        if (judge(cache, str)) {
            return 1;
        }
        strcpy(cache, afterward);
    }
    return 0;
}


int question_result(char afterStr[], char str[], char ch,int (*judging)(char *, char *)){
    // ? 可以匹配0/1个原字符
    char cache[MAXN];
    int result = judging(afterStr,str); // 匹配0个原字符的情况，得到afterStr。再运用judging判断afterStr与所给的str是否完全匹配
    if(result){ // 只要之后的所有情况中有一个匹配即可返回
        return 1;
    }
    // 如果没有，则匹配有1个原字符的情况
    int i=1;
    memset(cache,0,sizeof(cache)); // 将cache清空
    try_concatenate(cache,afterStr,ch,i); // 使用try_concatenate产生用于精确匹配的结果，以注释中的例子，try_concatenate("","23",'1',1)，之后cache为"123"
    result = judging(cache,str); // 尝试使用judging进行匹配，并将结果返回
    return result;
}

int validChar(char ch){
    if(ch<='9' && ch>='0'){
        return 1;
    }
    else if(ch>='a' && ch<='z'){
        return 1;
    }
    else if(ch>='A' && ch<='Z'){
        return 1;
    }
    else{
        return 0;
    }
}

/*
输入：正则字符串reg，要匹配的字符串str
输出：reg是否能完全匹配str，如果是，则返回1；如果否，则返回0。
功能：使用递归方法，判断给定的正则
*/
static int times = 0;
int judge(char reg[], char str[]){
    // 安全措施，防止爆栈
    times ++;
    if(times>20000)
    {
        return -1;
    }
    int regLen = strlen(reg), strLen = strlen(str);
    // printf("judge %s(%d) %s(%d)\n",reg,regLen,str,strLen);
    // legal check
    if(regLen==0 || strLen==0)
    {
        // printf("last: run out something %s %s\n",reg,str);
        if(regLen==0&&strLen==0)
        {
            return 1;
        }
        else if(regLen==0)
        {
            return 0;
        }
        else
        { // regLen!=0 and strLen==0 此时后面可能有零匹配
            if(reg[0]=='+'||reg[0]=='*'||reg[0]=='?'){ // 最后刚好匹配上了
                if(regLen==1){
                    return 1;
                }else{
                    char ch1[MAXN];
                    memset(ch1,0,sizeof(ch1));
                    tail_string(ch1,reg,1);
                    return judge(ch1,str);
                }
            }
            else if(regLen>=2 && (reg[1]=='*' || reg[1]=='?')){
                char ch1[MAXN];
                memset(ch1,0,sizeof(ch1));
                tail_string(ch1,reg,2);
                return judge(ch1,str);
            }
            else{
                return 0;
            }
        }
    }
    // 如果当前表达式长度不足，进行最后一次精确匹配
    else if(regLen==1){
        // printf("last: only 1 length %s %s\n",reg,str);
        if(strLen>1){
            return 0;
        }
        if(reg[0]==str[0]){
            return 1;
        }else{
            return 0;
        }
    }

    // 如果能精确匹配
    int validResult = validChar(reg[1]);
    if(validResult){
        if(reg[0] == str[0]){
            //尝试进行后续匹配
            int i;
            for(i=1;i<strlen(reg)&&i<strlen(str);i++){
                if(reg[i]==str[i]){
                    continue;
                }else{
                    // printf("<%d> start: checking %s(%d) and %s(%d)\n",times,reg,strlen(reg),str,strlen(str));
                    // printf("<%d> start: checking %d %c\n",times,i,reg[i]);
                    //不匹配的原因
                    // 遇到特殊字符，回退，产生新的字符串，并请求。
                    if(!validChar(reg[i])){
                        char ch1[MAXN],ch2[MAXN];
                        memset(ch1,0,sizeof(ch1));
                        memset(ch2,0,sizeof(ch2));
                        tail_string(ch1,reg,i-1);
                        tail_string(ch2,str,i-1);
                        return judge(ch1,ch2);
                    }
                    // 当前失配不是特殊字符
                    else{
                        // 如果下一个是特殊字符（有可能为*/?）
                        if(i+1<strlen(reg) && (reg[i+1]=='*' || reg[i+1]=='?')){
                            char ch1[MAXN],ch2[MAXN];
                            memset(ch1,0,sizeof(ch1));
                            memset(ch2,0,sizeof(ch2));
                            tail_string(ch1,reg,i);
                            tail_string(ch2,str,i);
                            return judge(ch1,ch2);
                        }
                        else{
                            return 0;
                        }
                        
                    }
                }
            }
            if(strlen(reg)==strlen(str)){
                // printf("last: run out eq %s %s\n",reg,str);
                return 1;
            }else if(i==strlen(reg)){
                return 0;
            }else{
                // 正则串多了，原字符串用尽。
                // 有两种情况，一种是0匹配问题，这种的特点是第一个符号不是
                if(!validChar(reg[i])){
                    // f?f与f的匹配，即前面那个可能是存在的，也可能是不存在的
                    // Fj? Fj
                    if(reg[i]=='*' || reg[i]=='?'){
                        //枚举两种情况
                        // 前面存在
                        // ?的字符为0
                        char ch1[MAXN],ch2[MAXN];
                        memset(ch1,0,sizeof(ch1));
                        memset(ch2,0,sizeof(ch2));
                        tail_string(ch1,reg,i+1);
                        tail_string(ch2,str,i-1);
                        int result1 = judge(ch1,ch2);
                        if(result1){
                            return 1;
                        }
                        // ?的字符为1
                        memset(ch1,0,sizeof(ch1));
                        memset(ch2,0,sizeof(ch2));
                        tail_string(ch1,reg,i+1);
                        tail_string(ch2,str,i);
                        return judge(ch1,ch2);
                    }else{
                        // f6+与f6的匹配
                        char ch1[MAXN],ch2[MAXN];
                        memset(ch1,0,sizeof(ch1));
                        memset(ch2,0,sizeof(ch2));
                        tail_string(ch1,reg,i+1);
                        tail_string(ch2,str,i);
                        return judge(ch1,ch2);
                    }
                    
                }else{ // 0匹配问题
                    char ch1[MAXN],ch2[MAXN];
                    memset(ch1,0,sizeof(ch1));
                    memset(ch2,0,sizeof(ch2));
                    tail_string(ch1,reg,i);
                    tail_string(ch2,str,i);
                    return judge(ch1,ch2);
                }
            }
        }else{
            // printf("last: first judge %s %s\n",reg,str);
            return 0;
        }
    }else{
        //开始模糊匹配。思路：模糊到精确，然后匹配精确值。
        // 根据给定的数量产生，得到一个ch数组。然后拼接成另外一个数组
        char afterward[MAXN];
        memset(afterward,0,sizeof(afterward));
        // 产生后续数据
        tail_string(afterward,reg,2);// 获得之后的数据结果
        // 比较当前reg是否能完全匹配
        switch(reg[1]){
            case '+':{
                int result = plus_result(afterward,str,reg[0],judge);
                return result;
            }
            case '*':{
                int result = star_result(afterward,str,reg[0],judge);
                return result;
                break;
            }
            case '?':{
                int result = question_result(afterward,str,reg[0],judge);
                return result;
                break;
            }
        }

    }
    return 0;
}

int main(void){
    char reg[MAXN],str[MAXN];
    memset(reg,0,sizeof(reg));
    memset(str,0,sizeof(str));
    // freopen("test.txt","r",stdin);
    // freopen("ans2.txt","w",stdout);
    scanf("%s%s",reg,str);
    printf("%d\n",judge(reg,str));
    return 0;
}