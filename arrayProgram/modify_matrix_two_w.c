#include<stdio.h>
int main()
{
    int r;
    int c;
    printf("Enter the number of rows and column\n");
    scanf("%d",&r);
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]); 
        }
    }
    //negating the even rows
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i%2==0)
            {
                arr[i][j]=-arr[i][j];
            }
        }
    }
    //swapping 
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
 //printing the elements
 for(int i=0;i<r;i++)
 {
    for(int j=0;j<c;j++)
    {
        printf("%d   ",arr[i][j]);
    }
    printf("\n");
 }

    return 0;
}