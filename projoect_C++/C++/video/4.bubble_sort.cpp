#include<iostream>
using namespace std;
void swap(int *m,int *n)
{
    int swap=*m;
    *m=*n;
    *n=swap;
}
void sort(int *p,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                
                swap(p[j],p[j+1]);
                
            }
        
        }
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[10];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    // //冒泡排序
    // //外层循环，总排序轮数为  元素个数-1
    // for(int i=0;i<n-1;i++)
    // {
    //     //内层排序，总排序论述为   元素个数-当前轮数-1
    //     for(int j=0;j<n-i-1;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             int swap=0;
    //             swap=arr[j+1];
    //             arr[j+1]=arr[j];
    //             arr[j]=swap;
    //         }
    //     }
    // }


    sort(arr,n);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout <<endl;
}