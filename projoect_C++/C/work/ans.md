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

void reverseSubstring(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void decryptCipher(char *cipher) {
    int length = strlen(cipher);
    for (int i = 0; i < length; i++) {
        if (cipher[i] >= '0' && cipher[i] <= '9') {
            int start = i;
            int end = length - 1;
            while (i < length && cipher[i] >= '0' && cipher[i] <= '9') {
                end = i;
                i++;
            }
            reverseSubstring(cipher, start, end);
        }
    }
}

int main() {
    char cipher[101];
    scanf("%s", cipher);
    decryptCipher(cipher);
    printf("%s\n", cipher);
    return 0;
}


39
Description
正则表达式描述了一种字符串匹配的模式，可以用来检查一个串是否含有某种子串等。而本题要求判断给定的简单正则表达式是否能与给定的字符串完全匹配（相当于正则表达式在开头加入^，结尾加入$）。

简单正则表达式只会涉及到以下特殊符号：

+，匹配前面的字符一次或多次；
*，匹配前面的字符零次或多次；
?，匹配前面的字符零次或一次。
给定的字符串将保证不会出现除了大小写英文字母与数字之外的其他字符，长度不会超过200。正则表达式中的特殊字符匹配前面的字符的次数不会超过10次（比如说在成功的匹配中，s*不会匹配到11个s，最多只会匹配到10个s）。如果能够完全匹配，返回1；否则返回0。

在文件test2.c中，已经完成了对?情况的实现question_result。请参考该实现与tool.h中的说明，在tool.c中完成下列函数的补全：

void tail_string(char ch1[], char ch2[], int pos)
void try_concatenate(char cache[],char afterward[],char ch,int num)
int plus_result(char afterward[], char str[], char ch,int (*judge)(char *, char *))
int star_result(char afterward[], char str[], char ch,int (*judge)(char *, char *))
Note: 对于plus_result和star_result，请不用在意函数指针judge的原理，参考test2.c中的question_result函数直接调用即可。

Input
两行，分别有两个字符串。第一个字符串为简单正则表达式，第二个字符串为给定的字符串

Output
一行，如果能够完全匹配，则返回1，否则返回0。

Sample Input 1
s+tk*j?
sssst
​
Sample Output 1
1
​
Sample Input 2
kkl?a34?
kklla34
​
Sample Output 2
0
0

40
题目描述
编写子函数Transpose，利用指针数组实现矩阵转置功能

输入格式
输入 3×3 矩阵，矩阵的每个元素都为 int 型。

输出格式
输出转置后的矩阵 3×3 的矩阵。

输入样例1
1 2 3
4 5 6
7 8 9
​
输出样例1
1 4 7
2 5 8
3 6 9
​
输入样例2
-2 3 5
8 -4 2
0 3 -1
​
输出样例2
-2 8 0
3 -4 3
5 2 -1
-2 8 0
3 -4 3
5 2 -1

41
题目描述
根据主函数和头文件提示，编写子函数char *revStr(char *s);，其功能为：将字符串 s 逆序。

输入格式
输入一个长度不超过100的字符串 s。

输出格式
输出字符串 s 的逆序。

输入样例1
apple
​
输出样例1
elppa
​
输入样例2
programming
​
输出样例2
gnimmargrop
​
提示
若需要返回局部变量地址，需将其定义为static类型；

42
题目描述
给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。
rainwatertrap.png

输入格式
第一行：输入柱子的个数 n，1≤n≤12；
第二行：输入 n 个整数，表示每根柱子的高度。

输出格式
输出一个整数 ans，表示总蓄水量。

输入样例1
12
0 1 0 2 1 0 1 3 2 1 2 1
​
输出样例1
6
​
输入样例2
6
4 2 0 3 2 5
​
输出样例2
9

43
题目描述
给你一个长度为 n 的整数数组，请你判断在最多改变 1 个元素的情况下，该数组能否变成一个非递减数列。如：

对于数列：4,2,3，可以通过把第一个4变成1来使得它成为一个非递减数列1,2,3

非递减数列： 对于数组中任意的 i (0 <= i <= n-2)，总满足 nums[i] <= nums[i + 1]。

输入输出
输入输出格式
输入整型数组长度(<7)与其元素([-100,100])，输出判断结果；

输出输出样例
输入1：

5
1 2 3 4 3
​
输出1：

YES

输入2：

5
1 2 3 2 1
​
输出2：

NO


44
题目描述
根据主函数与头文件格式编写子函数：avg和avg_i，分别用来计算全班同学总平均成绩与某位同学的平均成绩；

输入输出
输入输出格式
以两位同学，各三科成绩为例，输入两行三列数据

avg函数输出全班同学的平均成绩；
avg_i输出某位同学（函数参数）的平均成绩。
数据范围：[0,100]内正实数；

输出输出样例
输入1：

70 80 90
50 60 70
​
输出1：

70.00
80.00
60.00
​
输入2：

85 90 96
75 64 82
​
输出2：

82.00
90.33
73.67
​
提示
浮点数操作建议使用double完成；


45
题目描述
根据主函数和头文件提示，编写子函数selectionSort及swap对同学们的成绩按照从高到低的顺序进行排序，总成绩相同则以学号为准升序排列；

输入输出
输入输出格式
输入多行四列数据，每行数据分别为单个同学的学号，三科成绩；

输入学号为-1的行数据结束；

输出输出样例
输入1：

202000 85 81 69
202001 36 63 64
202002 63 54 86
202003 53 44 100
202004 55 69 39
202005 73 83 91
202006 41 72 73
202007 61 90 60
202008 54 90 25
202009 67 100 25
-1 0 0 0
​
输出1：

Original grades:
stuNum   math       english    computer   total
202000     85         81         69         235
202001     36         63         64         163
202002     63         54         86         203
202003     53         44         100        197
202004     55         69         39         163
202005     73         83         91         247
202006     41         72         73         186
202007     61         90         60         211
202008     54         90         25         169
202009     67         100        25         192
---------------------------------------------------
descending sort by total grades:
stuNum    Math      English    Computer   Total
202005     73         83         91         247
202000     85         81         69         235
202007     61         90         60         211
202002     63         54         86         203
202003     53         44         100        197
202009     67         100        25         192
202006     41         72         73         186
202008     54         90         25         169
202001     36         63         64         163
202004     55         69         39         163

Original grades:
stuNum   math       english    computer   total
202000     85         81         69         235
202001     36         63         64         163
202002     63         54         86         203
202003     53         44         100        197
202004     55         69         39         163
202005     73         83         91         247
202006     41         72         73         186
202007     61         90         60         211
202008     54         90         25         169
202009     67         100        25         192
---------------------------------------------------
descending sort by total grades:
stuNum    Math      English    Computer   Total
202005     73         83         91         247
202000     85         81         69         235
202007     61         90         60         211
202002     63         54         86         203
202003     53         44         100        197
202009     67         100        25         192
202006     41         72         73         186
202008     54         90         25         169
202001     36         63         64         163
202004     55         69         39         163


46
题目
定义一个结构体变量(包括年,月、日)。计算该日在本年中是第几天。

输入
第一行输入n代表n个日期。
接下来输入n行，每行输入 年 月 日 三个数。

输出
输出n行，每一行相应输出该日期在本年中是第几天。

输入样例
3
1998 08 07
2000 09 23
2003 12 23

输出样例
219
267
357

提示
注意闰年问题。

47
题目
某某公司近期在进行工资统计，需要统计n位员工中的工资信息，邀请你帮忙写出一个程序，帮助其输出最高工资信息，并将该员工的信息放到表头，其他员工信息的相对位置不发生改变。

输入
输入n代表n位员工(0<n<100)
接下来输入n行，每行输入员工id（保证id不重复），员工年龄，员工工资（保证工资不重复），员工姓名（姓名长度不超过10）

输出
总共输出n+1行，第一行n位员工中的最高工资。
接下来的n行输出最新名单的员工id号。

输入样例

3
1 44 12270 NUtrS
3 38 12411 VZnkV
2 41 14368 RmtIT

​
输出样例

14368
2
1
3

​
提示
输出的末尾行应当包含一个换行符（\n）；
以样例1为例，输入员工信息的id依次为 1,3,2。最高工资员工id为2，因此调整到表头前，id号1和3的相对位置不变，因此输出 2 1 3。





48
题目
某某公司非常感谢您对贵公司工资系统开发提供的帮助，现公司需要进行员工信息系统升级，以帮助管理员工信息，功能接口如下：
1 添加员工
2 删除员工：删除指定id的员工，当员工id不存在时不进行处理
3 员工最大年龄，没有员工时，返回0。
4 员工平均薪资(输出向下取整的整数)，没有员工时,返回0。
5 员工总人数
总共有n条指令（0<n<=100）,对于添加、删除员工指令结束后系统都会输出当前公司员工数量。

输入
输入n代表有n条指令(0<n<=100)
接下来有n条指令的相关操作 order（1<=order<=5）,当order为1或2时会有额外的录入，具体如下：
order 为1：输入员工信息（员工id（保证id不重复），员工年龄，员工工资，员工姓名（姓名长度不超过10））。
order 为2：输入id号

输出
由main函数中定义输出，同学接口过程不需要进行数据输出。

输入样例
6
1
969 26 13472 GFDuB
3
1
938 30 13056 iroAEjwc
4
5
2
969
​
输出样例
员工总数：1
员工最高年龄：26
员工总数：2
员工平均薪资：13264
员工总数：2
员工总数：1
​
提示
本示例中有6条指令，分别为添加员工、获取平均年龄、添加员工、获取平均薪资、获取员工总数、删除员工。
对于第二条指令，当orer为1时，输入员工信息 969 26 13472 GFDuB
对于第六条指令，order为2时，输入需要删除员工的员工号 969




49
Description
歌手The Pancakes到幼儿园跟小朋友玩耍，她到达的时候小朋友们已经争着积木玩了。小朋友都想要更多的积木砌一个自己喜欢的图形，砌完就可以和The Pancakes合照。同时，The Pancakes手上还有一些积木，她可以把手上的这些积木全部给一个小朋友，然后等该小朋友砌完后就可以收回所发的积木和该小朋友原先手上的积木。但她不知道能否让所有的小朋友都和她合照，聪明的你可以帮助她吗？

Input
输入包含多个数据。

每个数据的第一行是两个正整数n和s，1≤n≤100，1≤s≤100，表示一共有n位小朋友，The Pancakes手上有s块积木。以下有n行，第i行（1≤i≤n）有两个正整数，a和b，1≤a,b≤10 
3
 ，表示第i个小朋友手上有a块积木，还需要b块积木才能够砌完。

输入n=0时表示结束。

Output
如果可以让所有小朋友都和Pancake合照，就输出YES；否则，输出NO。

Sample Input
2 2
1 4
2 1
2 2
1 4
1 1
0 0
​
Sample Output
YES
NO
YES
NO





50
Description
恶魔猎手尤迪安野心勃勃，他背叛了暗夜精灵，率领深藏在海底的娜迦族企图叛变。守望者在与尤迪安的交锋中遭遇了围杀，被困在一个荒芜的大岛上。为了杀死守望者，尤迪安开始对这个荒岛施咒，这座岛很快就会沉下去。到那时，岛上的所有人都会遇难。

守望者的跑步速度为17m/s，以这样的速度是无法逃离荒岛的。庆幸的是守望者拥有闪烁法术，可在1s内移动60m，不过每次使用闪烁法术都会消耗魔法值10点。守望者的魔法值恢复的速度为4点/s，只有处在原地休息状态时才能恢复。

现在已知守望者的魔法初值M，他所在的初始位置与岛的出口之间的距离S，岛沉没的时间T。你的任务是写一个程序帮助守望者计算如何在最短的时间内逃离荒岛，若不能逃出，则输出守望者在剩下的时间内能走的最远距离。注意：守望者跑步、闪烁或休息活动均以秒(s)为单位，且每次活动的持续时间为整数秒。距离的单位为米(m)。

Input
输入包含多个测试数据(以EOF结束)，每个测试数据仅一行，包括空格隔开的三个非负整数M, S, T。

0 <= M <= 1000, 1 <= S <= 10^6, 1 <= T <= 300000

Output
对每个测试数据输出两行：

第1行为字符串"Yes"或"No"（区分大小写），即守望者是否能逃离荒岛。

第2行包含一个整数。第一行为"Yes"（区分大小写）时表示守望者逃离荒岛的最短时间；第一行为"No"（区分大小写）时表示守望者能走的最远距离。

Sample Input
39 200 4
36 255 10
​
Sample Output
No
197
Yes
6
No
197
Yes
6





51
Description
In a game of TicTacToe, two players take turns making an available cell in 3*3 grid with their respective tokens (player1 uses X and player2 uses O). When one player has placed three tokens in a horizontal, vertical, or diagonal row on the grid, the game is over and that player has won. A draw (no winner) occurs when all the cells on the grid have been filled with tokens and neither player has achieved a win. Create a program for playing TicTacToe as follows:

Read in play step, in the following format:
rowNum columnNum token
rowNum, columnNum is one of 1, 2, 3.
token is either X or O.
rowNum, columnNum tells where the player place his token.
For example, 3 1 X means player1 place his token X in row 3 column 1, 2 2 O means player2 place his token O in row 2 column 2..
Whenever a play step is entered, the program refeshes the board and determines the status of the game (player1 win, player2 win, draw, or unfinished).
Input
The first line is a positive integer t for the number of test cases.
Each test case contains n+1 lines. The line 1 contains an integer n (0<n<=9), means that the test case contains a n play step. Then followed n lines, each line contains a play step.

Output
For each test case, output "test case #testcaseNum:" in first line, then output another n lines. Each line is the status after the nth play step.

Sample Input
2  
8  
2 2 X  
2 1 O  
3 3 X  
1 1 O  
1 3 X  
1 2 O  
3 1 X  
2 3 O  

9  
1 1 X  
2 2 O  
1 2 X  
1 3 O  
3 1 X  
2 1 O  
2 3 X  
3 2 O  
3 3 X  
​
Sample Output
test case 1:  
unfinished  
unfinished  
unfinished  
unfinished  
unfinished  
unfinished  
player1 won  
player1 won  
test case 2:  
unfinished  
unfinished  
unfinished  
unfinished  
unfinished  
unfinished  
unfinished  
unfinished  
draw  
​
Hint
Player1 plays firstly.





53
题目
输入一个在[100,999] 之间的整数，输出其反转后的数字。

问题输入
一个在[100,999] 之间的整数

问题输出
反转后的整数

样例输入1
123
​
样例输出1
321
​
样例输入2
120
​
样例输出2
21
​
提示
巧妙运用整数除法和求余可以获得个位、十位、百位的数字






54
题目
相信大家已经在中大的各个饭堂吃过不少顿饭了，其中每个饭堂都会有自选窗口，每位同学可以拿自己喜欢的菜，然后最后再计算总价。为了简化，假设只选了两种菜，但每种都可能不止一份。现在，请编写一个程序来帮一位同学计算一顿饭钱。

问题输入
输入共两行，每一行有两个整数a和b（1≤a,b≤100），表示这种菜的单价，以及同学拿了几份。

问题输出
输出总价。

样例输入
1 2
3 4
​
样例输出
14
​
提示
14=1*2+3*4




55
题目
一日，有一个人前来买瓜，他骑着摩托来到了水果摊前面，问摊主：“哥们儿，你这瓜多少钱一斤啊？” “两块钱一斤。”摊主的回答脱口而出，然后心里一紧，发现这场景似曾相识。
“给我挑一个，它的重量x要满足ax 
2
 +bx+c=0的。”
摊主问：“你这人是不是故意找茬”
“你要是能挑出一个（有且仅有一个）瓜，那我肯定买”
摊主再三思索还是决定算出x来，但他算不出来，于是请求上过小学二年级的你来帮忙。
PS:这是一个魔法的世界，负数重量的瓜是存在的

问题输入
三个整数a, b, c, 含义见题目
（数据范围：1≤∣a∣,∣b∣,∣c∣,≤1000，且b 
2
 −4ac>0）

问题输出
满足ax 
2
 +bx+c=0的x 
1
​
 和x 
2
​
 ，保留两位小数，两个根不相等时先输出小的。

样例输入
1 2 1
​
样例输出
-1.00 -1.00
​
提示
算开平方可以使用数学库函数，具体可以自己运行下面这段程序

#include<math.h>
#include<stdio.h>

int main() {
	printf("9的0.5次方=%.2lf\nsqrt(9)=%.1lf",pow(9,0.5),sqrt(9));
}
#include<math.h>
#include<stdio.h>

int main() {
	printf("9的0.5次方=%.2lf\nsqrt(9)=%.1lf",pow(9,0.5),sqrt(9));
}






56
题目
输入三位同学的语文数学英语成绩，分别求三人的总成绩，以及他们总成绩、语文、数学、英语的平均成绩。

问题输入
输入三行，每行三个整数。第i行的三个数字依次表示第i个人的语文、数学、英语成绩。

问题输出
输出两行，第一行输出三个数字依次表示第1、2、3个人的总成绩，第二行输出四个数字，依次表示总成绩、语文成绩、数学成绩、英语成绩的平均值。输出的成绩均保留两位小数。

样例输入
1 2 3
4 5 6
7 8 9
​
样例输出
6.00 15.00 24.00
15.00 4.00 5.00 6.00
6.00 15.00 24.00
15.00 4.00 5.00 6.00






57  
题目
输入两个在[100,999] 之间的整数，交换他们的百位数字。

问题输入
两个在[100,999] 之间的整数

问题输出
交换百位数字之后的两个整数

样例输入1
123 321
​
样例输出1
323 121
​
样例输入2
120 210
​
样例输出2
220 110
​
提示
巧妙运用整数除法和求余可以获得个位、十位、百位的数字。



58
题目
已知满足以下两种情况之一时，该年是闰年，反之则不是。

年份是4的倍数但不是100的倍数；
年份是400的倍数。
请编写程序读入一个整数，并判断该年份是否是闰年。

输入格式：
输入一个整数y，表示当前的年份。

输出格式：
输出一行，如果给定的年份是闰年，则输出YES，否则输出NO。

Sample Input 1:
1980

Sample Output 1:
YES

Sample Input 2:
2017

Sample Output 2:
NO

注意：
1900 <= y <= 2017
答案的最后带有一个'\n'





59
题目
输入两个正数x和y(x与y的大小未知)，输出从x与y之间的奇数的和。

输入
输入 x和y ( 0<x<=1000,0<y<=1000)

输出
输出从x到y的奇数的和（不包含奇数则输出0）。

样例1
3 5
​
样例1输出
8

​
样例2
11 3

​
样例2输出
35

​
注意
输出结果都会有换行符("\n");







60
题目
输入一个十进制整数x（0<x<=1000000），要求:

输出对应二进制数中1出现的次数
输入
输入 x

输出
输出对应二进制数中1出现的次数

样例1
4
​
样例1输出
1
​
样例2
12
​
样例2输出
2
​
注意
输出结果都会有换行符("\n");






61
Description
小沁是一只可爱的很胖的猫咪，你现在要陪它玩。你每次有三个选择：摸猫猫头，喂猫粮，什么也不做，分别用数字代号2、1、0表示，它们的效果如下。

摸猫猫头：小沁的心情值+1；
喂猫粮：小沁的心情值+2，体重值翻倍；
什么也不做：小沁的心情值-1，体重值减少四分之一（即变为原来的0.75倍）。
小沁的初始心情值是1，初始体重值是100.0。每当小沁的心情值改变时，根据改变后的心情值输出相应语句：

心情值大于0：输出Little Qin is happy! XD；
心情值等于0：输出Little Qin wants to play with you~ : )；
心情值小于0：输出Little Qin is sad... : (。
同理，每当小沁的体重值改变时，根据改变后的体重值输出相应语句：

体重值小于50.0：输出Cute!；
体重值在50.0和200.0之间（包含两端）：输出So cute!；
体重值大于200.0：输出Extremely CUTE!；
现在要求你根据输入的动作序列（包含7个动作），模拟陪小沁玩的过程，并输出一系列对应的语句。

Input
共7行，每行是0、1、2三个数字之一，代表相应动作。

Output
模拟过程中产生的语句序列。每个语句都带有换行。

Sample Input
2
0
0
1
1
2
0
​
Sample Output
Little Qin is happy! XD
Little Qin is happy! XD
So cute!
Little Qin wants to play with you~ : )
So cute!
Little Qin is happy! XD
So cute!
Little Qin is happy! XD
Extremely CUTE!
Little Qin is happy! XD
Little Qin is happy! XD
So cute!
​
Hint
不需要编写main函数。以下5个函数已经在play.h中被声明，在play.c中完成它们的定义即可。

