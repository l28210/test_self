#include "stdio.h"

// Ignore it:
void set_sleepy_cat(int cat_id);

// Use it:
int meow(int start, int end);

// Implement it:
int find_sleepy_cat(int start, int end);


extern int cat_num;

static int sleepy_cat = -1;
static int set_flag = 0;

void set_sleepy_cat(int cat_id)
{
    if (!set_flag) {
        sleepy_cat = cat_id;
        set_flag = 1;
    }
    else
        printf("DO NOT CALL set_sleepy_cat()!\n");
}

int meow(int start, int end)
{
    static int meow_counts = 0;
    meow_counts++;
    // printf("%d\n", meow_counts);
    
    if (meow_counts > 18 || end < start || start < 0 || end > cat_num)
        return -1;
    else {
        int sum = (end - start) * 100;
        if (sleepy_cat >= start && sleepy_cat < end)
            sum -= 10;
        return sum;
    }
}
int find_sleepy_cat(int start, int end) {
    // 检查输入是否合法
    if (start < 0 || end > 318 || start >= end)
        return -1;

    // 如果只有一个猫咪，直接返回它的编号
    if (start + 1 == end) {
        return start;
    }

    // 计算左右两侧的音量之和
    int middle = (start + end) / 2;
    int left_volume = meow(start, middle);
    int right_volume = meow(middle, end);

    // 如果左侧音量偏小，递归查找左侧
    if (left_volume < (middle - start) * 100) {
        return find_sleepy_cat(start, middle);
    }
    // 如果右侧音量偏小，递归查找右侧
    else if (right_volume < (end - middle) * 100) {
        return find_sleepy_cat(middle, end);
    }
    // 如果两侧音量都正常，说明所有猫咪都睡醒了
    else {
        return -1;
    }
}

#define CAT_NUM 318

int cat_num = CAT_NUM;

int main()
{
    int sleepy_cat;
    scanf("%d", &sleepy_cat);
    set_sleepy_cat(sleepy_cat);
    printf("%d\n", find_sleepy_cat(0, CAT_NUM));

    return 0;
}
