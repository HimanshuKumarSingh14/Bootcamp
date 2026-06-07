#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int l=0;
    int top=0;
    int r=n-1;
    int b=n-1;
    while(top<=b && l<=r)
    {
        for(int i=l;i<=r;i++)
        {
            printf("%d ",arr[top][i]);
            
        }
        top++;
        for(int i=top;i<=b;i++)
        {
            printf("%d ",arr[i][r]);
        }
        r--;
        if(top<=b){
        for(int i=r;i>=l;i--)
        {
            printf("%d ",arr[b][i]);
            
        }
        b--;
    }
    if(l<=r)
    {
        for(int i=b;i>=top;i--)
        {
            printf("%d ",arr[i][l]);
           
        }
         l++;
    }
}
    return 0;
}