int change_mood(int mood, int val);    // 将心情值改变为mood+val，并返回新的心情值；
void change_weight(float factor);    // 将体重值改变为原来的factor倍；请借助extern关键字使用main.c中声明的变量weight；
int rua(int mood);    // 摸猫猫头：输入当前心情值，返回新的心情值；
int feed(int mood);    // 喂猫粮：输入当前心情值，返回新的心情值；
int do_nothing(int mood);    // 什么也不做：输入当前心情值，返回新的心情值；
​
次序：请总是先更新心情值再更新体重值。
请体会心情值mood和体重值weight的作用域，以及它们各自在函数中传递、更新的方式。






62
Description
可爱的很胖的猫咪小沁，与它的朋友们一起组成了一个猫咪合唱团。除开小沁之外，合唱团中总共有318只猫咪，编号依次为0～317。其中317只猫咪的音量都是100，剩下可能有一只猫咪因为没睡醒，所以音量只有90；现在我们要找出这只猫咪，或者确认所有猫咪都睡醒了。聪明的小沁每次可以指挥一组连续编号的猫咪发出声音，并记录它们的音量之和。但是猫咪们不是很有耐心，如果你指挥它们发出声音的次数超过18次，那么它们就都会四散跑掉，各自去玩啦。

小沁提供了这一函数int meow(int start, int end);，它的输入是两个猫咪编号start和end，它会返回左闭右开区间[start, end)中猫咪的音量之和；如果你输入的猫咪编号不合法，或者累计调用次数已达18次，那么它就会返回-1。你需要完成函数int find_sleepy_cat(int start, int end);，它的输入也是两个猫咪编号start和end，它需要返回左闭右开区间[start, end)中没睡醒的那只猫咪的编号；如果这一区间当中所有猫咪都睡醒了，请返回-1。

