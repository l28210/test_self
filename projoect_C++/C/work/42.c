// 42
// 题目描述
// 给定 n 个非负整数表示每个宽度为 1 的柱子的高度图，计算按此排列的柱子，下雨之后能接多少雨水。
// rainwatertrap.png

// 输入格式
// 第一行：输入柱子的个数 n，1≤n≤12；
// 第二行：输入 n 个整数，表示每根柱子的高度。

// 输出格式
// 输出一个整数 ans，表示总蓄水量。

// 输入样例1
// 12
// 0 1 0 2 1 0 1 3 2 1 2 1
// ​
// 输出样例1
// 6
// ​
// 输入样例2
// 6
// 4 2 0 3 2 5
// ​
// 输出样例2
// 9


#include <stdio.h>
#include <stdlib.h>

int trap(int *height, int heightSize)
{
    // int sum=0;
    // int start=0;
    // for(int i=0;i<heightSize;i++)
    // {
    //     if(height[i]>start)
    //     {
    //         start=height[i];
    //     }
    //     else
    //     {
    //         sum+=(start-height[i]);
    //     }
    // }
    // return sum;

        if (heightSize <= 2) {
        return 0;
    }

    int* leftMax = (int*)malloc(sizeof(int) * heightSize);
    int* rightMax = (int*)malloc(sizeof(int) * heightSize);

    leftMax[0] = height[0];
    for (int i = 1; i < heightSize; i++) {
        leftMax[i] = leftMax[i - 1] > height[i] ? leftMax[i - 1] : height[i];
    }

    rightMax[heightSize - 1] = height[heightSize - 1];
    for (int i = heightSize - 2; i >= 0; i--) {
        rightMax[i] = rightMax[i + 1] > height[i] ? rightMax[i + 1] : height[i];
    }

    int waterTrapped = 0;
    for (int i = 0; i < heightSize; i++) {
        int minMax = leftMax[i] < rightMax[i] ? leftMax[i] : rightMax[i];
        waterTrapped += minMax - height[i];
    }

    free(leftMax);
    free(rightMax);

    return waterTrapped;
}
//取每个柱子左右两侧最高的柱子，其中较小的减去这个柱子即为这个柱子上方的雨量

int main()
{
	int i, n = 0, trapWater = 0;
	scanf("%d", &n);

	int *arr;
	arr = (int *) malloc(n * sizeof(int));	

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	trapWater = trap(arr, n);
	printf("%d", trapWater);

	free(arr);		
	return 0;
}