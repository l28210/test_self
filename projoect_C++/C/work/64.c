#include<stdio.h>
#include<stdlib.h>
void validMountainArray(int* arr, int len)
{
    if (len < 3) 
    {
        printf("false\n");
        return;
    }
    
    int i = 0;
    
    // Check for increasing part of the array
    while (i < len - 1 && arr[i] < arr[i + 1]) 
    {
        i++;
    }
    
    // If the increasing part is at the beginning or end, it's not a valid mountain
    if (i == 0 || i == len - 1) 
    {
        printf("false\n");
        return;
    }
    
    // Check for the decreasing part of the array
    while (i < len - 1 && arr[i] > arr[i + 1]) 
    {
        i++;
    }
    
    // If we reached the end of the array, it's a valid mountain
    if (i == len - 1) 
    {
        printf("true\n");
        return;
    } 
    else 
    {
        printf("false\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int *numbers = (int*) malloc(sizeof(int)*n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&numbers[i]);
    }
    validMountainArray(numbers,n);
    free(numbers);
    return 0;
}