Input
没睡醒的猫咪的编号i，i的取值范围是[-10, 330]。
如果输入的编号不合法，说明编号0～317的猫咪其实都睡醒了。

Output
输出没睡醒的猫咪的编号；如果所有猫咪都睡醒了，请输出-1。

Sample Input
123
​
Sample Output
123
​
Hint
不需要关心函数int meow(int start, int end);是如何实现的。
建议用递归哦：将猫咪们划分为两组，并分别观察每一组猫咪的音量之和是否偏小，对音量偏小的一组猫咪递归调用函数int find_sleepy_cat(int start, int end);，直至区间[start, end)中只剩下一只猫咪；如果两组猫咪的音量都正常，则说明区间内的全部猫咪都睡醒了。








63
Description
给出一个有序的整数数组 A 和有序的整数数组 B ，请将数组 B 合并到数组 A 中，变成一个有序的升序数组
数据范围：0<=n,m<=100, |Ai|<=100, |Bi|<=100
注意：
1.保证 A 数组有足够的空间存放 B 数组的元素， A 和 B 中初始的元素数目分别为 m 和 n，A的数组空间大小为 m+n
2.不要返回合并的数组，将数组 B 的数据合并到 A 里面就好了
3. A 数组在[0,m-1]的范围也是有序的

Input
两行数字，m,n，分别表示两个数组的大小。接下来m行输入第一个数组A的元素，然后n行输入第二个数组B的元素。

