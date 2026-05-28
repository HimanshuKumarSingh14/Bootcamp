#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row or col:\n");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements in the matrix");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    int d1=0;
    int d2=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                d1+=arr[i][j];
            }
            if((i+j)==n-1)
            {
                d2+=arr[i][j];
            }
        }
    }
    printf("Difference in the diagonals is %d",d1-d2);
    return 0;
}