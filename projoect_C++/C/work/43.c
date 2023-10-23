// 43
// 题目描述
// 给你一个长度为 n 的整数数组，请你判断在最多改变 1 个元素的情况下，该数组能否变成一个非递减数列。如：

// 对于数列：4,2,3，可以通过把第一个4变成1来使得它成为一个非递减数列1,2,3

// 非递减数列： 对于数组中任意的 i (0 <= i <= n-2)，总满足 nums[i] <= nums[i + 1]。

// 输入输出
// 输入输出格式
// 输入整型数组长度(<7)与其元素([-100,100])，输出判断结果；

// 输出输出样例
// 输入1：

// 5
// 1 2 3 4 3
// ​
// 输出1：

// YES

// 输入2：

// 5
// 1 2 3 2 1
// ​
// 输出2：

// NO

# include <stdio.h>
# include <stdlib.h>
int checkPossibility(int *nums, int numsSize)
{
        if (numsSize <= 2) {
        return 1;
    }

    int count = 0;  // 记录需要改变的元素次数

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[i - 1]) {
            count++;
            if (count > 1) {
                return 0;  // 需要改变的元素次数大于1，不可能变成非递减数列
            }

            // 尝试改变 nums[i] 以满足非递减条件
            if (i >= 2 && nums[i] < nums[i - 2]) {
                nums[i] = nums[i - 1];
            }
        }
    }

    return 1;
}

int main()
{
	int N;
	scanf("%d", &N);

	int *arr;
	arr = (int *) malloc(N * sizeof(int));

	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	int rst = -1;
	rst = checkPossibility(arr, N);		//goal function

	switch (rst)
	{
		case 0:
			printf("NO");
			break;
		case 1:
			printf("YES");
			break;
		default:
			printf("invalid!");
			break;
	}

	free(arr);
	return 0;
}