Output
输出m+n行数字，每一行为合并后数组A的元素

Sample Input
3 3
4
5
6
1
2
3

​
Sample Output
1
2
3
4
5
6

​
Sample Input2
4 3
1
3
5
7
2
4
6

​
Sample Output2
1
2
3
4
5
6
7
​








64
题目
给定一个长度为len的整数数组 arr，如果它是有效的凸数组就打印输出字符串"true"，否则打印输出"false"。

如果数组arr 满足下述条件，那么它是一个有效的凸数组：

len >= 3
在 0 < i < len - 1 条件下，存在 i 使得：
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[len - 1]
有效凸数组图示如下：

file

数据规模
1<=len<= 10 
4
 
0<=arr[i]<=10 
4
 
样例1
输入
arr = [2,1]
​
输出
false
​
样例2
输入
arr=[3,5,5]
​
输出
false
​
样例3
输入
arr = [0,3,2,1]
​
输出
true
​
提示
你需要完成函数void validMountainArray(int* arr, int len);该函数输入一个数组arr和该数组长度len，若该数组为有效的凸数组，你需要打印输出字符true，否则你需要打印输出字符false。







65
Description
假如一个字符串翻转后还是它本身，我们称这个字符串是漂亮的字符串。

实现一个函数，判断一个字符串是否是一个漂亮的字符串，是则输出true，否则输出false。

strlen()可以求一个字符串的长度，需要include<string.h>

Input
一行，输入的字符串。1<=字符串的大小<=100，每个字符为小写字母，即'a'<=字符<='z'

Output
如果字符串为漂亮的字符串，返回true，否则返回false

Sample Input
aba
​
Sample Output
true
​
Sample Input2
abaa
​
Sample Output2
false
​
Sample Input3
a
​
Sample Output3
true
​






66
Description
给定两个字符串，把它们拼接到一起以后反向输出出来。比如“ab”和"cd"，拼接成"abcd"后按照"dcba"输出。字符串没有空格且长度小于等于40。

Input
输入的第一行为测试样例个数，接下来的每两行代表一个样例，分别是第一个字符串和第二个字符串。

Output
输入为拼接后的反向输出。

Sample Input
2
abcdefg
hijklmn
i_love_you
uoy_evol_i
​
Sample Output
nmlkjihgfedcba
i_love_youuoy_evol_i

nmlkjihgfedcba
i_love_youuoy_evol_i






67
Description
trim是一个字符串中常用的函数，原意是切除不想要的部分。在许多编程语言中，trim被用来去除字符串前后相同的字符，比如说前后的空格。

Hint
输入的字符可能包含空格，建议使用gets函数

Input
一行，一个字符串，长度不超过100，其中包括大小写字母和数字，可能出现空格。
保证字符串前后的字符必定出现且相同。

