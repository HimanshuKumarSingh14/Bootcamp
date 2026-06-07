#include<stdio.h>
int main()
{
    int n;
    printf("Enter the elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",arr[0]-arr[n-1]);
    return 0;
}