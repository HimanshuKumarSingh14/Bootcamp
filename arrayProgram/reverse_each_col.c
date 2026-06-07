#include<stdio.h>
#include<conio.h>
int main()
{
    int c,r;
    printf("enter the number of rows and columns\n");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("enter the elements in the matrix\n");
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
        int l=c-1;
        int k=arr[i][j];
        arr[i][j]=arr[i][c-j-1];
        arr[i][c-j-1]=k;
      }
    }
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