Output
一行，一个字符串，表示剪切后的字符串。

Sample Input
000ssjtl04s0000
​
Sample Output
ssjtl04s
​





68
Description
罗马数字包含以下七种字符： I， V， X， L，C，D 和 M，其对应关系如下表：

字符	数值
I	1
V	5
X	10
L	50
C	100
D	500
M	1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做 XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。

你的任务是设计一个算法，将一个整数转换为罗马数字。不巧的是，此时打印机恰好发生了一些故障。它不能够打印某些字符，否则将会发生故障彻底损坏。因此，你需要将这部分字符从生成的罗马数字中剔除掉。

Input
输入有两行

第一行为一个整数num，代表要转换的数，其中1 <= num <= 3999；

第二行为一个字符串，字符串中的字符不能在结果中出现，保证字符串的长度不会超过3。

Output
输出为一个字符串，代表转换成的罗马数字。如果罗马数字全部不能打印，则输出空行。

Sample Input
9
I

Sample Output
X




69
题目描述
根据主函数和头文件提示，编写子函数char *insert(char *s1, char *s2, int n);，其功能为：将字符串 s2 插入到字符串 s1 的第 n 的位置处；

输入格式
一共是三行：

第一行：输入第一个字符串 s1；
第二行：输入第二个字符串 s2；
第三行：输入一个整数 n，表示在第一个字符串 s1 的第 n 的位置插入第二个字符串 s2。
保证输入字符串 s1 和 字符串 s2 的长度不大于100，n 的大小不大于 s1 的长度。

输出格式
输出插入后的字符串 s。

输入样例1
123456
insert
3
​
输出样例1
123insert456
​
输入样例2
contents
class
0
​
输出样例2
classcontents
classcontents







70
题目描述
根据主函数和头文件提示，编写子函数

void matrixInput(int *mat);
void matrixPrint(int *mat);
void matrixMultiply(int *mat1, int *mat2, int *res);
​
分别实现矩阵的输入，输出和相乘：

使用void matrixInput(int *mat); 为输入矩阵 mat，矩阵每个元素均为 int 类型；
使用void matrixPrint(int *mat); 为输出矩阵 mat；
使用void matrixMultiply(int *mat1, int *mat2, int *res); 为矩阵 mat1 和 矩阵 mat2 相乘，其结果存储在 res 中。
输入格式
输入两个三行三列的矩阵 A,B，每个元素均为 int 类型。

输出格式
输出一个三行三列的矩阵 C，每个元素均为 int 类型，C=AB。

输出样例1
1 2 3
4 5 6
7 8 9
1 0 0
0 1 0
0 0 2
​
输出样例1
1 2 6
4 5 12
7 8 18
​
输入样例2
0 1 0
1 0 0
0 0 -1
1 2 3
4 5 6
7 8 9
​
输出样例2
4 5 6
1 2 3
-7 -8 -9
​







71
题目描述
根据主函数和头文件提示，编写相关子函数完成计算数组输入、排序与输出功能，其中排序使用升序或降序由函数（指针）动态指定，如下图所示：
art.jpg

输入输出
输入输出格式
数组元素取[-100,100]内整数；

输出输出样例
输入1：

5
1 3 2 4 5
​
输出1：

Elements before sorting: 1 3 2 4 5
Array in ascending order: 1 2 3 4 5
Array in descending order: 5 4 3 2 1

输入2：

6
-10 4 3 5 -32 99
​
输出2：
Elements before sorting: -10 4 3 5 -32 99
Array in ascending order: -32 -10 3 4 5 99
Array in descending order: 99 5 4 3 -10 -32

提示
各子函数功能如下：

void inputArray(int *arr, int size);

实现一个长度为size的一维数组的输入；

void printArray(int *arr, int size);

实现一个长度为size的一维数组的输出；

int Ascending(int *num1, int *num2);

对两个数值进行比较，num1>num2则返回正值，num1<num2返回负值，否则输出0；

int Descending(int *num1, int *num2);

对两个数值进行比较，num2>num1则返回正值，num2<num1返回负值，否则输出0；

void sort(int *arr, int size, int (* compare)(int *, int *));

对一个长度为size的一维数组arr进行排序，排序方式由compare指定，其中，compare为指向函数的指针，可动态指向Ascending或Descending以实现升序或降序排序。

对以上函数的调用方式见主函数



72
题目描述
根据主函数架构和头文件提示，编写子函数compareVersion比较两个版本号 version1 和 version2

版本号由一个或多个修订号组成，各修订号由一个 '.' 连接。每个修订号由多位数字组成，可能包含前导零，如，2.5.33 和 0.1 都是有效的版本号。

版本号比较规则如下：

大版本优先比较，即按从左到右的顺序依次比较它们的修订号：1.0.1 < 1.1, 12.5 > 11.23.45， 123.2343.2323 < 456
比较修订号时，忽略前导0：如1.01 == 1.001 ，两者均表示在大版本1下修订一次的版本；但1.010 > 1.01，前者表示在大版本1下修订10次。
输入输出
输入输出格式
输入两个版本号，长度小于100，其中包含一个或多个修订号（即修订号长度范围1~99）；

子函数返回规则如下：

如果 version1 > version2 返回 1;
如果 version1 < version2 返回 -1;
除此之外返回 0。
输出输出样例
输入1：

1.2.3
1.02.03.0
​
输出1：

The same version.

输入2：

9.23.34.32
10
​
输出2：

10 is the new version.

提示
注意数据范围，使用合适的数据类型或方法防止溢出；




73
题目描述
时间复杂度是用来衡量算法操作次数和输入规模之间的关系的指标，在计算机科中，时间复杂度是一个函数，它定性描述该算法的运行时间。时间复杂度常用T(n)符号表述,常见的O(n)称为算法运行时间的上界，也就是最坏情况下的时间复杂度。若对于一个算法，T(n)的上界与输入大小无关，则称其具有 常数时间 ，记作O(1)时间。一个例子是访问数组中的单个元素，因为访问它只需要一条指令。但是，找到无序数组中的最小元素则不是，因为这需要遍历所有元素来找出最小值，这时T(n)的上界就是O(n)。请你在线性时间复杂度O(n)内(即要求遍历一趟链表)，实现删除链表倒数第k个结点。

输入输出
输入输出格式
输入为两行

第一行有两个整数，链表结点个数n，被删除结点位序k

第二行有n个ElementType型数据

输入输出样例
输入1：

4 3
-1 2 4 6
​
输出1：

-1 4 6
​
输入2：

6 3
1 3 7 2 -10 5
​
输出2：

1 3 7 -10 5
​
提示
时间限制在500ms，请尽量用时间复杂度为O(n)的算法实现





