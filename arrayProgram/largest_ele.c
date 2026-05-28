#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element in the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int larg=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>larg)
        {
            larg=arr[i];
        }
    }
    printf("largest element is %d",larg);
    return 0;
}