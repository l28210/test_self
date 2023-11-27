// Description
// 小沁是一只可爱的很胖的猫咪，你现在要陪它玩。你每次有三个选择：摸猫猫头，喂猫粮，什么也不做，分别用数字代号2、1、0表示，它们的效果如下。

// 摸猫猫头：小沁的心情值+1；
// 喂猫粮：小沁的心情值+2，体重值翻倍；
// 什么也不做：小沁的心情值-1，体重值减少四分之一（即变为原来的0.75倍）。
// 小沁的初始心情值是1，初始体重值是100.0。每当小沁的心情值改变时，根据改变后的心情值输出相应语句：

// 心情值大于0：输出Little Qin is happy! XD；
// 心情值等于0：输出Little Qin wants to play with you~ : )；
// 心情值小于0：输出Little Qin is sad... : (。
// 同理，每当小沁的体重值改变时，根据改变后的体重值输出相应语句：

// 体重值小于50.0：输出Cute!；
// 体重值在50.0和200.0之间（包含两端）：输出So cute!；
// 体重值大于200.0：输出Extremely CUTE!；
// 现在要求你根据输入的动作序列（包含7个动作），模拟陪小沁玩的过程，并输出一系列对应的语句。

// Input
// 共7行，每行是0、1、2三个数字之一，代表相应动作。

// Output
// 模拟过程中产生的语句序列。每个语句都带有换行。

// Sample Input
// 2
// 0
// 0
// 1
// 1
// 2
// 0
// ​
// Sample Output
// Little Qin is happy! XD
// Little Qin is happy! XD
// So cute!
// Little Qin wants to play with you~ : )
// So cute!
// Little Qin is happy! XD
// So cute!
// Little Qin is happy! XD
// Extremely CUTE!
// Little Qin is happy! XD
// Little Qin is happy! XD
// So cute!
// Little Qin is happy! XD
// Little Qin is happy! XD
// So cute!
// Little Qin wants to play with you~ : )
// So cute!
// Little Qin is happy! XD
// So cute!
// Little Qin is happy! XD
// Extremely CUTE!
// Little Qin is happy! XD
// Little Qin is happy! XD
// So cute!

#include "stdio.h"
int change_mood(int mood, int val);
void change_weight(float factor);
int rua(int mood);
int feed(int mood);
int do_nothing(int mood);

extern float weight ;
int change_mood(int mood, int val)
{
    mood+=val;
    if(mood>0)
        printf("Little Qin is happy! XD\n");
    else if(mood==0)
        printf("Little Qin wants to play with you~ : )\n");
    else
        printf("Little Qin is sad... : (\n");
    return mood;
}
void change_weight(float factor)
{
    weight*=factor;
    if(weight<50)
        printf("Cute!\n");
    else if(weight>200)
        printf("Extremely CUTE!\n");
    else
        printf("So cute!\n");
}
int rua(int mood) 
{
    
    return change_mood(mood,1);

}

int feed(int mood) 
{
    change_mood(mood,2);
    change_weight(2.0);
    mood+=2;
    return mood;
    
}
int do_nothing(int mood) 
{
    change_mood(mood,-1);
    change_weight(0.75);
    mood--;
    return mood;
}
int main()
{
    int mood = 1, act;

    for (int i=0; i<7; i++) {
        scanf("%d", &act);

        switch (act) {
            case 2: mood = rua(mood); break;
            case 1: mood = feed(mood); break;
            case 0: mood = do_nothing(mood); break;
        }
    }
    
    return 0;
}