74
题目描述
时间复杂度是用来衡量算法操作次数和输入规模之间的关系的指标，在计算机科中，时间复杂度是一个函数，它定性描述该算法的运行时间。时间复杂度常用T(n)符号表述,常见的O(n)称为算法运行时间的上界，也就是最坏情况下的时间复杂度。若对于一个算法，T(n)的上界与输入大小无关，则称其具有 常数时间 ，记作O(1)时间。一个例子是访问数组中的单个元素，因为访问它只需要一条指令。但是，找到无序数组中的最小元素则不是，因为这需要遍历所有元素来找出最小值，这时T(n)的上界就是O(n)。请你在线性时间复杂度O(n)内(即要求遍历一趟链表)，实现删除链表倒数第k个结点。

输入输出
输入输出格式
输入为两行

第一行有两个整数，链表结点个数n，被删除结点位序k

第二行有n个ElementType型数据

输入输出样例
输入1：

4 3
-1 2 4 6
​
输出1：

-1 4 6
​
输入2：

6 3
1 3 7 2 -10 5
​
输出2：

1 3 7 -10 5
​
提示
时间限制在500ms，请尽量用时间复杂度为O(n)的算法实现





75
Descrption
1只公鸡值5文钱；1只母鸡值3文钱；3只小鸡值1文钱。请问用100文钱买100只鸡，公鸡、母鸡和小鸡各有几只？

实际题目中会按照M文钱买N只鸡的形式, 0 < M, N <= 250

按[公鸡、母鸡、小鸡]的顺序分别输出结果，一组解答占一行，解答按照公鸡数目从大到小排序（其次母鸡，再次小鸡）

无解时请输出 no answer

注意：钱要花完

Sample Input 1
100 100
​
Sample Ouput 1
12 4 84
8 11 81
4 18 78
0 25 75
​
Sample Input 2
1 4
​
Sample Output 2
no answer
no answer





76
Description
Enter the input as an integer whose last two digits represent the cents. For example, the input 1156 represents 11 dollars and 56 cents.

The output should display non-zero denominations only, using singular words for single units like 1 dollar and 1 penny, and plural words for more than one unit like 2 dollars and 3 pennies.

Input
A integer n represents money in cents. 
 

Output
The output should display non-zero denominations only, using singular words for single units like 1 dollar and 1 penny, and plural words for more than one unit like 2 dollars and 3 pennies. The units include dollar, quarter, dime, nickel and penny.

Sample Input
1156
​
Sample Output
Your amount 1156 consists of
11 dollars
2 quarters
1 nickel
1 penny
​
Hint
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent






78
题目
一日，有一个人前来买瓜，他骑着摩托来到了水果摊前面，问摊主：“哥们儿，你这瓜多少钱一斤啊？” “两块钱一斤。”摊主的回答脱口而出，然后心里一紧，发现这场景似曾相识。
“给我挑一个，它的重量x要满足ax 
2
 +bx+c=0的。”
摊主问：“你这人是不是故意找茬”
“你要是能挑出一个（有且仅有一个）瓜，那我肯定买”
摊主再三思索还是决定算出x来，但他算不出来，于是请求上过小学二年级的你来帮忙。
PS:这是一个魔法的世界，负数重量的瓜是存在的

问题输入
三个整数a, b, c, 含义见题目
（数据范围：1≤∣a∣,∣b∣,∣c∣,≤1000，且b 
2
 −4ac>0）

问题输出
满足ax 
2
 +bx+c=0的x 
1
​
 和x 
2
​
 ，保留两位小数，两个根不相等时先输出小的。

样例输入
1 2 1
​
样例输出
-1.00 -1.00
​
提示
算开平方可以使用数学库函数，具体可以自己运行下面这段程序

#include<math.h>
#include<stdio.h>

int main() {
	printf("9的0.5次方=%.2lf\nsqrt(9)=%.1lf",pow(9,0.5),sqrt(9));
}
#include<math.h>
#include<stdio.h>

int main() {
	printf("9的0.5次方=%.2lf\nsqrt(9)=%.1lf",pow(9,0.5),sqrt(9));
}
​




79
题目
输入三位同学的程序设计，高等数学，线性代数成绩，分别求三人的总成绩，以及他们总成绩、程序设计，高等数学，线性代数的平均成绩。

问题输入
输入三行，每行三个整数。第i行的三个数字依次表示第i个人的程序设计，高等数学，线性代数成绩。

问题输出
输出两行，第一行输出三个数字依次表示第1、2、3个人的总成绩，第二行输出四个数字，依次表示总成绩、程序设计成绩，高等数学成绩，线性代数成绩的平均值。输出的成绩均保留两位小数。

样例输入
1 2 3
4 5 6
7 8 9
​
样例输出
6.00 15.00 24.00
15.00 4.00 5.00 6.00
6.00 15.00 24.00
15.00 4.00 5.00 6.00




80
题目
输入两个在[100,999] 之间的整数，交换他们的十位数字。

问题输入
两个在[100,999] 之间的整数

问题输出
交换百位数字之后的两个整数

样例输入1
123 321
​
样例输出1
123 321
​
样例输入2
120 210
​
样例输出2
110 220
​
提示
巧妙运用整数除法和求余可以获得个位、十位、百位的数字。




81
题目
输入三个整数x,y,z，请把这三个数由大到小输出。

输入
0<= x ， y， z <= 1000

输入样例
50 10 20

输出样例
50 20 10

提示
最后输出需要进行换行




82
题目
已知满足以下两种情况之一时，该年是美好年，反之则不是。

年份是3的倍数但不是100的倍数；
年份是300的倍数。
请编写程序读入一个整数，并判断该年份是否是美好年。

输入格式：
输入一个整数y，表示当前的年份。

输出格式：
输出一行，如果给定的年份是美好年，则输出YES，否则输出NO。

Sample Input 1:
1980

Sample Output 1:
YES

Sample Input 2:
2017

Sample Output 2:
NO

注意：
1900 <= y <= 2017
答案的最后带有一个'\n'




83
题目
输入两个正数x和y(x与y的大小未知)，输出从x与y之间的偶数的和的相反数(包括x、y)。

输入
输入 x和y ( 0<x<=1000,0<y<=1000)

输出
输出从x到y的偶数的和的相反数（不包含偶数则输出0）。

样例1
3 5
​
样例1输出
-4
​
样例2
11 3
​
样例2输出
-28
​
注意
输出结果都会有换行符("\n");





84
Description
小沁是一只可爱的很胖的猫咪，你现在要陪它玩。你每次有三个选择：摸猫猫头，喂猫粮，什么也不做，分别用数字代号2、1、0表示，它们的效果如下。

