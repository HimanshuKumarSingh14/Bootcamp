#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and column:\n");
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
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c/2;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][c-j-1];
            arr[i][c-j-1]=temp;
        }
    }

    for(int j=0;j<c;j++)
    {
        int top=0;
        int bottom=r-1;
        while(top<bottom)
        {
            int temp=arr[top][j];
            arr[top][j]=arr[bottom][j];
            arr[bottom][j]=temp;
            top++;
            bottom--;

        }

    }

    printf("Matrix after 180 degree rotation:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}