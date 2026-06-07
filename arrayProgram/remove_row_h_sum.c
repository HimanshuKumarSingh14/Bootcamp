#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the rows and column:\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter the elements in the array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    int t=0;
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];

        }
        
        if(sum>t)
        {
            t=sum;
            k=i;
        }
    }
    for(int i=k;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=arr[i+1][j];
        }
    }
    r--;
    printf("The new matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}