摸猫猫头：小沁的心情值+1；
喂猫粮：小沁的心情值+2，体重值翻倍；
什么也不做：小沁的心情值-1，体重值减少四分之一（即变为原来的0.75倍）。
小沁的初始心情值是1，初始体重值是100.0。每当小沁的心情值改变时，根据改变后的心情值输出相应语句：

心情值大于0：输出Little Qin is happy! XD；
心情值等于0：输出Little Qin wants to play with you~ : )；
心情值小于0：输出Little Qin is sad... : (。
同理，每当小沁的体重值改变时，根据改变后的体重值输出相应语句：

体重值小于50.0：输出Cute!；
体重值在50.0和200.0之间（包含两端）：输出So cute!；
体重值大于200.0：输出Extremely CUTE!；
现在要求你根据输入的动作序列（包含7个动作），模拟陪小沁玩的过程，并输出一系列对应的语句。

Input
共7行，每行是0、1、2三个数字之一，代表相应动作。

Output
模拟过程中产生的语句序列。每个语句都带有换行。

Sample Input
2
0
0
1
1
2
0
​
Sample Output
Little Qin is happy! XD
Little Qin is happy! XD
So cute!
Little Qin wants to play with you~ : )
So cute!
Little Qin is happy! XD
So cute!
Little Qin is happy! XD
Extremely CUTE!
Little Qin is happy! XD
Little Qin is happy! XD
So cute!
​
Hint
不需要编写main函数。以下5个函数已经在play.h中被声明，在play.c中完成它们的定义即可。

int change_mood(int mood, int val);    // 将心情值改变为mood+val，并返回新的心情值；
void change_weight(float factor);    // 将体重值改变为原来的factor倍；请借助extern关键字使用main.c中声明的变量weight；
int rua(int mood);    // 摸猫猫头：输入当前心情值，返回新的心情值；
int feed(int mood);    // 喂猫粮：输入当前心情值，返回新的心情值；
int do_nothing(int mood);    // 什么也不做：输入当前心情值，返回新的心情值；
​
次序：请总是先更新心情值再更新体重值。
请体会心情值mood和体重值weight的作用域，以及它们各自在函数中传递、更新的方式。





85
Description
根据提供的 bcd.h 及 main.c两个文件，在文件bcd.c中，编写函数 int convertOctalToDecimal(int octalNumber);创建一个函数输入一个八进制数，输出十进制

Input
输入一个八进制数。

Output
输出对应的十进制数。

Sample Input
116
​
Sample Output
78
​





86
Description
在计算机科学上，有很多类问题是无法解决的，我们称之为不可解决问题。然而，在很多情况我们并不知道哪一类问题可以解决，那一类问题不可解决。现在我们就有这样一个问题，问题如下：

输入一个正整数n；

把n显示出来；

如果n=1则结束；

如果n是奇数则n变为3n+1 ，否则n变为n/2；

转入第2步。

例如对于输入的正整数22，应该有如下数列被显示出来：

22  11  34  17  52  26  13  40  20  10  5  16  8  4  2  1
​
我们推测：对于任意一个正整数，经过以上算法最终会推到1。尽管这个算法很简单，但我们仍然无法确定我们的推断是否正确。不过好在我们有计算机，我们验证了对于小于1000000的正整数都满足以上推断。

对于给定的正整数n，我们把显示出来的数的个数定义为n的链长，例如22的链长为16。

你的任务是编写一个程序，对于任意一对正整数i和j，给出i、j之间的最长链长，当然这个最长链长是由i、j之间的其中一个正整数产生的。我们这里的i、j之间即包括i也包括j。

Input
输入文件只有一行，即为正整数i和j，i和j之间以一个空格隔开。0<i≤j<10000。

Output
文件只能有一行带换行，即为i、j之间的最长链长。

Sample Input
1 10

​
Sample Output
20

20






87
将一个整型数组循环右移m位。如数组{1, 2, 3, 4, 5}循环右移一位后变成{5, 1, 2, 3, 4}。

main函数已经写好，你所要做的是完成移位函数void shift(int *, int, int)。

Input
输入有3行

第一行输入一个整数m，表示数组长度 (1 <= m <= 1000)

第二行输入 m 个int型整数，分别表示数组元素，以空格隔开

第三行输入一个整数n，表示循环移动的位数 (0 <= n <= 1000)

Output
输出为一行，输出移位后的数组元素，以空格隔开 (注意最后有一个换行)

Sample Input
5

1 2 3 4 5

2

Sample Output
4 5 1 2 3




88
Description
某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。我们可以把马路看成一个数轴，马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。

由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的树（包括区域端点处的两棵树）移走。你的任务是计算将这些树都移走后，马路上还有多少棵树。

Input
输入的第一行有两个整数L（1 <= L <= 10000）和 M（1 <= M <= 100），L代表马路的长度，M代表区域的数目，L和M之间用一个空格隔开。

接下来的M行每行包含两个不同的整数，用一个空格隔开，表示一个区域的起始点和终止点的坐标。

Output
输出包括一行，这一行只包含一个整数，表示马路上剩余的树的数目。

Sample Input
500 3
150 300
100 200
470 471
​
Sample Output
298
​




89
Description
给定一个长度小于1000的字符串，里面可能包含数字、字母、符号等。

现需要你把里面的数字按序输出，并以空格分割。

Sample Input
78y7

Sample Output
7 8 7




90
Description
给定字符串A，给定一行数列B。对于字符串A的每i位的字符A 
i
​
 ，将其按照字母表顺序向后移位B 
i
​
 位，输出新的字符串A 
′
 。

注：Z/z向后移一位会变成A/a。

Input
输入的第一行为字符串A，输入的第二行为数列B。
（A的长度不超过10000，B的长度与字符串A的长度一致）

Output
输出新的字符串A 
′
 。

Sample Input
abC
1 27 4
​
Sample Output
bcG
​
Sample Explain
注意B 
i
​
 可能大于26

对于第一位字符a，向后移位1位变成b
对于第二位字符b，向后移位27位变成c
对于第三位字符C，向后移位4位变成G
strlen函数可以用来求解字符串的长度




91
Description
现在给定两条字符串，如“abcdabc”和"abc"，要求字符串"abc"在"abcdabc"的最大字符串长度。最大字符串长度指的是"abc"在"abcdabc"连续出现的长度，当匹配的次数大于等于1的时候，不要求"abc"在后面也要保持完整。如"abcab"和“abc”的最大字符串长度为5。
字符串长度不大于10000。

Input
输入的第一个数字 N 代表测试样例数目，接下来有 2∗N 行字符串。
每两行字符串的第一个字符串为待匹配的字符串，第二个字符串为要匹配的字符串。

Output
题意要求的最大字符串匹配长度。

Sample Input
2
abcdabc
abc
abcdabcd
abcd

​
Sample Output
3
8

3
8




