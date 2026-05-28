#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min_index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[min_index]>arr[i])
        {
            min_index=i;
        }
    }
    for(int i=min_index;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}