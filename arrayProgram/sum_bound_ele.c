#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number rows or column");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int top=0;
    int left=0;
    int bottom=n-1;
    int right=n-1;
    int sum=0;
    for(int i=left;i<=right;i++)
    {
        sum+=arr[top][i];
    }
    top++;
    for(int i=top;i<=bottom;i++)
    {
        sum+=arr[i][right];
    }
    right--;
    for(int i=right;i>=left;i--)
    {
        sum+=arr[bottom][i];
    }
    bottom--;
    for(int i=bottom;i>=top;i--)
    {
        sum+=arr[i][left];
    }
    printf("sum is %d",sum);
    return 0;
}