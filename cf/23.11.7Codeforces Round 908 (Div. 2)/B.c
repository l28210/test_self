#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        int a[102];
        int b[102]={0};
        scanf("%d",&n);
        for(int j=0;j<n;j++)
            scanf("%d",&a[j]);
        int count=0;
        int first=0;
        for(int p=0;p<n;p++)
        {
            for(int q=1;q<n;q++)
            {
                if(a[p]==a[q]&&a[p]!=first)
                {
                    first=a[p];
                    count++;
                    break;
                }
            }
        }
        if(count<2)
            printf("-1\n");
        else
        {
            int log=0;//记录是否是地一个重复数
            int t=0;//记录是否给值
            for(int p=0;p<n;p++)
            {
                t=0;
                for(int q=0;q<p;q++)
                {
                    
                    if(a[p]==a[q])
                    {
                        b[p]=1;
                        log=1;
                        t=1;
                        break;
                    }
                    

                    
                }//看有无重复的值
                
                if(log==1&&t==0)
                    b[p]=3;
                else if(log==0&&t==0)
                    b[p]=2;


            }
            for(int p=0;p<n;p++)
                printf("%d ",b[p]);
            printf("\n");
        }
        
    }    
    return 0;
}