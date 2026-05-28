#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements\n");
    scanf("%d",&n);
    int arr[n];
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        else if(arr[i]==1)
        {
            c1++;
        }
        else{
            c2++;
        }

    }
    for(int i=0;i<c0;i++)
    {
        arr[i]=0;
    }
    for(int i=c0;i<c0+c1;i++)
    {
        arr[i]=1;
    }
    for(int i=c0+c1;i<c0+c1+c2;i++)
    {
        arr[i]=2;
    }
    printf("sorted array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}