92
Description
给你两个字符串 s 和 goal ，如果我们可以通过交换 s 中的两个字母得到与 goal 相等的结果，输出YES，否则输出NO。

交换字母的定义是：取两个下标 i 和 j （下标从 0 开始）且满足 i != j ，接着交换 s[i] 和 s[j] 处的字符。

例如，在 "abcd" 中交换下标 0 和下标 2 的元素可以生成 "cbad" 。

Input
输入包括两行，分别代表字符串 s 和 goal，长度不超过10000。

Output
YES / NO

Sample Input
abcd
cbad
​
Sample Output
YES
YES



93
Description
给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。你需要实现的函数原型如下：

char* multiply(const char* num1, const char* num2)
​
Input
输入为两个字符串num1、num2，其中字符串长度均小于102，且只包含数字0-9。输入字符串均不会以0开头，除非是数字0本身。

Output
输出为两个字符串以数值形式相乘的结果，且以字符串形式返回。

Sample Input 1
num1 = "2", num2 = "3"
​
Sample Output 1
"6"
​
Sample Input 2
num1 = "123", num2 = "456"
​
Sample Output 2
"56088"
"56088"




94
Description
Write a function to check whether string s1 is a substring of string s2. The function returns the first index in s2 if there is a match. Otherwise, returns -1.

The function header is:

int indexOf(const char *s1, const char *s2)
​
Input
The inputs are 2 cstrings s1 and s2.

Output
The output is the first index of s1 as the substring of s2. If s1 isn't the substring of s2, then returns -1.

Sample Input 1
Abc
eAbc
​
Sample Output 1
1
​
Sample Input 2
aBd
a
​
Sample Output 2
-1
​
Hint
Don't submit the main() function.




95
Description
给出下列函数，大家要用指针的形式实现：

void swap(int* p, int* q);

void print_array(int* p, int size);

void print_matrix(int** mat, int row, int col);
​
其中swap是交换两个数字，print_array是打印数组，pirnt_matrix是打印矩阵。

Sample Output
2 1
1
2
3
4
5
1 2 3
2 3 4
3 4 5
​
Hint
大家记得在fun.c里面#include “fun.h”




96
题目描述
根据主函数架构和头文件提示，编写子函数compareVersion比较两个版本号 version1 和 version2

版本号由一个或多个修订号组成，各修订号由一个 '.' 连接。每个修订号由多位数字组成，可能包含前导零，如，2.5.33 和 0.1 都是有效的版本号。

版本号比较规则如下：

大版本优先比较，即按从左到右的顺序依次比较它们的修订号：1.0.1 < 1.1, 12.5 > 11.23.45， 123.2343.2323 < 456
比较修订号时，忽略前导0：如1.01 == 1.001 ，两者均表示在大版本1下修订一次的版本；但1.010 > 1.01，前者表示在大版本1下修订10次。
输入输出
输入输出格式
输入两个版本号，长度小于100，其中包含一个或多个修订号（即修订号长度范围1~99）；

子函数返回规则如下：

如果 version1 > version2 返回 1;
如果 version1 < version2 返回 -1;
除此之外返回 0。
输出输出样例
输入1：

1.2.3
1.02.03.0
​
输出1：

The same version.

输入2：

9.23.34.32
10
​
输出2：

10 is the new version.

提示
注意数据范围，使用合适的数据类型或方法防止溢出；




97
Description
通过指针与结构体的搭配，我们可以构造许多灵活的数据结构，其中一个最典型的例子就是单向链表。

单向链表的构建是通过定义一个含义有指针变量的结构体来实现的，这个指针又指向同种类型的结构体。

例如：

struct ListNode
{
    int value;
    struct ListNode *next;
};
​
有了这个结构体之后，我们可以让每个结构体变量中的指针指向“下一个”结构体变量。

那么只要知道了链表的第一个结点，就可以通过这个指针一个一个地访问链表的所有结点。

现在你的任务是给你一个指向链表开头结点的指针，编写一个 ReverseList 函数，用于将链表中的结点反向连接。

例如原链表为: 1->2->3，则反向连接后变为 3->2->1。

Hint
注意链表中指针的指向，以免出现迷途指针。记得include文件 List.h。




98
Description
之前大家学习过结构体的简单应用了。现在要开始学习结构体的一些高级应用了——链表。

链表的定义依赖于下列结构体：

struct Node {
	struct Node* next;
	int value;
};
​
链表是依靠一个一个节点连接而成：

 _ _    _ _    _ _
|v|n|->|v|n|->|v|n|->
​
其中v代表value,n存储着下一个节点的地址。

给出一串数字，大家要有序地插入到链表中。举个例子：5 1 3 4 在链表中的顺序为1 3 4 5。

函数的声明已经给出，请大家补全。

void insert(struct Node** head, int num);

void print_linklist(struct Node* head);

void delete_linklist(struct Node* head);

​
其中insert是用来插入元素到链表中，print_linklist是从链表头输出到链表尾，delete_linklist是删除链表。

输入的第一行是数字个数 N。第二行是该串数字。输出链表的元素。1<=N<=1000

Sample Input
4
5 1 3 4
​
Sample Output
1 3 4 5
1 3 4 5



99
Description
现在给出一串字符串，里面的括号要不成双出现，要不就不出现，也就是括号匹配。括号的种类包括'{'、'}'、'('、')‘、'['、']'。请大家判断字符串是否括号匹配，是则输出"Yes"，反之输出"No"。字符串长度不大于100。

Sample Input 1
abc(abc)
​
Sample Output 1
Yes
​
Sample Input 2
abv(aa
​
Sample Output 2
No
​





100
Description
歌手The Pancakes到幼儿园跟小朋友玩耍，她到达的时候小朋友们已经争着积木玩了。小朋友都想要更多的积木砌一个自己喜欢的图形，砌完就可以和The Pancakes合照。同时，The Pancakes手上还有一些积木，她可以把手上的这些积木全部给一个小朋友，然后等该小朋友砌完后就可以收回所发的积木和该小朋友原先手上的积木。但她不知道能否让所有的小朋友都和她合照，聪明的你可以帮助她吗？

Input
输入包含多个数据。

每个数据的第一行是两个正整数n和s，1≤n≤10000，1≤s≤1000000，表示一共有n位小朋友，The Pancakes手上有s块积木。以下有n行，第i行（1≤i≤n）有两个正整数，a和b，1≤a,b≤10 
9
 ，表示第i个小朋友手上有a块积木，还需要b块积木才能够砌完。

输入n=0时表示结束。

Output
如果可以让所有小朋友都和Pancake合照，就输出YES；否则，输出NO。

Sample Input
2 2
1 4
2 1
2 2
1 4
1 1
0 0
2 2
1 4
2 1
2 2
1 4
1 1
0 0
​
Sample Output
YES
NO